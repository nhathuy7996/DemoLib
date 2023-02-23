#!/bin/sh

cd ../../
cd /Volumes/DVA/UNITY/DemoLib/Assets
cd $(git rev-parse --show-cdup)
git add -A
git commit -m "prepare add lib!!!!!!"
git subtree add --prefix Assets/DVAH/Unity3rdLib https://github.com/nhathuy7996/Unity3rdLib.git production --squash