#if UNITY_EDITOR
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using UnityEditor;
using UnityEngine;
using Debug = UnityEngine.Debug;


public class SetupSubtree
{
    [MenuItem("APERO/Add DVAH")]
    public static void SetUpSubtree()
    {

        string cmdPath = FindCommand();
        if (string.IsNullOrEmpty(cmdPath))
            return;

        var directory = new DirectoryInfo(Application.dataPath);
        while (directory.GetDirectories(".git").Length == 0)
        {
            directory = directory.Parent;

            if (directory == null)
            {
                throw new DirectoryNotFoundException("We went all the way up to the system root directory and didn't find any \".git\" directory!");
            }
        }
        var repositoryPath = directory.FullName;

        string cmdLines = "";
        if (RuntimeInformation.IsOSPlatform(OSPlatform.OSX))
        {
            cmdLines = "#!/bin/sh\n\n" +
            "cd ../../\n" +
            "cd " + Application.dataPath + "\n" +
            "cd $(git rev-parse --show-cdup)\n" +
            "git add -A\n" +
            "git commit -m \"prepare add lib!!!!!!\"\n" +
            "git subtree add --prefix " + Application.dataPath.Replace(repositoryPath + "/", "") + "/DVAH/Unity3rdLib https://github.com/nhathuy7996/Unity3rdLib.git production --squash";
        }
        else
        {
            cmdLines = "/K cd " + repositoryPath + "&" +
            "git add -A&" +
            "git commit -m \"prepare add lib!!!!!!\"&" +
            "git subtree add --prefix " + Application.dataPath.Replace(repositoryPath.Replace("\\", "/") + "/", "") + "/DVAH/Unity3rdLib https://github.com/nhathuy7996/Unity3rdLib.git production --squash";
        }

        string terminal = @"cmd.exe";

        if (RuntimeInformation.IsOSPlatform(OSPlatform.OSX))
        {
            terminal = @"/System/Applications/Utilities/Terminal.app/Contents/MacOS/Terminal";
            FileStream stream = new FileStream(cmdPath, FileMode.Create);
            using (StreamWriter writer = new StreamWriter(stream))
            {
                writer.Write(cmdLines);

                writer.Flush();
                writer.Close();
            }

            System.Diagnostics.Process uploadProc = new System.Diagnostics.Process();
            uploadProc.StartInfo.FileName = terminal;
            uploadProc.StartInfo.Arguments = cmdPath;
            uploadProc.StartInfo.UseShellExecute = false;
            uploadProc.StartInfo.CreateNoWindow = false;
            uploadProc.StartInfo.WindowStyle = System.Diagnostics.ProcessWindowStyle.Normal;

            uploadProc.Start();
        }
        else
        {
            terminal = @"C:\Windows\system32\cmd.exe";
            Process.Start(terminal, cmdLines);
        }
    }

    static string FindCommand()
    {
        string[] files = Directory.GetFiles(Application.dataPath, "*setup_subtree_git.sh", SearchOption.AllDirectories).ToArray();
        if (files.Length == 1)
        {
            return files[0];
        }

        UnityEngine.Debug.LogError("[Huynn3rdLib]==>Project dont have require .sh file. Can't auto push git!!!!!<==");
        return null;
    }
}
#endif