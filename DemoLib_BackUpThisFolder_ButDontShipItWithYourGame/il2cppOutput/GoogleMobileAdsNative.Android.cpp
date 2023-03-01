#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693;
// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>
struct EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50;
// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>
struct EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.Collections.Generic.HashSet`1<System.Int32Enum>
struct HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<GoogleMobileAds.Api.NativeAdType>
struct IEqualityComparer_1_tDF6D725D3C1AB54410BA5A4B191B7EF503CEA43A;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Boolean>[]
struct EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.HashSet`1/Slot<GoogleMobileAds.Api.NativeAdType>[]
struct SlotU5BU5D_t857611F300C9CB2FC1E2FA1826D7F33CAA58AE0D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// <Module>/?????????????????????????????????????????[]
struct U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D;
// <Module>/?????????????????????????????????????????[]
struct U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A;
// <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????[]
struct U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E;
// GoogleMobileAds.Android.AdLoaderClient
struct AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88;
// GoogleMobileAds.Common.AdLoaderClientArgs
struct AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D;
// GoogleMobileAds.Api.AdValue
struct AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// GoogleMobileAds.Android.CustomNativeAdClient
struct CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8;
// GoogleMobileAds.Common.CustomNativeClientEventArgs
struct CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// GoogleMobileAds.Common.DummyNativeClient
struct DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// GoogleMobileAds.GoogleMobileAdsNativeClientFactory
struct GoogleMobileAdsNativeClientFactory_t7B51A9D779A00C76464A224A4B52821D6A946C84;
// GoogleMobileAds.Common.IAdLoaderClient
struct IAdLoaderClient_tF8A7D1DD7900EBB40ED3BB947225A08502443B15;
// GoogleMobileAds.Common.ICustomNativeAdClient
struct ICustomNativeAdClient_t64801043F3A7F59D9B72FC2076C0CC861EBB3798;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9;
// GoogleMobileAds.Common.INativeAdClient
struct INativeAdClient_t7F9453021411EFCCC382978EBD9D107501DBA784;
// GoogleMobileAds.Common.INativeAdInteractionHandlerClient
struct INativeAdInteractionHandlerClient_t5FC9C293E2875D64B63C1978DA33891687D3D898;
// GoogleMobileAds.Common.IResponseInfoClient
struct IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7;
// GoogleMobileAds.Android.LoadAdErrorClient
struct LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.Android.NativeAdClient
struct NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08;
// GoogleMobileAds.Android.NativeAdInteractionHandlerClient
struct NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772;
// GoogleMobileAds.Common.NativeClientEventArgs
struct NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809;
// GoogleMobileAds.Android.ResponseInfoClient
struct ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// _jCmAeLMJfKd8jd5YpiShicMETGo._VJ3aRasocSrnjM7pn82beIEZwsFb
struct _VJ3aRasocSrnjM7pn82beIEZwsFb_t8DF3B09DD2D62AB0E68AD5842D26A26F700491F6;
// <Module>/?????????????????????????????????????????
struct U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36;
// <Module>/?????????????????????????????????????????
struct U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663;
// <Module>/?????????????????????????????????????????
struct U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// <Module>/?????????????????????????????????????????/?????????????????????????????????????????
struct U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A;
// <Module>/?????????????????????????????????????????/????????????????????????????????????????
struct U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7;

IL2CPP_EXTERN_C RuntimeClass* AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C____U202CU206AU202BU202BU200BU206BU200BU202CU206CU202BU206EU202CU200EU202EU206EU202CU200BU206EU202DU202EU200EU206EU202DU202EU200FU202CU202AU200FU206AU202CU200FU206EU206AU202EU202CU200BU200FU200EU206AU206BU202E_3_FieldInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D;
struct U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A;
struct U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t857611F300C9CB2FC1E2FA1826D7F33CAA58AE0D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// GoogleMobileAds.Common.AdLoaderClientArgs
struct AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9  : public RuntimeObject
{
	// System.String GoogleMobileAds.Common.AdLoaderClientArgs::<AdUnitId>k__BackingField
	String_t* ___U3CAdUnitIdU3Ek__BackingField_0;
	// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Common.AdLoaderClientArgs::<AdTypes>k__BackingField
	HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* ___U3CAdTypesU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> GoogleMobileAds.Common.AdLoaderClientArgs::<FormatIds>k__BackingField
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ___U3CFormatIdsU3Ek__BackingField_2;
	// System.Int32 GoogleMobileAds.Common.AdLoaderClientArgs::<NumberOfAdsToLoad>k__BackingField
	int32_t ___U3CNumberOfAdsToLoadU3Ek__BackingField_3;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_4;
};

struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_StaticFields
{
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// GoogleMobileAds.Api.AdValue
struct AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdValue/PrecisionType GoogleMobileAds.Api.AdValue::<Precision>k__BackingField
	int32_t ___U3CPrecisionU3Ek__BackingField_0;
	// System.Int64 GoogleMobileAds.Api.AdValue::<Value>k__BackingField
	int64_t ___U3CValueU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdValue::<CurrencyCode>k__BackingField
	String_t* ___U3CCurrencyCodeU3Ek__BackingField_2;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// GoogleMobileAds.Android.CustomNativeAdClient
struct CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.CustomNativeAdClient::customNativeAd
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___customNativeAd_0;
};

// GoogleMobileAds.Common.DummyNativeClient
struct DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F  : public RuntimeObject
{
	// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs> GoogleMobileAds.Common.DummyNativeClient::OnAdFailedToLoad
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___OnAdFailedToLoad_0;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.Common.DummyNativeClient::OnCustomNativeAdLoaded
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___OnCustomNativeAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.Common.DummyNativeClient::OnCustomNativeAdClicked
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___OnCustomNativeAdClicked_2;
	// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdLoaded
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* ___OnNativeAdLoaded_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdImpression_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdClicked
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdClicked_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdOpening_6;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdClosed_7;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// GoogleMobileAds.GoogleMobileAdsNativeClientFactory
struct GoogleMobileAdsNativeClientFactory_t7B51A9D779A00C76464A224A4B52821D6A946C84  : public RuntimeObject
{
};

// GoogleMobileAds.Android.LoadAdErrorClient
struct LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.LoadAdErrorClient::loadAdError
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___loadAdError_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// GoogleMobileAds.Android.NativeAdInteractionHandlerClient
struct NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Android.NativeAdInteractionHandlerClient::assetIDMappings
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___assetIDMappings_0;
	// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.NativeAdInteractionHandlerClient::_KDd3vcyJ52DGIXoEGYjTW347hRb
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____KDd3vcyJ52DGIXoEGYjTW347hRb_1;
};

// GoogleMobileAds.Common.NativeUtils
struct NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E  : public RuntimeObject
{
};

struct NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_StaticFields
{
	// System.String GoogleMobileAds.Common.NativeUtils::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// GoogleMobileAds.Android.ResponseInfoClient
struct ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.ResponseInfoClient::androidResponseInfo
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidResponseInfo_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// _jCmAeLMJfKd8jd5YpiShicMETGo._VJ3aRasocSrnjM7pn82beIEZwsFb
struct _VJ3aRasocSrnjM7pn82beIEZwsFb_t8DF3B09DD2D62AB0E68AD5842D26A26F700491F6  : public RuntimeObject
{
};

// <Module>/?????????????????????????????????????????
struct U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663  : public RuntimeObject
{
	// System.Byte[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U206EU200BU206EU202BU206BU202CU206EU200CU200BU202DU206EU200CU206FU200DU206CU200BU202CU200BU202BU206BU202CU200CU206DU200FU206DU200BU202AU202CU206EU200DU202AU200DU202EU200DU200DU200FU200EU206FU206DU200FU202E_0;
	// System.UInt32 <Module>/?????????????????????????????????????????::????????????????????????????????????????
	uint32_t ___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1;
	// System.IO.Stream <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U202CU200BU200FU200EU206DU206DU206AU202BU200CU200DU206DU206BU200FU202BU200FU200FU206FU202DU200EU200EU200BU206BU200BU206CU206DU200BU202CU202AU200EU200EU200CU206BU200FU202EU200EU206BU206EU200EU200DU202EU202E_2;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202BU206DU206CU206AU202CU206FU202BU206EU202AU206BU206EU206BU200DU202EU200EU200DU202DU200FU206AU206EU206DU206AU206CU202BU206FU202BU202BU202EU206EU200CU202DU202DU202CU200FU202CU200CU202BU200BU202DU206CU202E_3;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202BU200DU202EU206CU200FU206DU200BU200CU206FU206BU206AU206AU202BU200EU206DU202EU200EU202EU202DU200DU200EU206BU206CU206BU202CU202CU202CU206CU200FU200FU202CU206FU202EU202EU206BU206DU206BU202DU202DU206AU202E_4;
};

// <Module>/?????????????????????????????????????????
struct U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8  : public RuntimeObject
{
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1;
	// System.IO.Stream <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U200EU202DU200BU200EU200FU200CU202AU202AU200CU202CU200BU206DU200EU206AU200DU202DU206FU200FU200FU200EU206BU200BU200EU206EU202BU200BU206EU202EU200DU206BU200EU200BU206BU200CU206EU202CU202EU206DU202AU202CU202E_2;
};

// <Module>/?????????????????????????????????????????/????????????????????????????????????????
struct U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7  : public RuntimeObject
{
	// <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????
	U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E* ___U206BU200BU202CU206AU206DU200BU200CU200FU202DU202DU202CU202EU202BU200CU206CU206DU206EU202AU200DU206BU206FU206FU200EU202DU206CU202CU206DU200EU200FU206FU206EU206CU206DU200DU200DU206BU206CU206CU206DU200FU202E_0;
	// System.Int32 <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????
	int32_t ___U200BU200DU206AU206EU206FU200BU202EU202EU200BU206AU200DU202EU202BU200BU202AU200EU202AU202BU200DU202DU206BU200BU206FU206DU206CU202AU206CU200DU202BU206DU200BU206CU202AU202EU200CU202EU200DU200EU206AU200EU202E_1;
	// System.Int32 <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????
	int32_t ___U200BU206DU202BU200DU206FU206DU202BU202EU200EU202CU200FU206EU206EU206AU202AU202DU200FU200BU200DU202AU202BU200CU202AU200DU202DU206BU202BU202CU200DU202DU200FU202DU206EU200FU206FU202BU206AU200FU206AU206AU202E_2;
	// System.UInt32 <Module>/?????????????????????????????????????????/????????????????????????????????????????::????????????????????????????????????????
	uint32_t ___U200EU200FU202AU206BU200EU200DU202BU200DU206AU200DU200BU200BU200FU202CU206DU206EU206CU200BU206AU200EU200FU200DU206BU200FU202BU200DU202CU202EU206FU206DU206DU200EU202BU202DU200CU202EU206DU200DU202BU202E_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
struct KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
};

// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___U3CAdValueU3Ek__BackingField_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// GoogleMobileAds.Common.CustomNativeClientEventArgs
struct CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.ICustomNativeAdClient GoogleMobileAds.Common.CustomNativeClientEventArgs::<nativeAdClient>k__BackingField
	RuntimeObject* ___U3CnativeAdClientU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Common.CustomNativeClientEventArgs::<assetName>k__BackingField
	String_t* ___U3CassetNameU3Ek__BackingField_2;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;
};

// GoogleMobileAds.Common.NativeClientEventArgs
struct NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.INativeAdClient GoogleMobileAds.Common.NativeClientEventArgs::<nativeAdClient>k__BackingField
	RuntimeObject* ___U3CnativeAdClientU3Ek__BackingField_1;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <Module>/?????????????????????????????????????????
struct U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B 
{
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* ___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0;
	// System.Int32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	int32_t ___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1;
};
// Native definition for P/Invoke marshalling of <Module>/?????????????????????????????????????????
struct U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshaled_pinvoke
{
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* ___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0;
	int32_t ___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1;
};
// Native definition for COM marshalling of <Module>/?????????????????????????????????????????
struct U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshaled_com
{
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* ___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0;
	int32_t ___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1;
};

// <Module>/?????????????????????????????????????????
#pragma pack(push, tp, 1)
struct U202AU200EU206BU200EU200FU206EU206AU206DU206DU200FU206FU206DU202BU202DU206AU200DU202CU200CU206EU202CU202BU206EU202CU202EU206AU200EU200CU206FU202EU200BU202DU200CU200FU202AU200CU200BU200BU200BU200CU206FU202E_tAE2DDECA97483B5E1AEAC0B598697F853C888023 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U202AU200EU206BU200EU200FU206EU206AU206DU206DU200FU206FU206DU202BU202DU206AU200DU202CU200CU206EU202CU202BU206EU202CU202EU206AU200EU200CU206FU202EU200BU202DU200CU200FU202AU200CU200BU200BU200BU200CU206FU202E_tAE2DDECA97483B5E1AEAC0B598697F853C888023__padding[448];
	};
};
#pragma pack(pop, tp)

// <Module>/?????????????????????????????????????????
struct U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA 
{
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202CU200FU206AU206BU200CU200EU200EU202AU206EU206EU200DU200DU206DU206CU200BU200CU206FU206BU200FU202BU200CU202DU202EU206CU206EU206FU206DU200FU202EU202EU200BU206FU206FU200BU202AU206AU206FU206BU200BU206CU202E_0;
};

// <Module>/?????????????????????????????????????????
struct U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8 
{
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
};

// <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????
struct U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF 
{
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* ___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0;
};
// Native definition for P/Invoke marshalling of <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????
struct U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshaled_pinvoke
{
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* ___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0;
};
// Native definition for COM marshalling of <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????
struct U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshaled_com
{
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* ___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
struct Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
struct Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <Module>
struct U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C 
{
};

struct U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields
{
	// System.Byte[] <Module>::?????????????????????????????????????????
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U200EU200DU200BU206BU206FU200BU200DU200BU202BU200FU200CU202EU200CU206DU202BU200FU202EU206BU206DU206AU206EU206EU200CU202BU200FU202CU200EU206CU206EU202CU206CU200BU202EU200CU202BU206BU200DU206FU206CU200FU202E_2;
	// <Module>/????????????????????????????????????????? <Module>::?????????????????????????????????????????
	U202AU200EU206BU200EU200FU206EU206AU206DU206DU200FU206FU206DU202BU202DU206AU200DU202CU200CU206EU202CU202BU206EU202CU202EU206AU200EU200CU206FU202EU200BU202DU200CU200FU202AU200CU200BU200BU200BU200CU206FU202E_tAE2DDECA97483B5E1AEAC0B598697F853C888023 ___U202CU206AU202BU202BU200BU206BU200BU202CU206CU202BU206EU202CU200EU202EU206EU202CU200BU206EU202DU202EU200EU206EU202DU202EU200FU202CU202AU200FU206AU202CU200FU206EU206AU202EU202CU200BU200FU200EU206AU206BU202E_3;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// <Module>/?????????????????????????????????????????
struct U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36  : public RuntimeObject
{
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* ___U206DU206DU200CU200FU200DU200CU202EU202EU200DU206FU202BU200EU202EU206FU206AU206CU202CU202DU202DU200BU200CU206AU202AU206AU206FU202EU206DU206FU200FU206EU206BU200EU206FU202AU200BU202CU206DU206DU202EU200EU202E_0;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* ___U200FU202CU200BU206DU206FU202DU206CU202BU202BU200FU202DU206BU202BU200FU202BU200CU206BU202DU206CU202EU202CU206BU206AU206AU200FU206EU202AU200EU206CU206DU206EU206DU200FU202CU202AU200EU206EU202EU206CU206AU202E_1;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* ___U202AU202BU206AU206FU200EU206CU200DU206CU200FU206CU206AU200BU200DU206EU202EU200BU200EU206CU206DU202BU200CU202EU206CU206EU206AU206FU200BU202CU206DU200CU202EU200FU200CU206BU200DU206BU206FU206DU202EU206BU202E_2;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* ___U206DU200DU200DU200CU202AU202BU206DU200CU200EU206DU202EU200BU206BU202CU206BU200FU202DU200FU200EU200DU202EU202CU202BU202AU200BU206BU202DU202CU200EU200BU202DU202AU206CU200DU200DU202BU206AU202EU206DU202EU202E_3;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* ___U202BU200DU200DU206FU200DU206AU206DU202DU200CU202AU202BU200BU206EU200BU200CU206EU202AU200EU200FU200BU206AU200DU200EU206BU202AU206DU200BU200EU200EU206FU206EU202EU202DU200CU206FU206AU200BU202BU200CU200CU202E_4;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* ___U206DU202BU206CU200BU206DU202DU202AU202BU206BU206BU206EU202AU200FU200EU206DU206CU206FU200EU200CU202EU206BU202AU200EU200BU202DU206CU206EU206FU206CU202EU200FU200FU206DU202BU206CU206EU202DU202CU202CU200FU202E_5;
	// <Module>/?????????????????????????????????????????/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* ___U206DU200EU200EU206FU202DU206DU202DU206FU200DU200EU206EU206FU202AU202AU206BU202BU200CU206EU202EU206CU202BU202AU202EU200EU202CU200DU200CU202AU200EU206DU200EU206FU202DU200BU200DU200BU200EU202CU200CU202CU202E_6;
	// <Module>/?????????????????????????????????????????/???????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* ___U200FU206EU200FU206CU202BU206BU200CU200EU202EU206EU202BU206EU206BU206CU202BU200DU206BU200DU200EU202CU200BU200EU206BU200DU206CU206CU200EU202BU200BU202BU206EU206CU206BU202CU200CU206EU200EU202EU200CU200EU202E_7;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* ___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* ___U206CU200CU206EU202CU200BU206FU202BU202EU202BU200EU206CU202EU202DU200DU206FU202BU200CU200FU206CU202DU202EU206FU202CU200FU200BU206FU206BU206AU206FU200DU200BU202EU200CU200FU202CU202EU202CU206DU200EU206DU202E_9;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* ___U206CU206FU202EU202DU200EU202AU206BU206CU202DU200EU200EU200BU206AU202DU206AU200CU200DU200EU202DU202CU200FU202BU200DU202DU206EU202DU200EU202DU206BU206BU200EU206BU202AU200CU200BU200DU206CU206EU206AU206AU202E_10;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* ___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
	// <Module>/?????????????????????????????????????????/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* ___U200FU200FU206EU206EU200CU206BU202BU200CU206FU206CU206FU206EU206CU206BU200DU200BU206EU206AU202AU202BU202DU202DU202BU200DU206AU206FU200EU202CU206AU200FU206CU200FU202CU206CU200CU200EU200BU206FU206BU206FU202E_12;
	// System.Boolean <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	bool ___U202AU206EU200FU206DU200DU200FU206DU206CU202EU206FU200BU200BU202AU202DU202EU206AU200BU202EU200CU206FU202DU200EU200DU200FU200BU206EU206DU200FU206AU202DU206DU202EU202AU206EU206EU206BU200BU202AU200CU202BU202E_13;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U200FU200CU206AU200CU200EU200CU200BU202CU200DU206BU202BU200EU206FU202CU202BU206FU202DU206EU206EU206AU200DU202EU202AU206BU200DU200CU200DU200CU206BU200FU206BU202AU206CU202CU206AU200CU202AU200EU200DU206FU202E_14;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U206CU206BU200CU202BU200CU202BU206DU200FU202CU206AU202EU206FU206DU200DU206AU200FU202BU206AU206CU200BU200BU200EU202CU200EU200DU202CU206FU206EU200EU206DU202EU202EU202BU202EU202EU202DU206BU200EU200DU200FU202E_15;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B ___U202BU206BU202BU200DU202BU200EU206DU202AU200CU200FU206BU200BU200CU200CU202AU202DU206DU200CU200DU206BU206CU202DU200FU206CU206BU206AU206CU206FU206DU200EU202DU202EU202EU206BU206EU206CU200EU200BU206CU206CU202E_16;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U206AU200EU202AU202EU202CU206EU206DU206DU206FU206AU206AU206FU200BU206AU202EU202AU202EU200CU206BU206AU206CU200EU202DU202CU206AU202CU206CU206DU206EU206DU202AU206AU200BU200FU202EU202BU200DU200EU206DU206FU202E_17;
};

// <Module>/?????????????????????????????????????????/?????????????????????????????????????????
struct U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A  : public RuntimeObject
{
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* ___U200DU202BU206EU206FU200BU206CU202AU202CU206AU200DU200BU202AU200FU200BU206CU200FU200EU206AU202CU200DU206BU206FU200DU200DU206BU202EU200CU202DU206EU206BU206DU206EU206DU206BU202AU206EU206AU206DU202BU206DU202E_0;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* ___U206FU206FU202BU202EU202DU202BU200DU202CU200BU200DU202EU200CU202EU206EU206BU200EU200CU200FU206DU206AU200DU200CU206AU202DU200EU206DU202BU200DU202EU200DU206EU206BU200CU200EU202EU206EU200EU206EU200BU206EU202E_1;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA ___U200FU206BU206EU206CU200EU200DU200BU202DU200BU202BU206AU200DU206DU206CU206CU206DU200FU206EU206FU206FU202EU202CU206EU206BU206BU200FU206AU206FU206EU202AU202EU202AU202DU200CU200CU206AU202DU202EU200DU206AU202E_2;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA ___U200DU206BU206CU206FU200CU200CU200FU202CU200CU202AU200BU206CU202CU206EU202DU200DU200BU200CU200EU206CU206FU206CU202EU202AU202CU206EU200FU206CU206DU206BU200EU202CU202EU202BU206CU202AU206EU202EU202BU206DU202E_3;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B ___U206CU200FU206FU206DU200BU206BU206FU206CU202EU206BU206BU202EU202EU200DU206FU202DU206CU200FU206BU202DU206BU202AU206EU200EU206BU202BU202EU202DU202CU200EU206DU200DU206CU200FU200BU200BU200DU206CU200EU200DU202E_4;
	// System.UInt32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U206FU206FU202DU206BU200CU202BU206AU206EU200CU202EU200FU200CU200BU202DU200DU200CU206BU206FU202DU202EU206CU200FU200EU206DU202AU206BU202DU200BU200BU202AU206AU206BU206DU202EU206CU202DU202EU200DU202AU206FU202E_5;
};

// GoogleMobileAds.Android.AdLoaderClient
struct AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.AdLoaderClient::adLoader
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___adLoader_4;
	// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs> GoogleMobileAds.Android.AdLoaderClient::OnAdFailedToLoad
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___OnAdFailedToLoad_5;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.Android.AdLoaderClient::OnCustomNativeAdLoaded
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___OnCustomNativeAdLoaded_6;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.Android.AdLoaderClient::OnCustomNativeAdClicked
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___OnCustomNativeAdClicked_7;
	// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs> GoogleMobileAds.Android.AdLoaderClient::OnNativeAdLoaded
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* ___OnNativeAdLoaded_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.AdLoaderClient::OnNativeAdImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdImpression_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.AdLoaderClient::OnNativeAdClicked
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdClicked_10;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.AdLoaderClient::OnNativeAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdOpening_11;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.AdLoaderClient::OnNativeAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdClosed_12;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// GoogleMobileAds.Android.NativeAdClient
struct NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Android.NativeAdClient::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_4;
	// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.NativeAdClient::nativeAd
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___nativeAd_5;
	// GoogleMobileAds.Android.NativeAdInteractionHandlerClient GoogleMobileAds.Android.NativeAdClient::interactionHandlerClient
	NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* ___interactionHandlerClient_6;
};

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>
struct EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>
struct EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// <Module>/?????????????????????????????????????????[]
struct U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A  : public RuntimeArray
{
	ALIGN_FIELD (8) U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA m_Items[1];

	inline U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA value)
	{
		m_Items[index] = value;
	}
};
// <Module>/?????????????????????????????????????????[]
struct U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D  : public RuntimeArray
{
	ALIGN_FIELD (8) U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B m_Items[1];

	inline U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0), (void*)NULL);
	}
	inline U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0), (void*)NULL);
	}
};
// <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????[]
struct U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E  : public RuntimeArray
{
	ALIGN_FIELD (8) U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF m_Items[1];

	inline U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0), (void*)NULL);
	}
	inline U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0), (void*)NULL);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisRuntimeObject_m3E93FA2C2AA5DE01D2AD842BA46B0D9259D77099_gshared (uint32_t p0, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisRuntimeObject_mFB8D7D11A48918C96E22214B27202FEC37F19CE3_gshared (uint32_t p0, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisRuntimeObject_mC87000A191CA8FB31BB6A617FB228B3A8828FB73_gshared (uint32_t p0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisRuntimeObject_m036F6C613D4718D2D2AD55B1F43D67DD60262B61_gshared (uint32_t p0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32Enum>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mC7FB9D44EF9B75D89964DC508B4B08D8DA98339E_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B Dictionary_2_GetEnumerator_mC7827569955B8266DAC471AC8CBCADC6416AB941_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m47DDE5BF12A9FCE3120292E1B2F352CDDD214EEF_gshared (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 Enumerator_get_Current_m90E0638FF1812FE1DDE8D13CC607F4CD161D12C1_gshared_inline (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisRuntimeObject_mB8EE0244DF69F286FC59985F25E1027FBD1398EC_gshared (uint32_t p0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0712867110707C27D0A2D46D9735F066C9BA48A2_gshared (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;

// System.Void <Module>::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U200FU200CU202DU200BU202CU200BU206EU200FU200FU202AU202DU200EU206FU202BU202AU200BU206DU202CU202AU206DU206CU200FU202DU200BU206EU200BU206DU200FU202AU200BU200EU200BU206BU206AU202CU202EU200CU200DU206EU200FU202E_m91EDE03E89B39EEF2D931CF5418AA4AF7B159784 (const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E__ctor_m2D608EBFB45DD3C35908F4789513F6D6842B6FDB (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U202AU206FU202AU206EU202CU202BU206EU202BU202AU206FU206EU206AU206CU206AU206CU200EU202BU202DU202CU206CU206AU202CU202DU200BU202AU206BU200FU206FU206AU200CU206AU206BU206DU200EU200DU202CU202DU200DU206CU202CU202E_m9141F12641670371AD9D2066CEE2481437FF2ED9 (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m5BAFB4CE0C3BB700DB05907C334DD64834D75D1B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, bool ___writable1, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.IO.Stream,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U200CU200CU202DU206BU200EU202CU202DU200FU206DU202DU202CU206DU202BU200BU206AU200EU206FU200BU206CU202EU206BU202EU202BU202CU200CU206FU206AU200BU202BU202BU206FU206AU202CU206CU202BU200CU200EU202CU200FU206CU202E_mDC8E1A7DFEFF703AE2455D70040021F46AFB5DF2 (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p1, int64_t p2, int64_t p3, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Byte[] <Module>::?????????????????????????????????????????(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* U3CModuleU3E_U206AU202BU206FU200FU200BU206AU200BU200CU206EU206EU200CU202AU206BU200CU200BU206EU200CU206BU202BU202DU206BU206AU202DU200DU202EU206BU200CU200DU206AU202BU206BU206FU200BU202EU206CU202CU206CU206FU200DU202DU202E_mF4298A68A62E40970DCE1127F7F13EC2985FCB04 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056 (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E__ctor_m1926AA055D99164DD1C196A0F5B701DD4EE95592 (U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U200FU202DU200BU206BU200EU202AU206EU206CU202BU206BU206CU202DU200BU202CU200BU206CU200FU206DU202EU200FU200DU206FU206BU202CU206BU200BU206CU202AU200CU200FU206BU206CU206EU202CU202BU200BU200BU206AU202AU200CU202E_m76F9A027DF3FE429F7187112B6C5FF37CED880CE (U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206EU202BU202CU202DU202DU200CU206CU200CU200CU202AU202AU200BU206AU206DU202BU206CU202DU200CU200BU202EU206BU200EU202CU202EU202CU202BU200EU206BU200FU202BU200CU206DU200FU200EU206BU206AU200FU206BU202EU206AU202E_mECDBD5D94CF50EEA7C36024C4EE8387FD7D0E14B (U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206CU206AU206BU200FU206BU202CU206FU202DU200CU202BU206CU206BU202AU202CU200CU202AU206BU200DU206AU200CU200EU202DU200EU200EU202BU202EU200BU200DU202DU206AU206CU202AU206DU200EU202DU206FU200BU202EU202EU202DU202E_m9A56878E7864B1B30ED4369FA57B5A347BAC0B29 (U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E__ctor_mDA7191992C311C8F4F07C8E6045D05F2B580B14E (U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E__ctor_m6D56AACC04ACD130641956EF3F3AEC01B1292090 (U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E__ctor_m2966F6FB3B70085446A333E85AA6ABF03DE36369 (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E__ctor_mD79A88A9FAB73C4869A84ED0C0ECF051591C9626 (U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Math::Max(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7 (uint32_t ___val10, uint32_t ___val21, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206BU200CU202EU200DU200EU206BU202BU200BU200DU200CU200FU200CU202CU206DU206EU200CU200FU200EU200EU202AU202CU202BU202CU206BU200EU202DU206FU206EU206AU200FU202DU202BU202AU206DU202EU202CU206CU202BU202BU202E_mFC3E05087AE8F64B4853C52ED661B856AD5CD4A7 (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, uint32_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U200FU202AU206CU200DU206EU202DU200FU206BU200FU206CU200DU206BU202AU206CU200EU206AU200EU202DU200BU206BU206EU206DU200DU202BU202DU202BU202EU202EU206FU200BU206DU206EU200DU202DU202BU202AU206CU202BU206AU202BU202E_m40FDD473421631CCE94F32ECB380A9E9A606DB00 (U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_U202BU206FU206AU206FU202BU202AU202CU202DU200CU202CU200CU206CU200DU206DU200FU200FU202DU200BU206CU206BU202AU200EU200EU200FU202CU202AU202DU200DU200BU200EU206AU202AU206BU206DU206CU202CU200FU200CU202DU202CU202E_mDDB069456A89ADAE29D51DF2AAA7842C441D423F (U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* __this, uint32_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_U202AU202AU202BU206AU200EU202CU200EU206FU206CU206EU200CU200DU206FU206FU206FU202DU206EU200DU202CU202AU206FU206BU200EU200EU206FU202DU200EU206FU202DU200DU202CU200DU202BU202AU206CU200BU200CU206FU200EU206DU202E_m9F4451EF1A2A5FDAB4C0790B4937262B25B591E9 (U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_U202EU206DU206DU202DU200BU202CU206BU200EU202AU200BU206AU206CU200EU200EU202DU206DU202BU206EU202BU206DU206BU202CU206FU200EU206BU206AU206AU202BU202EU200DU202CU202EU202EU200BU202EU206AU206DU202BU206BU200FU202E_m075275B910D7F14433A869E6263277F4155DF772 (U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U200BU202AU206DU200DU200DU202AU206EU206CU200EU200CU200CU206FU202AU200BU200FU200CU202BU206CU202EU206DU200DU206EU200EU200EU206DU206CU202BU206CU206FU206DU206DU202BU202BU206EU202DU200FU206BU206AU206DU202BU202E_mB83508945AC964AC32BD860A4B3B00434EA6C30F (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, bool p1, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U202AU206AU200CU206FU206CU200FU202CU200EU200CU200FU206FU202BU202DU206FU200DU206BU206AU200CU206EU202BU202BU206BU200CU206AU200DU200DU202DU200FU200BU206BU206EU202DU206DU202CU200DU202EU202DU200EU202EU202AU202E_mB6EBF7D623695E477227729975608B7BFA18056C (U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::????????????????????????????????????????(System.IO.Stream,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U206AU206BU200FU206AU200DU206AU202DU206AU200EU206BU206EU206AU206FU206EU200FU200CU206CU202DU200FU206FU206BU200BU202CU206AU200DU202DU202BU202AU202CU206BU200DU206BU200BU206BU206CU206EU206AU202BU206EU202E_mE773385C18F4BFB53A54A935DD8316BB6C42557C (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p1, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_U200CU202EU206BU206FU200FU202BU200BU202CU206FU206BU202EU202BU202BU202DU200DU202AU206EU200BU206DU200CU200FU202AU206BU206EU206AU206DU206BU206DU200FU200DU202DU206CU200DU200DU200BU200CU206FU206EU206FU202DU202E_m53FF8FD906E75AF348CB5E64AC7BD8CC1C5E9E8C (U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_U206FU200FU206AU206AU202CU206EU200BU202CU202EU200CU202AU200DU206DU202DU202EU206FU202DU202DU202AU200BU202EU202DU206AU206CU206DU206BU202CU202CU202EU200EU206FU206AU200BU202EU202DU202AU200EU206BU206BU200DU202E_mFC14D0B536278223DCC452F61DE4419CEA55A02F (U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, uint32_t p1, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U202EU202DU206EU206AU202BU200BU200FU206FU202BU200EU206CU202CU206AU200BU200EU200EU202BU206DU202EU206AU206AU206AU200DU200EU200CU200DU206BU202CU200FU202CU200DU202EU206DU200DU202DU206BU202EU202DU206DU206FU202E_m0E89AE02BB13D5AB880CE25F4F4AAFA09D61A48D (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206CU206AU206BU200BU206AU206DU200CU206EU206BU206EU200DU206CU202BU206EU206FU206FU206EU206CU200EU200FU206DU202BU202BU202DU206CU200BU206EU202BU206FU206EU200CU206CU200EU206EU206DU200CU206AU202DU206DU206DU202E_m7BFC0F2D7CB2391AD8AAB8AE69F82190EE8F80E5 (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200EU202CU200BU200FU202EU200CU200DU206AU206FU206EU202BU206AU200CU206CU200BU200CU206AU206BU206DU200BU206DU206AU202AU202BU206FU200FU202DU202CU202EU200DU206CU200CU202AU202EU200DU206EU206BU200CU200FU200DU202E_mECE91C0C864053D62DBA98DFD221D66AA42E9312 (U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U206FU200EU206DU200DU200DU202AU200DU200CU202AU206CU206BU202DU206CU206CU202CU202CU202CU206BU200BU200FU202AU200BU200FU206FU200EU202BU206BU200EU200CU200CU202BU200EU202CU206DU200FU206CU206EU200BU202AU202BU202E_m97F7752B53C1F058489A46CA3F74F72D2008F3EB (uint32_t p0, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U206AU206EU202AU202AU206FU200BU206FU202CU202DU206FU200DU202BU200EU206FU202CU206EU206FU202EU206FU202BU206AU200CU200CU202DU200CU206CU200FU202BU200DU202BU206FU206EU206BU200FU200BU202EU202EU202EU206FU200DU202E_m5CA83382E0A42282694FA67B2A8C27653F7A6861 (U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, uint32_t p1, uint8_t p2, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U202AU200FU206BU206BU200FU206FU206AU206DU200DU202EU200DU202CU200EU202DU202CU206BU206DU202AU200BU200DU200CU202BU200EU206DU206AU206DU200CU202EU206AU206CU206FU202EU206CU202DU206CU206BU206BU200CU202BU202DU202E_m14389FEBAE859C343FDA84BC9D25FFF9C73800DA (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, uint8_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206EU200DU206DU206CU200FU206DU200BU206AU206EU202BU202EU206BU202CU206DU206BU202CU206BU200FU200BU202BU200BU206CU202AU206BU202DU202DU200EU200EU206EU200BU206DU206CU200CU200BU206AU206DU200CU206AU202EU200FU202E_m6D5C9D3F76CF0DDFBAF4F9E924D7C8B609A9E319 (U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* __this, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206FU200BU200BU202EU202EU202BU206BU206DU206FU200BU206AU202DU202EU206CU206AU200DU202CU206CU206EU200FU206CU200FU206DU206DU200FU206BU202DU206BU200BU200CU202AU206AU202EU206FU200FU202EU202DU206CU202CU206BU202E_m5B6E14A328259A386A6523F050EB9A3EB85386B2 (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, uint32_t p0, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????[],System.UInt32,<Module>/?????????????????????????????????????????,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206FU200EU202CU202DU202CU200CU202DU206DU206BU206DU202AU200BU206AU202AU206EU202EU202AU206BU202AU202AU206BU200BU202DU200DU206EU200CU202DU200EU206EU206BU200DU200DU206CU200DU202CU200CU206DU206BU206FU200DU202E_mBC8374786819633A0E26D5C39408F66EE06920B4 (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* p0, uint32_t p1, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p2, int32_t p3, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206BU206FU202EU202DU200EU200EU202DU200CU206EU200DU206EU202EU206FU200EU206CU202AU202DU200DU200CU206EU206CU200EU202BU200FU200DU202BU202AU202DU202BU200CU200FU206DU206FU206AU206DU202CU200CU200BU200DU200EU202E_mFCCF7B739B50C4A62068107E042045228AFFFB16 (U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206AU200EU206AU206DU202AU206EU200DU206AU200DU200CU202EU202EU202AU206FU206BU200FU202DU206FU200BU202EU202EU206FU206AU202BU206AU206BU200CU200DU202BU200EU200EU206AU202CU202AU202CU206FU200CU206DU200DU200DU202E_mD11D2F7DC43CBC333F6FD572F9867A81E09733C7 (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, uint32_t p0, uint32_t p1, const RuntimeMethod* method) ;
// System.Boolean <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206BU200BU200EU202CU202CU206BU200BU200BU206FU200CU202BU202DU202AU206BU202DU206FU206EU206DU200FU206DU202EU200BU202CU202BU206EU200BU206CU200CU206AU202AU200DU200EU206AU206DU200CU200CU200CU206EU202DU200CU202E_m4E0B3FAA7338B81236EDA2D5DFAAF6AE9DC25F50 (U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* __this, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U200CU206BU202AU202EU202CU200DU200DU206DU200FU206DU200FU206EU202CU200DU206BU206BU206AU200DU200EU202DU206AU202DU202DU200BU206AU206DU202EU206BU200EU202EU206FU200DU206CU200DU206DU206DU202BU206EU202CU200EU202E_m7B6761569B7BDD44767C066B2EA058438CB15C6F (U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, uint32_t p1, uint8_t p2, uint8_t p3, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200CU206BU202AU206CU206EU202AU200BU206CU206AU200FU200BU206AU202AU200EU206CU202AU206FU202AU206AU202CU206EU200CU200DU206AU200BU206AU202DU206CU202BU206AU206FU206FU200DU200EU200FU200BU206FU200DU206DU200CU202E_mB9C173B2A6358C099FA7693D9627FD281CC47935 (U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_U200FU200BU202BU206EU206CU202AU206BU206FU206BU200DU200BU202AU202CU202CU200DU206FU202EU202EU202DU202BU206EU202AU206AU202BU206CU206EU206FU206AU200BU202AU202AU200CU202EU206BU200CU206CU206CU202BU200BU202EU202E_mCEF629385EF387C1B2F6C882D8CD559B000AFEC1 (U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200DU202DU202EU206FU200EU206EU202EU202CU200FU202AU202DU200FU202EU202CU200FU206FU206FU200BU206EU200DU206AU202CU200DU202CU202BU206BU202BU206AU202CU206CU206DU200BU200BU206DU206EU200FU206EU200BU206AU200FU202E_mDA620F9C21ED51C706C4B099513776616ED0625C (U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U206FU202EU202EU206BU200BU200DU200FU202EU202BU206FU202BU202EU200CU200DU200CU200BU200CU202BU206BU206CU206BU206AU200CU200EU206FU200CU206BU202AU202EU202EU200DU200BU206DU202CU202EU200CU202EU202EU200BU206CU202E_m2FA9B9E7ABB6A684C862084BCC7CB90BB9E29A90 (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U200DU200BU202DU206EU202EU206DU206DU202AU206AU200EU202BU202DU206DU200DU200FU200DU200BU206AU200EU206FU206BU200CU206AU202EU202EU200EU202AU202EU200FU202DU202AU206FU206DU200DU206DU200BU202AU202BU202DU200EU202E_m4AEF5C1473E6070472A8AC69481C7576351AE295 (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, uint32_t p0, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U202DU200CU206FU202EU200DU206CU202DU206BU202EU202BU202CU202DU200CU200FU202BU200FU206CU200FU202CU206AU200EU202BU200CU200FU202CU200BU202CU206BU206CU200FU202BU206AU206DU202EU206AU206BU200EU206AU206DU206FU202E_m4598CA9E47181506F4AB85FC3E37552DAC96F36C (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200BU202CU202BU206DU202EU200DU200FU206CU200EU202DU202AU200BU200EU200DU202CU200DU200CU202CU206EU206EU206BU200FU206EU206BU206CU200FU202BU200BU200DU200CU202DU202AU206FU202AU202AU206CU206CU200EU202BU202EU202E_m09338BC4ED956EC0081CBDD47EAD5B4C0FAB3E6C (U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200EU200CU202BU202BU206CU206EU200CU206EU206CU206BU206FU206AU202BU206CU206BU206FU206AU202CU200DU206FU200FU202AU200EU206DU206FU206CU202BU200DU202EU206EU200DU200FU206EU200BU200BU200EU200DU206DU200DU206BU202E_m35E4179957FA3C6E18E2ABB42DD58661F1F5164C (U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U202CU202DU200DU206AU200CU200DU200DU202CU200FU206DU206DU206FU202EU200EU202BU206AU206DU200BU202CU200BU202BU206AU200DU202DU200EU202AU206DU202BU206BU202CU206AU200DU200BU200BU200FU200EU206FU206BU206EU202DU202E_mBB8D3507524B609AB04542CADBC914EC0D6A1055 (U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* __this, uint32_t p0, uint8_t p1, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200FU202DU202EU202BU200DU206FU206AU200CU202BU200BU200FU200EU200BU206FU206BU200CU202AU200EU200CU202BU202DU200DU202BU200EU202DU202BU206AU200BU206CU206BU200BU202BU202CU206AU200EU206DU206EU206BU202AU206DU202E_mBE2CEA8798A97286D5A56933B5990BEA2B45EE71 (U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U206AU206FU202EU206DU200FU206AU202EU200CU206BU206BU200DU200DU206BU202BU206EU206FU206CU202CU206DU206BU200CU206FU206BU206CU202AU202EU206CU206FU206DU200BU200EU202DU202BU206CU200CU206BU200CU206FU202EU206BU202E_m4836884F90DF30A121AA21FF0FEAE78DDD9565D0 (U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, uint8_t p1, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23 (uint32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (uint32_t, const RuntimeMethod*))U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisRuntimeObject_m3E93FA2C2AA5DE01D2AD842BA46B0D9259D77099_gshared)(p0, method);
}
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B (uint32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (uint32_t, const RuntimeMethod*))U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisRuntimeObject_mFB8D7D11A48918C96E22214B27202FEC37F19CE3_gshared)(p0, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05 (uint32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (uint32_t, const RuntimeMethod*))U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisRuntimeObject_mC87000A191CA8FB31BB6A617FB228B3A8828FB73_gshared)(p0, method);
}
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0 (uint32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (uint32_t, const RuntimeMethod*))U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisRuntimeObject_m036F6C613D4718D2D2AD55B1F43D67DD60262B61_gshared)(p0, method);
}
// System.String GoogleMobileAds.Common.AdLoaderClientArgs::get_AdUnitId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdLoaderClientArgs_get_AdUnitId_m9CB2CEDA6950AE81735C721A64024FEE084C1095_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Common.AdLoaderClientArgs::get_AdTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* AdLoaderClientArgs_get_AdTypes_m3286F08DA89AEF0941C3580385F858CE95635BD4_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>::Contains(T)
inline bool HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F (HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4*, int32_t, const RuntimeMethod*))HashSet_1_Contains_mC7FB9D44EF9B75D89964DC508B4B08D8DA98339E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Int32 GoogleMobileAds.Common.AdLoaderClientArgs::get_NumberOfAdsToLoad()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdLoaderClientArgs_get_NumberOfAdsToLoad_m16518458445D87FF740EE67FB2117837684591E0_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> GoogleMobileAds.Common.AdLoaderClientArgs::get_FormatIds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* AdLoaderClientArgs_get_FormatIds_m6731C0FF425BE0CC73D07B3C07A81D5A5C33CF4A_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
inline Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22 (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C (*) (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mC7827569955B8266DAC471AC8CBCADC6416AB941_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::Dispose()
inline void Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14 (Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C*, const RuntimeMethod*))Enumerator_Dispose_m47DDE5BF12A9FCE3120292E1B2F352CDDD214EEF_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::get_Current()
inline KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_inline (Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C (*) (Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C*, const RuntimeMethod*))Enumerator_get_Current_m90E0638FF1812FE1DDE8D13CC607F4CD161D12C1_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_inline (KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C*, const RuntimeMethod*))KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_inline (KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline)(__this, method);
}
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656 (uint32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (uint32_t, const RuntimeMethod*))U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisRuntimeObject_mB8EE0244DF69F286FC59985F25E1027FBD1398EC_gshared)(p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::MoveNext()
inline bool Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2 (Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C*, const RuntimeMethod*))Enumerator_MoveNext_m0712867110707C27D0A2D46D9735F066C9BA48A2_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.String GoogleMobileAds.Common.NativeUtils::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NativeUtils_get_Version_mB8F63B5B552D940B0351BE63FA0ED6E4B93B04D2_inline (const RuntimeMethod* method) ;
// System.String GoogleMobileAds.Api.AdRequest::BuildVersionString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdRequest_BuildVersionString_mE20A7E8289BA107C2409CE7A3DCFEC5770EEC513 (String_t* ___nativePluginVersion0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.Utils::GetAdRequestJavaObject(GoogleMobileAds.Api.AdRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* Utils_GetAdRequestJavaObject_m1B081FD57A546B7181D07C58C1101E57A227EF7E (AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, String_t* ___nativePluginVersion1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.NativeClientEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClientEventArgs__ctor_mF7DEA301F79DC4E7B2B76ECC00B6AD55D15FF636 (NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Android.NativeAdClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdClient__ctor_m0E816B4BC558AF7D091637D3BFFFC2A81CAD5DC6 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___nativeAd0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.NativeClientEventArgs::set_nativeAdClient(GoogleMobileAds.Common.INativeAdClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeClientEventArgs_set_nativeAdClient_mCEDBB0459BE0B3E308DA85F15E98E31D740B97FA_inline (NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mE7BEDD3511C7196786EEA138E2CCB15EDFBA079E_inline (EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* __this, RuntimeObject* ___sender0, NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*, RuntimeObject*, NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m23461BB0B5DF74CDA38E5E94CC0CEADB138F06C5_inline (EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* __this, RuntimeObject* ___sender0, CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*, RuntimeObject*, CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void GoogleMobileAds.Common.CustomNativeClientEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs__ctor_mB86D8364F64424DC0778551C310DC8F0B71A46FB (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Android.CustomNativeAdClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNativeAdClient__ctor_m3DCCBCD93644C868D3D4F8E33B4EECD459CDC311 (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___customNativeAd0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.CustomNativeClientEventArgs::set_nativeAdClient(GoogleMobileAds.Common.ICustomNativeAdClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_nativeAdClient_m7C4578E96709771F4B4E26B0EF01FD72C1CF0E75_inline (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.CustomNativeClientEventArgs::set_assetName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_assetName_m0FFF03346E29AB4599BEB94FD9E2CB5BD6D163C4_inline (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.LoadAdErrorClientEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdErrorClientEventArgs__ctor_m2D09A984965A5EDB0506CDAC47BE1675E80AE0AB (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Android.LoadAdErrorClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdErrorClient__ctor_mAAB2CB3CA79F7FC1CDDA014A8194DDB6A26F9967 (LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___loadAdError0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.LoadAdErrorClientEventArgs::set_LoadAdErrorClient(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadAdErrorClientEventArgs_set_LoadAdErrorClient_m6E865CB1B347CEF0B75F55CE43EE3FDBF8353353_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m10AA45946252533013704CF408E2DDD0B3BACA82_inline (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*, RuntimeObject*, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String[]>(System.String,System.Object[])
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Byte[]>(System.String,System.Object[])
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Android.AdLoaderClient::.ctor(GoogleMobileAds.Common.AdLoaderClientArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__ctor_m055D518AE1A587BD96A7C9A0ADF874B6296FDD1D (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* ___args0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.DummyNativeClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNativeClient__ctor_m116A1174D312D713C92ADBB744748987A37D15C1 (DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void GoogleMobileAds.Android.NativeAdInteractionHandlerClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdInteractionHandlerClient__ctor_mBBCE221D0C939EAF772625836F672623C4115DFE (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* p0, const RuntimeMethod* method) ;
// System.Object Google.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_m1823918610311F093CBF1E0C77B52C348008763B (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
inline double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void GoogleMobileAds.Android.ResponseInfoClient::.ctor(GoogleMobileAds.Common.ResponseInfoClientType,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseInfoClient__ctor_mB3010C36F05A40A73A03FC081FBBD7A15C528EDC (ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E* __this, int32_t ___type0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidJavaObject1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValue::set_CurrencyCode(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_CurrencyCode_mA493466D946C6484F0F20604EF0B013EA0571F71_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValue::set_Value(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_Value_m7DF76A9D4ED62FE1F5FDBA6FEBBACD4E92115BE9_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*, RuntimeObject*, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void GoogleMobileAds.Api.AdValueEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdValueEventArgs__ctor_m2786F476E77E35470958434534FA8976541ED4E0 (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValueEventArgs::set_AdValue(GoogleMobileAds.Api.AdValue)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValueEventArgs_set_AdValue_mFDB2656F4BDBCC3CE719341385666747D72F357E_inline (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* __this, AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdValue__ctor_mC8469F36ABE33454B249EBBA51574A1CFAC01010 (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValue::set_Precision(GoogleMobileAds.Api.AdValue/PrecisionType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_Precision_m488B0F9CAEBACDD5013E094660C3DD58B362FD03_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Android.NativeAdInteractionHandlerClient::_rEYLGE9n17QTNLVYjnxdu95cgKe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NativeAdInteractionHandlerClient__rEYLGE9n17QTNLVYjnxdu95cgKe_m56976C1B0C3124CD18810627EF7E8CAC1AC0A243 (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, const RuntimeMethod* method) ;
// System.String Google.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.NativeUtils::CastAssetIDMappings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NativeUtils_CastAssetIDMappings_m7E3C8BCCFD5A11C1B344838C26028076B70D52C2 (String_t* ___jsonMappings0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E__cctor_mFEE6D1AF7247BA240F45722DF5DF18F016D11468 (const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		U3CModuleU3E_U200FU200CU202DU200BU202CU200BU206EU200FU200FU202AU202DU200EU206FU202BU202AU200BU206DU202CU202AU206DU206CU200FU202DU200BU206EU200BU206DU200FU202AU200BU200EU200BU206BU206AU202CU202EU200CU200DU206EU200FU202E_m91EDE03E89B39EEF2D931CF5418AA4AF7B159784(NULL);
		return;
	}
}
// System.Byte[] <Module>::?????????????????????????????????????????(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* U3CModuleU3E_U206AU202BU206FU200FU200BU206AU200BU200CU206EU206EU200CU202AU206BU200CU200BU206EU200CU206BU202BU202DU206BU206AU202DU200DU202EU206BU200CU200DU206AU202BU206BU206FU200BU202EU206CU202CU206CU206FU200DU202DU202E_mF4298A68A62E40970DCE1127F7F13EC2985FCB04 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_7 = NULL;
	int64_t V_8 = 0;
	uint32_t V_9 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = p0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
		U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* L_2 = (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36*)il2cpp_codegen_object_new(U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E__ctor_m2D608EBFB45DD3C35908F4789513F6D6842B6FDB(L_2, NULL);
		V_1 = L_2;
	}

IL_000d:
	{
		G_B2_0 = ((int32_t)-142693559);
	}

IL_0012:
	{
		int32_t L_3 = ((int32_t)(G_B2_0^((int32_t)-1153023905)));
		V_9 = L_3;
		switch (((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)((int32_t)13))))
		{
			case 0:
			{
				goto IL_005c;
			}
			case 1:
			{
				goto IL_00e4;
			}
			case 2:
			{
				goto IL_00ca;
			}
			case 3:
			{
				goto IL_00b7;
			}
			case 4:
			{
				goto IL_0072;
			}
			case 5:
			{
				goto IL_009a;
			}
			case 6:
			{
				goto IL_017e;
			}
			case 7:
			{
				goto IL_000d;
			}
			case 8:
			{
				goto IL_0120;
			}
			case 9:
			{
				goto IL_0101;
			}
			case 10:
			{
				goto IL_0136;
			}
			case 11:
			{
				goto IL_0088;
			}
			case 12:
			{
				goto IL_0158;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_005c:
	{
		int32_t L_4 = V_4;
		if ((((int32_t)L_4) >= ((int32_t)8)))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_5 = ((int32_t)-2020145564);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_006f;
	}

IL_0069:
	{
		int32_t L_6 = ((int32_t)-1900158558);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_006f:
	{
		G_B2_0 = G_B7_1;
		goto IL_0012;
	}

IL_0072:
	{
		int32_t L_7 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		uint32_t L_8 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-1448970763)))^((int32_t)-784999430)));
		goto IL_0012;
	}

IL_0088:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_9);
		V_5 = L_10;
		G_B2_0 = ((int32_t)-916528285);
		goto IL_0012;
	}

IL_009a:
	{
		U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		NullCheck(L_11);
		U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U202AU206FU202AU206EU202CU202BU206EU202BU202AU206FU206EU206AU206CU206AU206CU200EU202BU202DU202CU206CU206AU202CU202DU200BU202AU206BU200FU206FU206AU200CU206AU206BU206DU200EU200DU202CU202DU200DU206CU202CU202E_m9141F12641670371AD9D2066CEE2481437FF2ED9(L_11, L_12, NULL);
		V_3 = ((int64_t)0);
		uint32_t L_13 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)1870053195)))^((int32_t)-634078678)));
		goto IL_0012;
	}

IL_00b7:
	{
		uint32_t L_14 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-1969720)))^((int32_t)-539121913)));
		goto IL_0012;
	}

IL_00ca:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)5);
		V_2 = L_15;
		uint32_t L_16 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)-1629944831)))^((int32_t)-355948397)));
		goto IL_0012;
	}

IL_00e4:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, 5);
		uint32_t L_20 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)-1972818251)))^((int32_t)-1550921611)));
		goto IL_0012;
	}

IL_0101:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_21 = V_0;
		NullCheck(L_21);
		int64_t L_22;
		L_22 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_21);
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_22, ((int64_t)((int32_t)13))));
		uint32_t L_23 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)272720234)))^((int32_t)-1494180424)));
		goto IL_0012;
	}

IL_0120:
	{
		V_4 = 0;
		uint32_t L_24 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)-1169357091)))^((int32_t)2079198867)));
		goto IL_0012;
	}

IL_0136:
	{
		int64_t L_25 = V_3;
		int32_t L_26 = V_5;
		int32_t L_27 = V_4;
		V_3 = ((int64_t)(L_25|((int64_t)(((int64_t)((int32_t)(uint8_t)L_26))<<((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_27))&((int32_t)63)))))));
		uint32_t L_28 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_28, ((int32_t)-911633477)))^((int32_t)-1030829654)));
		goto IL_0012;
	}

IL_0158:
	{
		int64_t L_29 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)L_29));
		V_6 = L_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_6;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_32 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		MemoryStream__ctor_m5BAFB4CE0C3BB700DB05907C334DD64834D75D1B(L_32, L_31, (bool)1, NULL);
		V_7 = L_32;
		uint32_t L_33 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_33, ((int32_t)146893852)))^((int32_t)-882784609)));
		goto IL_0012;
	}

IL_017e:
	{
		U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* L_34 = V_1;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_35 = V_0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_36 = V_7;
		int64_t L_37 = V_8;
		int64_t L_38 = V_3;
		NullCheck(L_34);
		U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U200CU200CU202DU206BU200EU202CU202DU200FU206DU202DU202CU206DU202BU200BU206AU200EU206FU200BU206CU202EU206BU202EU202BU202CU200CU206FU206AU200BU202BU202BU206FU206AU202CU206CU202BU200CU200EU202CU200FU206CU202E_mDC8E1A7DFEFF703AE2455D70040021F46AFB5DF2(L_34, L_35, L_36, L_37, L_38, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_6;
		return L_39;
	}
}
// System.Void <Module>::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U200FU200CU202DU200BU202CU200BU206EU200FU200FU202AU202DU200EU206FU202BU202AU200BU206DU202CU202AU206DU206CU200FU202DU200BU206EU200BU206DU200FU202AU200BU200EU200BU206BU206AU202CU202EU200CU200DU206EU200FU202E_m91EDE03E89B39EEF2D931CF5418AA4AF7B159784 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C____U202CU206AU202BU202BU200BU206BU200BU202CU206CU202BU206EU202CU200EU202EU206EU202CU200BU206EU202DU202EU200EU206EU202DU202EU200FU202CU202AU200FU206AU202CU200FU206EU206AU202EU202CU200BU200FU200EU206AU206BU202E_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B28_1 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B43_1 = 0;
	{
		V_0 = ((int32_t)112);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)112));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C____U202CU206AU202BU202BU200BU206BU200BU202CU206CU202BU206EU202CU200EU202EU206EU202CU200BU206EU202DU202EU200EU206EU202DU202EU200FU202CU202AU200FU206AU202CU200FU206EU206AU202EU202CU200BU200FU200EU206AU206BU202E_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_2 = L_3;
	}

IL_001e:
	{
		G_B2_0 = ((int32_t)-1712400938);
	}

IL_0023:
	{
		int32_t L_4 = ((int32_t)(G_B2_0^((int32_t)-1883767428)));
		V_12 = L_4;
		switch (((int32_t)((uint32_t)(int32_t)L_4%(uint32_t)(int32_t)((int32_t)32))))
		{
			case 0:
			{
				goto IL_015f;
			}
			case 1:
			{
				goto IL_0396;
			}
			case 2:
			{
				goto IL_03ae;
			}
			case 3:
			{
				goto IL_00b9;
			}
			case 4:
			{
				goto IL_01d1;
			}
			case 5:
			{
				goto IL_0486;
			}
			case 6:
			{
				goto IL_035b;
			}
			case 7:
			{
				goto IL_0209;
			}
			case 8:
			{
				goto IL_02c6;
			}
			case 9:
			{
				goto IL_0242;
			}
			case 10:
			{
				goto IL_037a;
			}
			case 11:
			{
				goto IL_0170;
			}
			case 12:
			{
				goto IL_02f8;
			}
			case 13:
			{
				goto IL_0138;
			}
			case 14:
			{
				goto IL_011d;
			}
			case 15:
			{
				goto IL_0292;
			}
			case 16:
			{
				goto IL_00de;
			}
			case 17:
			{
				goto IL_001e;
			}
			case 18:
			{
				goto IL_0342;
			}
			case 19:
			{
				goto IL_0437;
			}
			case 20:
			{
				goto IL_0110;
			}
			case 21:
			{
				goto IL_02e5;
			}
			case 22:
			{
				goto IL_03cd;
			}
			case 23:
			{
				goto IL_0323;
			}
			case 24:
			{
				goto IL_03fe;
			}
			case 25:
			{
				goto IL_01f3;
			}
			case 26:
			{
				goto IL_0418;
			}
			case 27:
			{
				goto IL_0223;
			}
			case 28:
			{
				goto IL_03eb;
			}
			case 29:
			{
				goto IL_02ac;
			}
			case 30:
			{
				goto IL_00f1;
			}
			case 31:
			{
				goto IL_0270;
			}
		}
	}
	{
		goto IL_0486;
	}

IL_00b9:
	{
		uint32_t L_5 = V_3;
		uint32_t L_6 = V_3;
		V_3 = ((int32_t)((int32_t)L_5^((int32_t)((uint32_t)L_6>>((int32_t)27)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_2;
		int32_t L_8 = V_4;
		uint32_t L_9 = V_3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_9);
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		uint32_t L_11 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)1058938855)))^((int32_t)741602670)));
		goto IL_0023;
	}

IL_00de:
	{
		uint32_t L_12 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)-751561152)))^((int32_t)1200481970)));
		goto IL_0023;
	}

IL_00f1:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_7;
		NullCheck(L_14);
		int32_t L_15 = 3;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18 = 3;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_16^(int32_t)L_19)));
		uint32_t L_20 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)-1928560932)))^((int32_t)-1493524957)));
		goto IL_0023;
	}

IL_0110:
	{
		V_9 = 0;
		G_B2_0 = ((int32_t)-692851456);
		goto IL_0023;
	}

IL_011d:
	{
		int32_t L_21 = V_5;
		uint32_t L_22 = V_0;
		if ((((int64_t)((int64_t)L_21)) >= ((int64_t)((int64_t)(uint64_t)L_22))))
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_23 = ((int32_t)-1424798584);
		G_B11_0 = L_23;
		G_B11_1 = L_23;
		goto IL_0132;
	}

IL_012c:
	{
		int32_t L_24 = ((int32_t)-37828954);
		G_B11_0 = L_24;
		G_B11_1 = L_24;
	}

IL_0132:
	{
		G_B2_0 = G_B11_1;
		goto IL_0023;
	}

IL_0138:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_2;
		int32_t L_26 = V_10;
		NullCheck(L_25);
		uint32_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)));
		int32_t L_28 = *((uint32_t*)L_27);
		uint32_t L_29 = V_11;
		*((int32_t*)L_27) = (int32_t)((int32_t)(L_28^(int32_t)L_29));
		int32_t L_30 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		uint32_t L_31 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)-24069610)))^((int32_t)599896858)));
		goto IL_0023;
	}

IL_015f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_7;
		int32_t L_33 = V_10;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_11 = L_35;
		G_B2_0 = ((int32_t)-1462859441);
		goto IL_0023;
	}

IL_0170:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_7;
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)11);
		uint32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_2;
		NullCheck(L_40);
		int32_t L_41 = ((int32_t)11);
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)((int32_t)L_39^(int32_t)L_42)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_7;
		NullCheck(L_44);
		int32_t L_45 = ((int32_t)12);
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_2;
		NullCheck(L_47);
		int32_t L_48 = ((int32_t)12);
		uint32_t L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)((int32_t)((int32_t)L_46^(int32_t)L_49)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_7;
		NullCheck(L_51);
		int32_t L_52 = ((int32_t)13);
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_2;
		NullCheck(L_54);
		int32_t L_55 = ((int32_t)13);
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)((int32_t)L_53^(int32_t)L_56)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_7;
		NullCheck(L_58);
		int32_t L_59 = ((int32_t)14);
		uint32_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_2;
		NullCheck(L_61);
		int32_t L_62 = ((int32_t)14);
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)((int32_t)L_60^(int32_t)L_63)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_7;
		NullCheck(L_65);
		int32_t L_66 = ((int32_t)15);
		uint32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_2;
		NullCheck(L_68);
		int32_t L_69 = ((int32_t)15);
		uint32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)((int32_t)L_67^(int32_t)L_70)));
		V_10 = 0;
		uint32_t L_71 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_71, ((int32_t)-922787047)))^((int32_t)-1329373478)));
		goto IL_0023;
	}

IL_01d1:
	{
		V_5 = 0;
		V_6 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_7 = L_72;
		uint32_t L_73 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_73, ((int32_t)1828368011)))^((int32_t)1589567942)));
		goto IL_0023;
	}

IL_01f3:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = V_7;
		int32_t L_75 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = V_1;
		int32_t L_77 = V_5;
		int32_t L_78 = V_9;
		NullCheck(L_76);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_77, L_78));
		uint32_t L_80 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (uint32_t)L_80);
		G_B2_0 = ((int32_t)-1276176530);
		goto IL_0023;
	}

IL_0209:
	{
		int32_t L_81 = V_4;
		if ((((int32_t)L_81) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0217;
		}
	}
	{
		int32_t L_82 = ((int32_t)-450721731);
		G_B20_0 = L_82;
		G_B20_1 = L_82;
		goto IL_021d;
	}

IL_0217:
	{
		int32_t L_83 = ((int32_t)-357440584);
		G_B20_0 = L_83;
		G_B20_1 = L_83;
	}

IL_021d:
	{
		G_B2_0 = G_B20_1;
		goto IL_0023;
	}

IL_0223:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = V_7;
		NullCheck(L_85);
		int32_t L_86 = 2;
		uint32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = V_2;
		NullCheck(L_88);
		int32_t L_89 = 2;
		uint32_t L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_87^(int32_t)L_90)));
		uint32_t L_91 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_91, ((int32_t)966553825)))^((int32_t)-616008967)));
		goto IL_0023;
	}

IL_0242:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = V_7;
		NullCheck(L_93);
		int32_t L_94 = 8;
		uint32_t L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = V_2;
		NullCheck(L_96);
		int32_t L_97 = 8;
		uint32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)((int32_t)L_95^(int32_t)L_98)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = V_7;
		NullCheck(L_100);
		int32_t L_101 = ((int32_t)9);
		uint32_t L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = V_2;
		NullCheck(L_103);
		int32_t L_104 = ((int32_t)9);
		uint32_t L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)((int32_t)L_102^(int32_t)L_105)));
		uint32_t L_106 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_106, ((int32_t)-1412503157)))^((int32_t)1178649568)));
		goto IL_0023;
	}

IL_0270:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = V_7;
		NullCheck(L_108);
		int32_t L_109 = ((int32_t)10);
		uint32_t L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_111 = V_2;
		NullCheck(L_111);
		int32_t L_112 = ((int32_t)10);
		uint32_t L_113 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)((int32_t)((int32_t)L_110^(int32_t)L_113)));
		uint32_t L_114 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_114, ((int32_t)843279754)))^((int32_t)915530177)));
		goto IL_0023;
	}

IL_0292:
	{
		int32_t L_115 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)16)));
		uint32_t L_116 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_116, ((int32_t)-1293839041)))^((int32_t)1682120867)));
		goto IL_0023;
	}

IL_02ac:
	{
		int32_t L_117 = V_9;
		if ((((int32_t)L_117) < ((int32_t)((int32_t)16))))
		{
			goto IL_02ba;
		}
	}
	{
		int32_t L_118 = ((int32_t)-1928733772);
		G_B28_0 = L_118;
		G_B28_1 = L_118;
		goto IL_02c0;
	}

IL_02ba:
	{
		int32_t L_119 = ((int32_t)-294439547);
		G_B28_0 = L_119;
		G_B28_1 = L_119;
	}

IL_02c0:
	{
		G_B2_0 = G_B28_1;
		goto IL_0023;
	}

IL_02c6:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = V_7;
		NullCheck(L_121);
		int32_t L_122 = 0;
		uint32_t L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = V_2;
		NullCheck(L_124);
		int32_t L_125 = 0;
		uint32_t L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_123^(int32_t)L_126)));
		uint32_t L_127 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_127, ((int32_t)1756109121)))^((int32_t)1434708214)));
		goto IL_0023;
	}

IL_02e5:
	{
		uint32_t L_128 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_128, ((int32_t)2065766449)))^((int32_t)1869707553)));
		goto IL_0023;
	}

IL_02f8:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = V_7;
		NullCheck(L_130);
		int32_t L_131 = 5;
		uint32_t L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = V_2;
		NullCheck(L_133);
		int32_t L_134 = 5;
		uint32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)((int32_t)L_132^(int32_t)L_135)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_136 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = V_7;
		NullCheck(L_137);
		int32_t L_138 = 6;
		uint32_t L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_140 = V_2;
		NullCheck(L_140);
		int32_t L_141 = 6;
		uint32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)((int32_t)L_139^(int32_t)L_142)));
		uint32_t L_143 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_143, ((int32_t)-804831915)))^((int32_t)1337087526)));
		goto IL_0023;
	}

IL_0323:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_144 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_145 = V_7;
		NullCheck(L_145);
		int32_t L_146 = 4;
		uint32_t L_147 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = V_2;
		NullCheck(L_148);
		int32_t L_149 = 4;
		uint32_t L_150 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)((int32_t)L_147^(int32_t)L_150)));
		uint32_t L_151 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_151, ((int32_t)1272656226)))^((int32_t)-1895482434)));
		goto IL_0023;
	}

IL_0342:
	{
		int32_t L_152 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_152, 1));
		uint32_t L_153 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_153, ((int32_t)-1943597200)))^((int32_t)-111177759)));
		goto IL_0023;
	}

IL_035b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_154 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_155 = V_7;
		NullCheck(L_155);
		int32_t L_156 = 7;
		uint32_t L_157 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_158 = V_2;
		NullCheck(L_158);
		int32_t L_159 = 7;
		uint32_t L_160 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_154);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)((int32_t)L_157^(int32_t)L_160)));
		uint32_t L_161 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_161, ((int32_t)-1349548486)))^((int32_t)355114345)));
		goto IL_0023;
	}

IL_037a:
	{
		V_3 = ((int32_t)-974456097);
		V_4 = 0;
		uint32_t L_162 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_162, ((int32_t)91771703)))^((int32_t)-652625443)));
		goto IL_0023;
	}

IL_0396:
	{
		uint32_t L_163 = V_3;
		uint32_t L_164 = V_3;
		V_3 = ((int32_t)((int32_t)L_163^((int32_t)((uint32_t)L_164>>((int32_t)12)))));
		uint32_t L_165 = V_3;
		uint32_t L_166 = V_3;
		V_3 = ((int32_t)((int32_t)L_165^((int32_t)((int32_t)L_166<<((int32_t)25)))));
		G_B2_0 = ((int32_t)-2116503297);
		goto IL_0023;
	}

IL_03ae:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_167 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_168 = V_7;
		NullCheck(L_168);
		int32_t L_169 = 1;
		uint32_t L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_171 = V_2;
		NullCheck(L_171);
		int32_t L_172 = 1;
		uint32_t L_173 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_170^(int32_t)L_173)));
		uint32_t L_174 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_174, ((int32_t)-1756438040)))^((int32_t)-162943401)));
		goto IL_0023;
	}

IL_03cd:
	{
		uint32_t L_175 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_176 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_175, 4))));
		V_8 = L_176;
		uint32_t L_177 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_177, ((int32_t)1645084507)))^((int32_t)-511664226)));
		goto IL_0023;
	}

IL_03eb:
	{
		uint32_t L_178 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_178, ((int32_t)535234926)))^((int32_t)-1405908151)));
		goto IL_0023;
	}

IL_03fe:
	{
		int32_t L_179 = V_10;
		if ((((int32_t)L_179) >= ((int32_t)((int32_t)16))))
		{
			goto IL_040c;
		}
	}
	{
		int32_t L_180 = ((int32_t)-277833764);
		G_B43_0 = L_180;
		G_B43_1 = L_180;
		goto IL_0412;
	}

IL_040c:
	{
		int32_t L_181 = ((int32_t)-1735978541);
		G_B43_0 = L_181;
		G_B43_1 = L_181;
	}

IL_0412:
	{
		G_B2_0 = G_B43_1;
		goto IL_0023;
	}

IL_0418:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_182 = V_8;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_183;
		L_183 = U3CModuleU3E_U206AU202BU206FU200FU200BU206AU200BU200CU206EU206EU200CU202AU206BU200CU200BU206EU200CU206BU202BU202DU206BU206AU202DU200DU202EU206BU200CU200DU206AU202BU206BU206FU200BU202EU206CU202CU206CU206FU200DU202DU202E_mF4298A68A62E40970DCE1127F7F13EC2985FCB04(L_182, NULL);
		((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200EU200DU200BU206BU206FU200BU200DU200BU202BU200FU200CU202EU200CU206DU202BU200FU202EU206BU206DU206AU206EU206EU200CU202BU200FU202CU200EU206CU206EU202CU206CU200BU202EU200CU202BU206BU200DU206FU206CU200FU202E_2 = L_183;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200EU200DU200BU206BU206FU200BU200DU200BU202BU200FU200CU202EU200CU206DU202BU200FU202EU206BU206DU206AU206EU206EU200CU202BU200FU202CU200EU206CU206EU202CU206CU200BU202EU200CU202BU206BU200DU206FU206CU200FU202E_2), (void*)L_183);
		uint32_t L_184 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_184, ((int32_t)-1730252069)))^((int32_t)-739902777)));
		goto IL_0023;
	}

IL_0437:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_185 = V_8;
		int32_t L_186 = V_6;
		int32_t L_187 = L_186;
		V_6 = ((int32_t)il2cpp_codegen_add(L_187, 1));
		uint32_t L_188 = V_11;
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(L_187), (uint8_t)((int32_t)(uint8_t)L_188));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_189 = V_8;
		int32_t L_190 = V_6;
		int32_t L_191 = L_190;
		V_6 = ((int32_t)il2cpp_codegen_add(L_191, 1));
		uint32_t L_192 = V_11;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(L_191), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_192>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_193 = V_8;
		int32_t L_194 = V_6;
		int32_t L_195 = L_194;
		V_6 = ((int32_t)il2cpp_codegen_add(L_195, 1));
		uint32_t L_196 = V_11;
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(L_195), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_196>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_197 = V_8;
		int32_t L_198 = V_6;
		int32_t L_199 = L_198;
		V_6 = ((int32_t)il2cpp_codegen_add(L_199, 1));
		uint32_t L_200 = V_11;
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(L_199), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_200>>((int32_t)24)))));
		uint32_t L_201 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_201, ((int32_t)144811410)))^((int32_t)-1997333753)));
		goto IL_0023;
	}

IL_0486:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056 (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		__this->___U202CU200FU206AU206BU200CU200EU200EU202AU206EU206EU200DU200DU206DU206CU200BU200CU206FU206BU200FU202BU200CU202DU202EU206CU206EU206FU206DU200FU202EU202EU200BU206FU206FU200BU202AU206AU206FU206BU200BU206CU202E_0 = ((int32_t)1024);
		return;
	}
}
IL2CPP_EXTERN_C  void U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA*>(__this + _offset);
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056(_thisAdjusted, method);
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	{
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_0 = p0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1;
		uint32_t L_2 = __this->___U202CU200FU206AU206BU200CU200EU200EU202AU206EU206EU200DU200DU206DU206CU200BU200CU206FU206BU200FU202BU200CU202DU202EU206CU206EU206FU206DU200FU202EU202EU200BU206FU206FU200BU202AU206AU206FU206BU200BU206CU202E_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)L_1>>((int32_t)11))), (int32_t)L_2));
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_3 = p0;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0;
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_4) < ((uint32_t)L_5))))
		{
			goto IL_0151;
		}
	}

IL_001d:
	{
		G_B2_0 = ((int32_t)-1794575356);
	}

IL_0022:
	{
		int32_t L_6 = ((int32_t)(G_B2_0^((int32_t)-755555453)));
		V_1 = L_6;
		switch (((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_0070;
			}
			case 1:
			{
				goto IL_0169;
			}
			case 2:
			{
				goto IL_001d;
			}
			case 3:
			{
				goto IL_01dd;
			}
			case 4:
			{
				goto IL_01bd;
			}
			case 5:
			{
				goto IL_0067;
			}
			case 6:
			{
				goto IL_00fb;
			}
			case 7:
			{
				goto IL_0189;
			}
			case 8:
			{
				goto IL_0151;
			}
			case 9:
			{
				goto IL_00ce;
			}
			case 10:
			{
				goto IL_00ae;
			}
			case 11:
			{
				goto IL_0128;
			}
		}
	}
	{
		goto IL_01dd;
	}

IL_0067:
	{
		return 0;
	}
	// Dead block : IL_0069: ldc.i4 -2098811765

IL_0070:
	{
		uint32_t L_7 = __this->___U202CU200FU206AU206BU200CU200EU200EU202AU206EU206EU200DU200DU206DU206CU200BU200CU206FU206BU200FU202BU200CU202DU202EU206CU206EU206FU206DU200FU202EU202EU200BU206FU206FU200BU202AU206AU206FU206BU200BU206CU202E_0;
		uint32_t L_8 = __this->___U202CU200FU206AU206BU200CU200EU200EU202AU206EU206EU200DU200DU206DU206CU200BU200CU206FU206BU200FU202BU200CU202DU202EU206CU206EU206FU206DU200FU202EU202EU200BU206FU206FU200BU202AU206AU206FU206BU200BU206CU202E_0;
		__this->___U202CU200FU206AU206BU200CU200EU200EU202AU206EU206EU200DU200DU206DU206CU200BU200CU206FU206BU200FU202BU200CU202DU202EU206CU206EU206FU206DU200FU202EU202EU200BU206FU206FU200BU202AU206AU206FU206BU200BU206CU202E_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)((uint32_t)L_8>>5))));
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_9 = p0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1;
		if ((!(((uint32_t)L_10) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_11 = ((int32_t)992244333);
		G_B9_0 = L_11;
		G_B9_1 = L_11;
		goto IL_00a0;
	}

IL_009a:
	{
		int32_t L_12 = ((int32_t)130257548);
		G_B9_0 = L_12;
		G_B9_1 = L_12;
	}

IL_00a0:
	{
		uint32_t L_13 = V_1;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1861899350)))));
		goto IL_0022;
	}

IL_00ae:
	{
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_14 = p0;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_15 = L_14;
		NullCheck(L_15);
		uint32_t L_16 = L_15->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1;
		NullCheck(L_15);
		L_15->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1 = ((int32_t)((int32_t)L_16<<8));
		uint32_t L_17 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)564852635)))^((int32_t)813666354)));
		goto IL_0022;
	}

IL_00ce:
	{
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_18 = p0;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_19 = p0;
		NullCheck(L_19);
		uint32_t L_20 = L_19->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_21 = p0;
		NullCheck(L_21);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = L_21->___U200EU202DU200BU200EU200FU200CU202AU202AU200CU202CU200BU206DU200EU206AU200DU202DU206FU200FU200FU200EU206BU200BU200EU206EU202BU200BU206EU202EU200DU206BU200EU200BU206BU200CU206EU202CU202EU206DU202AU202CU202E_2;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_22);
		NullCheck(L_18);
		L_18->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0 = ((int32_t)(((int32_t)((int32_t)L_20<<8))|((int32_t)(uint8_t)L_23)));
		uint32_t L_24 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)1962045835)))^((int32_t)978601121)));
		goto IL_0022;
	}

IL_00fb:
	{
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_25 = p0;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_26 = p0;
		NullCheck(L_26);
		uint32_t L_27 = L_26->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_28 = p0;
		NullCheck(L_28);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_29 = L_28->___U200EU202DU200BU200EU200FU200CU202AU202AU200CU202CU200BU206DU200EU206AU200DU202DU206FU200FU200FU200EU206BU200BU200EU206EU202BU200BU206EU202EU200DU206BU200EU200BU206BU200CU206EU202CU202EU206DU202AU202CU202E_2;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_29);
		NullCheck(L_25);
		L_25->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0 = ((int32_t)(((int32_t)((int32_t)L_27<<8))|((int32_t)(uint8_t)L_30)));
		uint32_t L_31 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)-2100111717)))^((int32_t)1310747107)));
		goto IL_0022;
	}

IL_0128:
	{
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_32 = p0;
		NullCheck(L_32);
		uint32_t L_33 = L_32->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1;
		if ((!(((uint32_t)L_33) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_013d;
		}
	}
	{
		int32_t L_34 = ((int32_t)1599674658);
		G_B16_0 = L_34;
		G_B16_1 = L_34;
		goto IL_0143;
	}

IL_013d:
	{
		int32_t L_35 = ((int32_t)1481565254);
		G_B16_0 = L_35;
		G_B16_1 = L_35;
	}

IL_0143:
	{
		uint32_t L_36 = V_1;
		G_B2_0 = ((int32_t)(G_B16_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_36, ((int32_t)1013939016)))));
		goto IL_0022;
	}

IL_0151:
	{
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_37 = p0;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_38 = L_37;
		NullCheck(L_38);
		uint32_t L_39 = L_38->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1;
		uint32_t L_40 = V_0;
		NullCheck(L_38);
		L_38->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40));
		G_B2_0 = ((int32_t)-103244317);
		goto IL_0022;
	}

IL_0169:
	{
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_41 = p0;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_42 = L_41;
		NullCheck(L_42);
		uint32_t L_43 = L_42->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1;
		NullCheck(L_42);
		L_42->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1 = ((int32_t)((int32_t)L_43<<8));
		uint32_t L_44 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_44, ((int32_t)-1040409524)))^((int32_t)-978697070)));
		goto IL_0022;
	}

IL_0189:
	{
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_45 = p0;
		uint32_t L_46 = V_0;
		NullCheck(L_45);
		L_45->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1 = L_46;
		uint32_t L_47 = __this->___U202CU200FU206AU206BU200CU200EU200EU202AU206EU206EU200DU200DU206DU206CU200BU200CU206FU206BU200FU202BU200CU202DU202EU206CU206EU206FU206DU200FU202EU202EU200BU206FU206FU200BU202AU206AU206FU206BU200BU206CU202E_0;
		uint32_t L_48 = __this->___U202CU200FU206AU206BU200CU200EU200EU202AU206EU206EU200DU200DU206DU206CU200BU200CU206FU206BU200FU202BU200CU202DU202EU206CU206EU206FU206DU200FU202EU202EU200BU206FU206FU200BU202AU206AU206FU206BU200BU206CU202E_0;
		__this->___U202CU200FU206AU206BU200CU200EU200EU202AU206EU206EU200DU200DU206DU206CU200BU200CU206FU206BU200FU202BU200CU202DU202EU206CU206EU206FU206DU200FU202EU202EU200BU206FU206FU200BU202AU206AU206FU206BU200BU206CU202E_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)2048), (int32_t)L_48))>>5))));
		uint32_t L_49 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_49, ((int32_t)-1798237328)))^((int32_t)-939994544)));
		goto IL_0022;
	}

IL_01bd:
	{
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_50 = p0;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_51 = L_50;
		NullCheck(L_51);
		uint32_t L_52 = L_51->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0;
		uint32_t L_53 = V_0;
		NullCheck(L_51);
		L_51->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)L_53));
		uint32_t L_54 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_54, ((int32_t)-1772628140)))^((int32_t)-1555000241)));
		goto IL_0022;
	}

IL_01dd:
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  uint32_t U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C_AdjustorThunk (RuntimeObject* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, const RuntimeMethod* method)
{
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(_thisAdjusted, p0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: <Module>/?????????????????????????????????????????
IL2CPP_EXTERN_C void U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshal_pinvoke(const U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B& unmarshaled, U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledU202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_Length = (unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0)->max_length;
		marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 = il2cpp_codegen_marshal_allocate_array<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA>(_unmarshaledU202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledU202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_Length); i++)
		{
			(marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0)[i] = (unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 = NULL;
	}
	marshaled.___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1 = unmarshaled.___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1;
}
IL2CPP_EXTERN_C void U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshal_pinvoke_back(const U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshaled_pinvoke& marshaled, U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 != NULL)
	{
		if (unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 == NULL)
		{
			unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 = reinterpret_cast<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*>((U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0), (void*)reinterpret_cast<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*>((U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0)[i]);
		}
	}
	int32_t unmarshaledU200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_temp_1 = 0;
	unmarshaledU200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_temp_1 = marshaled.___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1;
	unmarshaled.___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1 = unmarshaledU200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_temp_1;
}
// Conversion method for clean up from marshalling of: <Module>/?????????????????????????????????????????
IL2CPP_EXTERN_C void U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshal_pinvoke_cleanup(U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshaled_pinvoke& marshaled)
{
	if (marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0);
		marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 = NULL;
	}
}
// Conversion methods for marshalling of: <Module>/?????????????????????????????????????????
IL2CPP_EXTERN_C void U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshal_com(const U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B& unmarshaled, U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshaled_com& marshaled)
{
	if (unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledU202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_Length = (unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0)->max_length;
		marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 = il2cpp_codegen_marshal_allocate_array<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA>(_unmarshaledU202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledU202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_Length); i++)
		{
			(marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0)[i] = (unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 = NULL;
	}
	marshaled.___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1 = unmarshaled.___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1;
}
IL2CPP_EXTERN_C void U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshal_com_back(const U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshaled_com& marshaled, U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 != NULL)
	{
		if (unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 == NULL)
		{
			unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 = reinterpret_cast<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*>((U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0), (void*)reinterpret_cast<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*>((U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0)[i]);
		}
	}
	int32_t unmarshaledU200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_temp_1 = 0;
	unmarshaledU200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_temp_1 = marshaled.___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1;
	unmarshaled.___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1 = unmarshaledU200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_temp_1;
}
// Conversion method for clean up from marshalling of: <Module>/?????????????????????????????????????????
IL2CPP_EXTERN_C void U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshal_com_cleanup(U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B_marshaled_com& marshaled)
{
	if (marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0);
		marshaled.___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 = NULL;
	}
}
// System.Void <Module>/?????????????????????????????????????????::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E__ctor_m1926AA055D99164DD1C196A0F5B701DD4EE95592 (U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* __this, int32_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		__this->___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1 = L_0;
		int32_t L_1 = p0;
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_2 = (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_1&((int32_t)31))))));
		__this->___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E__ctor_m1926AA055D99164DD1C196A0F5B701DD4EE95592_AdjustorThunk (RuntimeObject* __this, int32_t p0, const RuntimeMethod* method)
{
	U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B*>(__this + _offset);
	U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E__ctor_m1926AA055D99164DD1C196A0F5B701DD4EE95592(_thisAdjusted, p0, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U200FU202DU200BU206BU200EU202AU206EU206CU202BU206BU206CU202DU200BU202CU200BU206CU200FU206DU202EU200FU200DU206FU206BU202CU206BU200BU206CU202AU200CU200FU206BU206CU206EU202CU202BU200BU200BU206AU202AU200CU202E_m76F9A027DF3FE429F7187112B6C5FF37CED880CE (U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)-1573642731);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-2054485124)));
		V_1 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_005c;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0079;
			}
			case 3:
			{
				goto IL_0002;
			}
			case 4:
			{
				goto IL_003b;
			}
		}
	}
	{
		goto IL_0079;
	}

IL_002c:
	{
		uint32_t L_1 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)1098966178)))^((int32_t)1311422797)));
		goto IL_0007;
	}

IL_003b:
	{
		uint32_t L_2 = V_0;
		int32_t L_3 = __this->___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1;
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(1<<((int32_t)(L_3&((int32_t)31)))))))))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_4 = ((int32_t)-248621961);
		G_B8_0 = L_4;
		G_B8_1 = L_4;
		goto IL_0059;
	}

IL_0053:
	{
		int32_t L_5 = ((int32_t)-1892595683);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
	}

IL_0059:
	{
		G_B2_0 = G_B8_1;
		goto IL_0007;
	}

IL_005c:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_6 = __this->___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_7)))), NULL);
		uint32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, 1));
		G_B2_0 = ((int32_t)-44586689);
		goto IL_0007;
	}

IL_0079:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U200FU202DU200BU206BU200EU202AU206EU206CU202BU206BU206CU202DU200BU202CU200BU206CU200FU206DU202EU200FU200DU206FU206BU202CU206BU200BU206CU202AU200CU200FU206BU206CU206EU202CU202BU200BU200BU206AU202AU200CU202E_m76F9A027DF3FE429F7187112B6C5FF37CED880CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B*>(__this + _offset);
	U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U200FU202DU200BU206BU200EU202AU206EU206CU202BU206BU206CU202DU200BU202CU200BU206CU200FU206DU202EU200FU200DU206FU206BU202CU206BU200BU206CU202AU200CU200FU206BU206CU206EU202CU202BU200BU200BU206AU202AU200CU202E_m76F9A027DF3FE429F7187112B6C5FF37CED880CE(_thisAdjusted, method);
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206EU202BU202CU202DU202DU200CU206CU200CU200CU202AU202AU200BU206AU206DU202BU206CU202DU200CU200BU202EU206BU200EU202CU202EU202CU202BU200EU206BU200FU202BU200CU206DU200FU200EU206BU206AU200FU206BU202EU206AU202E_mECDBD5D94CF50EEA7C36024C4EE8387FD7D0E14B (U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)-403475015);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-522302718)));
		V_2 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_0090;
			}
			case 1:
			{
				goto IL_0064;
			}
			case 2:
			{
				goto IL_0030;
			}
			case 3:
			{
				goto IL_0002;
			}
			case 4:
			{
				goto IL_0045;
			}
			case 5:
			{
				goto IL_007a;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_0030:
	{
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_2 = ((int32_t)-966955132);
		G_B7_0 = L_2;
		G_B7_1 = L_2;
		goto IL_0042;
	}

IL_003c:
	{
		int32_t L_3 = ((int32_t)-1877760014);
		G_B7_0 = L_3;
		G_B7_1 = L_3;
	}

IL_0042:
	{
		G_B2_0 = G_B7_1;
		goto IL_0007;
	}

IL_0045:
	{
		uint32_t L_4 = V_0;
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_5 = __this->___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_7 = p0;
		uint32_t L_8;
		L_8 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_6)))), L_7, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_4<<1)), (int32_t)L_8));
		G_B2_0 = ((int32_t)-1825517443);
		goto IL_0007;
	}

IL_0064:
	{
		int32_t L_9 = __this->___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1;
		V_1 = L_9;
		uint32_t L_10 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)1472766321)))^((int32_t)-722322019)));
		goto IL_0007;
	}

IL_007a:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		uint32_t L_12 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)-1095602944)))^((int32_t)49636630)));
		goto IL_0007;
	}

IL_0090:
	{
		uint32_t L_13 = V_0;
		int32_t L_14 = __this->___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)(1<<((int32_t)(L_14&((int32_t)31)))))));
	}
}
IL2CPP_EXTERN_C  uint32_t U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206EU202BU202CU202DU202DU200CU206CU200CU200CU202AU202AU200BU206AU206DU202BU206CU202DU200CU200BU202EU206BU200EU202CU202EU202CU202BU200EU206BU200FU202BU200CU206DU200FU200EU206BU206AU200FU206BU202EU206AU202E_mECDBD5D94CF50EEA7C36024C4EE8387FD7D0E14B_AdjustorThunk (RuntimeObject* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, const RuntimeMethod* method)
{
	U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206EU202BU202CU202DU202DU200CU206CU200CU200CU202AU202AU200BU206AU206DU202BU206CU202DU200CU200BU202EU206BU200EU202CU202EU202CU202BU200EU206BU200FU202BU200CU206DU200FU200EU206BU206AU200FU206BU202EU206AU202E_mECDBD5D94CF50EEA7C36024C4EE8387FD7D0E14B(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206CU206AU206BU200FU206BU202CU206FU202DU200CU202BU206CU206BU202AU202CU200CU202AU206BU200DU206AU200CU200EU202DU200EU200EU202BU202EU200BU200DU202DU206AU206CU202AU206DU200EU202DU206FU200BU202EU202EU202DU202E_m9A56878E7864B1B30ED4369FA57B5A347BAC0B29 (U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)-2072374719);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-1714175297)));
		V_4 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_007f;
			}
			case 1:
			{
				goto IL_00d3;
			}
			case 2:
			{
				goto IL_00a3;
			}
			case 3:
			{
				goto IL_00b6;
			}
			case 4:
			{
				goto IL_0002;
			}
			case 5:
			{
				goto IL_0057;
			}
			case 6:
			{
				goto IL_006b;
			}
			case 7:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_00d3;
	}

IL_003c:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_1 = __this->___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0;
		uint32_t L_2 = V_0;
		NullCheck(L_1);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_3 = p0;
		uint32_t L_4;
		L_4 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_2)))), L_3, NULL);
		V_3 = L_4;
		G_B2_0 = ((int32_t)-521882713);
		goto IL_0007;
	}

IL_0057:
	{
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_6 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-108267828)))^((int32_t)1947683104)));
		goto IL_0007;
	}

IL_006b:
	{
		V_1 = 0;
		V_2 = 0;
		uint32_t L_7 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)868376916)))^((int32_t)-1032882451)));
		goto IL_0007;
	}

IL_007f:
	{
		uint32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8<<1));
		uint32_t L_9 = V_0;
		uint32_t L_10 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
		uint32_t L_11 = V_1;
		uint32_t L_12 = V_3;
		int32_t L_13 = V_2;
		V_1 = ((int32_t)((int32_t)L_11|((int32_t)((int32_t)L_12<<((int32_t)(L_13&((int32_t)31)))))));
		uint32_t L_14 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-694998724)))^((int32_t)-1375721942)));
		goto IL_0007;
	}

IL_00a3:
	{
		uint32_t L_15 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)260263535)))^((int32_t)-456972726)));
		goto IL_0007;
	}

IL_00b6:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = __this->___U200EU200CU206CU206CU200CU200DU206FU200CU200FU202DU206EU202AU202AU200EU202BU206AU200FU202CU206AU200DU206BU200EU206CU202AU200DU200BU206AU200EU206EU206DU206BU202AU206CU202BU202BU206DU206CU206DU202CU200EU202E_1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_18 = ((int32_t)-1398961322);
		G_B12_0 = L_18;
		G_B12_1 = L_18;
		goto IL_00cd;
	}

IL_00c7:
	{
		int32_t L_19 = ((int32_t)-1377607768);
		G_B12_0 = L_19;
		G_B12_1 = L_19;
	}

IL_00cd:
	{
		G_B2_0 = G_B12_1;
		goto IL_0007;
	}

IL_00d3:
	{
		uint32_t L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C  uint32_t U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206CU206AU206BU200FU206BU202CU206FU202DU200CU202BU206CU206BU202AU202CU200CU202AU206BU200DU206AU200CU200EU202DU200EU200EU202BU202EU200BU200DU202DU206AU206CU202AU206DU200EU202DU206FU200BU202EU202EU202DU202E_m9A56878E7864B1B30ED4369FA57B5A347BAC0B29_AdjustorThunk (RuntimeObject* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, const RuntimeMethod* method)
{
	U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206CU206AU206BU200FU206BU202CU206FU202DU200CU202BU206CU206BU202AU202CU200CU202AU206BU200DU206AU200CU200EU202DU200EU200EU202BU202EU200BU200DU202DU206AU206CU202AU206DU200EU202DU206FU200BU202EU202EU202DU202E_m9A56878E7864B1B30ED4369FA57B5A347BAC0B29(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????[],System.UInt32,<Module>/?????????????????????????????????????????,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206FU200EU202CU202DU202CU200CU202DU206DU206BU206DU202AU200BU206AU202AU206EU202EU202AU206BU202AU202AU206BU200BU202DU200DU206EU200CU202DU200EU206EU206BU200DU200DU206CU200DU202CU200CU206DU206BU206FU200DU202E_mBC8374786819633A0E26D5C39408F66EE06920B4 (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* p0, uint32_t p1, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p2, int32_t p3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = 0;
		goto IL_004f;
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)-2098641683);
	}

IL_000d:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-129177719)));
		V_4 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_0008;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_004f;
			}
			case 4:
			{
				goto IL_0037;
			}
			case 5:
			{
				goto IL_009c;
			}
		}
	}
	{
		goto IL_009c;
	}

IL_0037:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_1 = p0;
		uint32_t L_2 = p1;
		uint32_t L_3 = V_0;
		NullCheck(L_1);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_4 = p2;
		uint32_t L_5;
		L_5 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)))))), L_4, NULL);
		V_3 = L_5;
		G_B2_0 = ((int32_t)-1288959051);
		goto IL_000d;
	}

IL_004f:
	{
		int32_t L_6 = V_2;
		int32_t L_7 = p3;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_8 = ((int32_t)-2141876414);
		G_B8_0 = L_8;
		G_B8_1 = L_8;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_9 = ((int32_t)-2098641683);
		G_B8_0 = L_9;
		G_B8_1 = L_9;
	}

IL_0061:
	{
		G_B2_0 = G_B8_1;
		goto IL_000d;
	}

IL_0064:
	{
		uint32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10<<1));
		uint32_t L_11 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)-383754752)))^((int32_t)1246587010)));
		goto IL_000d;
	}

IL_0078:
	{
		uint32_t L_12 = V_0;
		uint32_t L_13 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		uint32_t L_14 = V_1;
		uint32_t L_15 = V_3;
		int32_t L_16 = V_2;
		V_1 = ((int32_t)((int32_t)L_14|((int32_t)((int32_t)L_15<<((int32_t)(L_16&((int32_t)31)))))));
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		uint32_t L_18 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)-65518693)))^((int32_t)-294020321)));
		goto IL_000d;
	}

IL_009c:
	{
		uint32_t L_19 = V_1;
		return L_19;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E__ctor_mD79A88A9FAB73C4869A84ED0C0ECF051591C9626 (U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_U202AU202AU202BU206AU200EU202CU200EU206FU206CU206EU200CU200DU206FU206FU206FU202DU206EU200DU202CU202AU206FU206BU200EU200EU206FU202DU200EU206FU202DU200DU202CU200DU202BU202AU206CU200BU200CU206FU200EU206DU202E_m9F4451EF1A2A5FDAB4C0790B4937262B25B591E9 (U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = p0;
		__this->___U200EU202DU200BU200EU200FU200CU202AU202AU200CU202CU200BU206DU200EU206AU200DU202DU206FU200FU200FU200EU206BU200BU200EU206EU202BU200BU206EU202EU200DU206BU200EU200BU206BU200CU206EU202CU202EU206DU202AU202CU202E_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200EU202DU200BU200EU200FU200CU202AU202AU200CU202CU200BU206DU200EU206AU200DU202DU206FU200FU200FU200EU206BU200BU200EU206EU202BU200BU206EU202EU200DU206BU200EU200BU206BU200CU206EU202CU202EU206DU202AU202CU202E_2), (void*)L_0);
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1306516170);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)446661061)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)7)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_009f;
			}
			case 2:
			{
				goto IL_0039;
			}
			case 3:
			{
				goto IL_00b7;
			}
			case 4:
			{
				goto IL_0084;
			}
			case 5:
			{
				goto IL_005b;
			}
			case 6:
			{
				goto IL_006e;
			}
		}
	}
	{
		goto IL_00b7;
	}

IL_0039:
	{
		uint32_t L_2 = __this->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___U200EU202DU200BU200EU200FU200CU202AU202AU200CU202CU200BU206DU200EU206AU200DU202DU206FU200FU200FU200EU206BU200BU200EU206EU202BU200BU206EU202EU200DU206BU200EU200BU206BU200CU206EU202CU202EU206DU202AU202CU202E_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_3);
		__this->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0 = ((int32_t)(((int32_t)((int32_t)L_2<<8))|((int32_t)(uint8_t)L_4)));
		G_B2_0 = ((int32_t)2126191834);
		goto IL_000c;
	}

IL_005b:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_6 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-1129442434)))^((int32_t)-42620328)));
		goto IL_000c;
	}

IL_006e:
	{
		__this->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0 = 0;
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)2060100382)))^((int32_t)2125924284)));
		goto IL_000c;
	}

IL_0084:
	{
		__this->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1 = (-1);
		V_0 = 0;
		uint32_t L_8 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-642652120)))^((int32_t)-1668330206)));
		goto IL_000c;
	}

IL_009f:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)5)))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_10 = ((int32_t)1548360365);
		G_B11_0 = L_10;
		G_B11_1 = L_10;
		goto IL_00b1;
	}

IL_00ab:
	{
		int32_t L_11 = ((int32_t)1723948051);
		G_B11_0 = L_11;
		G_B11_1 = L_11;
	}

IL_00b1:
	{
		G_B2_0 = G_B11_1;
		goto IL_000c;
	}

IL_00b7:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_U200CU202EU206BU206FU200FU202BU200BU202CU206FU206BU202EU202BU202BU202DU200DU202AU206EU200BU206DU200CU200FU202AU206BU206EU206AU206DU206BU206DU200FU200DU202DU206CU200DU200DU200BU200CU206FU206EU206FU202DU202E_m53FF8FD906E75AF348CB5E64AC7BD8CC1C5E9E8C (U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		__this->___U200EU202DU200BU200EU200FU200CU202AU202AU200CU202CU200BU206DU200EU206AU200DU202DU206FU200FU200FU200EU206BU200BU200EU206EU202BU200BU206EU202EU200DU206BU200EU200BU206BU200CU206EU202CU202EU206DU202AU202CU202E_2 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200EU202DU200BU200EU200FU200CU202AU202AU200CU202CU200BU206DU200EU206AU200DU202DU206FU200FU200FU200EU206BU200BU200EU206EU202BU200BU206EU202EU200DU206BU200EU200BU206BU200CU206EU202CU202EU206DU202AU202CU202E_2), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_U202BU206DU200FU202EU202DU202BU200EU202AU200FU200EU206BU206DU202CU200BU200FU206CU202CU206AU202DU200BU206DU206CU206FU202AU200FU206EU202AU200FU200CU206CU206CU200CU200EU202DU206DU206BU206DU206CU206DU202BU202E_mB32CC3C77A930CC08B10A00FEA020BB4373E0239 (U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		goto IL_0058;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)1702809586);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)130219309)));
		V_0 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0002;
			}
			case 1:
			{
				goto IL_0058;
			}
			case 2:
			{
				goto IL_0076;
			}
			case 3:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_0076;
	}

IL_0028:
	{
		uint32_t L_1 = __this->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___U200EU202DU200BU200EU200FU200CU202AU202AU200CU202CU200BU206DU200EU206AU200DU202DU206FU200FU200FU200EU206BU200BU200EU206EU202BU200BU206EU202EU200DU206BU200EU200BU206BU200CU206EU202CU202EU206DU202AU202CU202E_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_2);
		__this->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0 = ((int32_t)(((int32_t)((int32_t)L_1<<8))|((int32_t)(uint8_t)L_3)));
		uint32_t L_4 = __this->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1;
		__this->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1 = ((int32_t)((int32_t)L_4<<8));
		G_B2_0 = ((int32_t)1932654088);
		goto IL_0007;
	}

IL_0058:
	{
		uint32_t L_5 = __this->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1;
		if ((!(((uint32_t)L_5) >= ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_6 = ((int32_t)2031718267);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
		goto IL_0073;
	}

IL_006d:
	{
		int32_t L_7 = ((int32_t)1702809586);
		G_B8_0 = L_7;
		G_B8_1 = L_7;
	}

IL_0073:
	{
		G_B2_0 = G_B8_1;
		goto IL_0007;
	}

IL_0076:
	{
		return;
	}
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_U200FU200BU202BU206EU206CU202AU206BU206FU206BU200DU200BU202AU202CU202CU200DU206FU202EU202EU202DU202BU206EU202AU206AU202BU206CU206EU206FU206AU200BU202AU202AU200CU202EU206BU200CU206CU206CU202BU200BU202EU202E_mCEF629385EF387C1B2F6C882D8CD559B000AFEC1 (U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* __this, int32_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	{
		uint32_t L_0 = __this->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)745099217);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1072579119)));
		V_5 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_00c1;
			}
			case 1:
			{
				goto IL_011b;
			}
			case 2:
			{
				goto IL_0007;
			}
			case 3:
			{
				goto IL_0074;
			}
			case 4:
			{
				goto IL_015f;
			}
			case 5:
			{
				goto IL_0052;
			}
			case 6:
			{
				goto IL_0151;
			}
			case 7:
			{
				goto IL_0108;
			}
			case 8:
			{
				goto IL_0089;
			}
			case 9:
			{
				goto IL_0135;
			}
			case 10:
			{
				goto IL_00a3;
			}
			case 11:
			{
				goto IL_00e0;
			}
		}
	}
	{
		goto IL_015f;
	}

IL_0052:
	{
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_3 = ((int32_t)-1953990174);
		G_B7_0 = L_3;
		G_B7_1 = L_3;
		goto IL_0068;
	}

IL_0062:
	{
		int32_t L_4 = ((int32_t)-1090569305);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
	}

IL_0068:
	{
		uint32_t L_5 = V_5;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)1493430014)))));
		goto IL_000c;
	}

IL_0074:
	{
		int32_t L_6 = V_3;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_7 = ((int32_t)2135067535);
		G_B11_0 = L_7;
		G_B11_1 = L_7;
		goto IL_0086;
	}

IL_0080:
	{
		int32_t L_8 = ((int32_t)1722399371);
		G_B11_0 = L_8;
		G_B11_1 = L_8;
	}

IL_0086:
	{
		G_B2_0 = G_B11_1;
		goto IL_000c;
	}

IL_0089:
	{
		uint32_t L_9 = V_0;
		__this->___U202DU200FU200DU206DU202DU202DU206AU202EU202BU202CU206EU200FU200BU202BU206AU200DU200BU200CU200BU206FU206AU200EU200CU202BU200CU202AU200EU202BU206DU206AU206DU202AU200EU202BU202DU202CU206DU202DU206BU200DU202E_1 = L_9;
		uint32_t L_10 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-548467669)))^((int32_t)-258664214)));
		goto IL_000c;
	}

IL_00a3:
	{
		uint32_t L_11 = __this->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0;
		V_1 = L_11;
		V_2 = 0;
		int32_t L_12 = p0;
		V_3 = L_12;
		uint32_t L_13 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)92524488)))^((int32_t)-679751496)));
		goto IL_000c;
	}

IL_00c1:
	{
		uint32_t L_14 = V_0;
		V_0 = ((int32_t)((uint32_t)L_14>>1));
		uint32_t L_15 = V_1;
		uint32_t L_16 = V_0;
		V_4 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16))>>((int32_t)31)));
		uint32_t L_17 = V_1;
		uint32_t L_18 = V_0;
		uint32_t L_19 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, ((int32_t)((int32_t)L_18&((int32_t)il2cpp_codegen_subtract((int32_t)L_19, 1))))));
		G_B2_0 = ((int32_t)187211086);
		goto IL_000c;
	}

IL_00e0:
	{
		uint32_t L_20 = V_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = __this->___U200EU202DU200BU200EU200FU200CU202AU202AU200CU202CU200BU206DU200EU206AU200DU202DU206FU200FU200FU200EU206BU200BU200EU206EU202BU200BU206EU202EU200DU206BU200EU200BU206BU200CU206EU202CU202EU206DU202AU202CU202E_2;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_21);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_20<<8))|((int32_t)(uint8_t)L_22)));
		uint32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23<<8));
		uint32_t L_24 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)-1078689435)))^((int32_t)1053109830)));
		goto IL_000c;
	}

IL_0108:
	{
		uint32_t L_25 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_25, ((int32_t)1776018694)))^((int32_t)-1387271382)));
		goto IL_000c;
	}

IL_011b:
	{
		uint32_t L_26 = V_1;
		__this->___U202DU206BU206EU200EU200BU206BU200FU206FU200CU200EU202AU200DU206AU200BU206DU202DU200BU200CU200BU202EU206BU200FU202AU202CU206EU200EU206AU200CU200CU202CU202DU200EU200BU202CU200CU206BU202DU200EU202DU202AU202E_0 = L_26;
		uint32_t L_27 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)-728268618)))^((int32_t)-1810124467)));
		goto IL_000c;
	}

IL_0135:
	{
		uint32_t L_28 = V_2;
		uint32_t L_29 = V_4;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_28<<1))|((int32_t)il2cpp_codegen_subtract(1, (int32_t)L_29))));
		uint32_t L_30 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_30, ((int32_t)770865382)))^((int32_t)-640665008)));
		goto IL_000c;
	}

IL_0151:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		G_B2_0 = ((int32_t)1715855168);
		goto IL_000c;
	}

IL_015f:
	{
		uint32_t L_32 = V_2;
		return L_32;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E__ctor_m2D608EBFB45DD3C35908F4789513F6D6842B6FDB (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_0 = (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)192)));
		__this->___U206DU206DU200CU200FU200DU200CU202EU202EU200DU206FU202BU200EU202EU206FU206AU206CU202CU202DU202DU200BU200CU206AU202AU206AU206FU202EU206DU206FU200FU206EU206BU200EU206FU202AU200BU202CU206DU206DU202EU200EU202E_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206DU206DU200CU200FU200DU200CU202EU202EU200DU206FU202BU200EU202EU206FU206AU206CU202CU202DU202DU200BU200CU206AU202AU206AU206FU202EU206DU206FU200FU206EU206BU200EU206FU202AU200BU202CU206DU206DU202EU200EU202E_0), (void*)L_0);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_1 = (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)192)));
		__this->___U200FU202CU200BU206DU206FU202DU206CU202BU202BU200FU202DU206BU202BU200FU202BU200CU206BU202DU206CU202EU202CU206BU206AU206AU200FU206EU202AU200EU206CU206DU206EU206DU200FU202CU202AU200EU206EU202EU206CU206AU202E_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200FU202CU200BU206DU206FU202DU206CU202BU202BU200FU202DU206BU202BU200FU202BU200CU206BU202DU206CU202EU202CU206BU206AU206AU200FU206EU202AU200EU206CU206DU206EU206DU200FU202CU202AU200EU206EU202EU206CU206AU202E_1), (void*)L_1);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_2 = (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)12)));
		__this->___U202AU202BU206AU206FU200EU206CU200DU206CU200FU206CU206AU200BU200DU206EU202EU200BU200EU206CU206DU202BU200CU202EU206CU206EU206AU206FU200BU202CU206DU200CU202EU200FU200CU206BU200DU206BU206FU206DU202EU206BU202E_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202AU202BU206AU206FU200EU206CU200DU206CU200FU206CU206AU200BU200DU206EU202EU200BU200EU206CU206DU202BU200CU202EU206CU206EU206AU206FU200BU202CU206DU200CU202EU200FU200CU206BU200DU206BU206FU206DU202EU206BU202E_2), (void*)L_2);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_3 = (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)12)));
		__this->___U206DU200DU200DU200CU202AU202BU206DU200CU200EU206DU202EU200BU206BU202CU206BU200FU202DU200FU200EU200DU202EU202CU202BU202AU200BU206BU202DU202CU200EU200BU202DU202AU206CU200DU200DU202BU206AU202EU206DU202EU202E_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206DU200DU200DU200CU202AU202BU206DU200CU200EU206DU202EU200BU206BU202CU206BU200FU202DU200FU200EU200DU202EU202CU202BU202AU200BU206BU202DU202CU200EU200BU202DU202AU206CU200DU200DU202BU206AU202EU206DU202EU202E_3), (void*)L_3);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_4 = (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)12)));
		__this->___U202BU200DU200DU206FU200DU206AU206DU202DU200CU202AU202BU200BU206EU200BU200CU206EU202AU200EU200FU200BU206AU200DU200EU206BU202AU206DU200BU200EU200EU206FU206EU202EU202DU200CU206FU206AU200BU202BU200CU200CU202E_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202BU200DU200DU206FU200DU206AU206DU202DU200CU202AU202BU200BU206EU200BU200CU206EU202AU200EU200FU200BU206AU200DU200EU206BU202AU206DU200BU200EU200EU206FU206EU202EU202DU200CU206FU206AU200BU202BU200CU200CU202E_4), (void*)L_4);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_5 = (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)12)));
		__this->___U206DU202BU206CU200BU206DU202DU202AU202BU206BU206BU206EU202AU200FU200EU206DU206CU206FU200EU200CU202EU206BU202AU200EU200BU202DU206CU206EU206FU206CU202EU200FU200FU206DU202BU206CU206EU202DU202CU202CU200FU202E_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206DU202BU206CU200BU206DU202DU202AU202BU206BU206BU206EU202AU200FU200EU206DU206CU206FU200EU200CU202EU206BU202AU200EU200BU202DU206CU206EU206FU206CU202EU200FU200FU206DU202BU206CU206EU202DU202CU202CU200FU202E_5), (void*)L_5);
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* L_6 = (U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A*)il2cpp_codegen_object_new(U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E__ctor_mDA7191992C311C8F4F07C8E6045D05F2B580B14E(L_6, NULL);
		__this->___U206DU200EU200EU206FU202DU206DU202DU206FU200DU200EU206EU206FU202AU202AU206BU202BU200CU206EU202EU206CU202BU202AU202EU200EU202CU200DU200CU202AU200EU206DU200EU206FU202DU200BU200DU200BU200EU202CU200CU202CU202E_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206DU200EU200EU206FU202DU206DU202DU206FU200DU200EU206EU206FU202AU202AU206BU202BU200CU206EU202EU206CU202BU202AU202EU200EU202CU200DU200CU202AU200EU206DU200EU206FU202DU200BU200DU200BU200EU202CU200CU202CU202E_6), (void*)L_6);
		U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* L_7 = (U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7*)il2cpp_codegen_object_new(U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E__ctor_m6D56AACC04ACD130641956EF3F3AEC01B1292090(L_7, NULL);
		__this->___U200FU206EU200FU206CU202BU206BU200CU200EU202EU206EU202BU206EU206BU206CU202BU200DU206BU200DU200EU202CU200BU200EU206BU200DU206CU206CU200EU202BU200BU202BU206EU206CU206BU202CU200CU206EU200EU202EU200CU200EU202E_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200FU206EU200FU206CU202BU206BU200CU200EU202EU206EU202BU206EU206BU206CU202BU200DU206BU200DU200EU202CU200BU200EU206BU200DU206CU206CU200EU202BU200BU202BU206EU206CU206BU202CU200CU206EU200EU202EU200CU200EU202E_7), (void*)L_7);
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* L_8 = (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663*)il2cpp_codegen_object_new(U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E__ctor_m2966F6FB3B70085446A333E85AA6ABF03DE36369(L_8, NULL);
		__this->___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8), (void*)L_8);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_9 = (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)114)));
		__this->___U206CU200CU206EU202CU200BU206FU202BU202EU202BU200EU206CU202EU202DU200DU206FU202BU200CU200FU206CU202DU202EU206FU202CU200FU200BU206FU206BU206AU206FU200DU200BU202EU200CU200FU202CU202EU202CU206DU200EU206DU202E_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206CU200CU206EU202CU200BU206FU202BU202EU202BU200EU206CU202EU202DU200DU206FU202BU200CU200FU206CU202DU202EU206FU202CU200FU200BU206FU206BU206AU206FU200DU200BU202EU200CU200FU202CU202EU202CU206DU200EU206DU202E_9), (void*)L_9);
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* L_10 = (U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D*)(U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D*)SZArrayNew(U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)4));
		__this->___U206CU206FU202EU202DU200EU202AU206BU206CU202DU200EU200EU200BU206AU202DU206AU200CU200DU200EU202DU202CU200FU202BU200DU202DU206EU202DU200EU202DU206BU206BU200EU206BU202AU200CU200BU200DU206CU206EU206AU206AU202E_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206CU206FU202EU202DU200EU202AU206BU206CU202DU200EU200EU200BU206AU202DU206AU200CU200DU200EU202DU202CU200FU202BU200DU202DU206EU202DU200EU202DU206BU206BU200EU206BU202AU200CU200BU200DU206CU206EU206AU206AU202E_10), (void*)L_10);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_11 = (U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8*)il2cpp_codegen_object_new(U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E__ctor_mD79A88A9FAB73C4869A84ED0C0ECF051591C9626(L_11, NULL);
		__this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11), (void*)L_11);
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* L_12 = (U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A*)il2cpp_codegen_object_new(U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E__ctor_mDA7191992C311C8F4F07C8E6045D05F2B580B14E(L_12, NULL);
		__this->___U200FU200FU206EU206EU200CU206BU202BU200CU206FU206CU206FU206EU206CU206BU200DU200BU206EU206AU202AU202BU202DU202DU202BU200DU206AU206FU200EU202CU206AU200FU206CU200FU202CU206CU200CU200EU200BU206FU206BU206FU202E_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200FU200FU206EU206EU200CU206BU202BU200CU206FU206CU206FU206EU206CU206BU200DU200BU206EU206AU202AU202BU202DU202DU202BU200DU206AU206FU200EU202CU206AU200FU206CU200FU202CU206CU200CU200EU200BU206FU206BU206FU202E_12), (void*)L_12);
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B L_13;
		memset((&L_13), 0, sizeof(L_13));
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E__ctor_m1926AA055D99164DD1C196A0F5B701DD4EE95592((&L_13), 4, /*hidden argument*/NULL);
		__this->___U202BU206BU202BU200DU202BU200EU206DU202AU200CU200FU206BU200BU200CU200CU202AU202DU206DU200CU200DU206BU206CU202DU200FU206CU206BU206AU206CU206FU206DU200EU202DU202EU202EU206BU206EU206CU200EU200BU206CU206CU202E_16 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U202BU206BU202BU200DU202BU200EU206DU202AU200CU200FU206BU200BU200CU200CU202AU202DU206DU200CU200DU206BU206CU202DU200FU206CU206BU206AU206CU206FU206DU200EU202DU202EU202EU206BU206EU206CU200EU200BU206CU206CU202E_16))->___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0), (void*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___U200FU200CU206AU200CU200EU200CU200BU202CU200DU206BU202BU200EU206FU202CU202BU206FU202DU206EU206EU206AU200DU202EU202AU206BU200DU200CU200DU200CU206BU200FU206BU202AU206CU202CU206AU200CU202AU200EU200DU206FU202E_14 = (-1);
		V_0 = 0;
		goto IL_00e4;
	}

IL_00c9:
	{
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* L_14 = __this->___U206CU206FU202EU202DU200EU202AU206BU206CU202DU200EU200EU200BU206AU202DU206AU200CU200DU200EU202DU202CU200FU202BU200DU202DU206EU202DU200EU202DU206BU206BU200EU206BU202AU200CU200BU200DU206CU206EU206AU206AU202E_10;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B L_16;
		memset((&L_16), 0, sizeof(L_16));
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E__ctor_m1926AA055D99164DD1C196A0F5B701DD4EE95592((&L_16), 6, /*hidden argument*/NULL);
		*(U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))) = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))))->___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0), (void*)NULL);
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_00e4:
	{
		int32_t L_18 = V_0;
		if ((((int64_t)((int64_t)L_18)) < ((int64_t)((int64_t)4))))
		{
			goto IL_00c9;
		}
	}
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U200DU200BU202DU206EU202EU206DU206DU202AU206AU200EU202BU202DU206DU200DU200FU200DU200BU206AU200EU206FU206BU200CU206AU202EU202EU200EU202AU202EU200FU202DU202AU206FU206DU200DU206DU200BU202AU202BU202DU200EU202E_m4AEF5C1473E6070472A8AC69481C7576351AE295 (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, uint32_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		uint32_t L_0 = __this->___U200FU200CU206AU200CU200EU200CU200BU202CU200DU206BU202BU200EU206FU202CU202BU206FU202DU206EU206EU206AU200DU202EU202AU206BU200DU200CU200DU200CU206BU200FU206BU202AU206CU202CU206AU200CU202AU200EU200DU206FU202E_14;
		uint32_t L_1 = p0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_009c;
		}
	}

IL_000c:
	{
		G_B2_0 = ((int32_t)-1157329898);
	}

IL_0011:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-1668627275)));
		V_1 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0062;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_0036;
			}
			case 4:
			{
				goto IL_000c;
			}
		}
	}
	{
		goto IL_009c;
	}

IL_0036:
	{
		uint32_t L_3 = __this->___U206CU206BU200CU202BU200CU202BU206DU200FU202CU206AU202EU206FU206DU200DU206AU200FU202BU206AU206CU200BU200BU200EU202CU200EU200DU202CU206FU206EU200EU206DU202EU202EU202BU202EU202EU202DU206BU200EU200DU200FU202E_15;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_3, ((int32_t)4096), NULL);
		V_0 = L_4;
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* L_5 = __this->___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206BU200CU202EU200DU200EU206BU202BU200BU200DU200CU200FU200CU202CU206DU206EU200CU200FU200EU200EU202AU202CU202BU202CU206BU200EU202DU206FU206EU206AU200FU202DU202BU202AU206DU202EU202CU206CU202BU202BU202E_mFC3E05087AE8F64B4853C52ED661B856AD5CD4A7(L_5, L_6, NULL);
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)1304667717)))^((int32_t)-1077837077)));
		goto IL_0011;
	}

IL_0062:
	{
		uint32_t L_8 = __this->___U200FU200CU206AU200CU200EU200CU200BU202CU200DU206BU202BU200EU206FU202CU202BU206FU202DU206EU206EU206AU200DU202EU202AU206BU200DU200CU200DU200CU206BU200FU206BU202AU206CU202CU206AU200CU202AU200EU200DU206FU202E_14;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_9;
		L_9 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_8, 1, NULL);
		__this->___U206CU206BU200CU202BU200CU202BU206DU200FU202CU206AU202EU206FU206DU200DU206AU200FU202BU206AU206CU200BU200BU200EU202CU200EU200DU202CU206FU206EU200EU206DU202EU202EU202BU202EU202EU202DU206BU200EU200DU200FU202E_15 = L_9;
		uint32_t L_10 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)915893217)))^((int32_t)267813812)));
		goto IL_0011;
	}

IL_0083:
	{
		uint32_t L_11 = p0;
		__this->___U200FU200CU206AU200CU200EU200CU200BU202CU200DU206BU202BU200EU206FU202CU202BU206FU202DU206EU206EU206AU200DU202EU202AU206BU200DU200CU200DU200CU206BU200FU206BU202AU206CU202CU206AU200CU202AU200EU200DU206FU202E_14 = L_11;
		uint32_t L_12 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)-1920220764)))^((int32_t)1868420992)));
		goto IL_0011;
	}

IL_009c:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U202DU200CU206FU202EU200DU206CU202DU206BU202EU202BU202CU202DU200CU200FU202BU200FU206CU200FU202CU206AU200EU202BU200CU200FU202CU200BU202CU206BU206CU200FU202BU206AU206DU202EU206AU206BU200EU206AU206DU206FU202E_m4598CA9E47181506F4AB85FC3E37552DAC96F36C (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* L_0 = __this->___U200FU206EU200FU206CU202BU206BU200CU200EU202EU206EU202BU206EU206BU206CU202BU200DU206BU200DU200EU202CU200BU200EU206BU200DU206CU206CU200EU202BU200BU202BU206EU206CU206BU202CU200CU206EU200EU202EU200CU200EU202E_7;
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		NullCheck(L_0);
		U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U200FU202AU206CU200DU206EU202DU200FU206BU200FU206CU200DU206BU202AU206CU200EU206AU200EU202DU200BU206BU206EU206DU200DU202BU202DU202BU202EU202EU206FU200BU206DU206EU200DU202DU202BU202AU206CU202BU206AU202BU202E_m40FDD473421631CCE94F32ECB380A9E9A606DB00(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U206FU202EU202EU206BU200BU200DU200FU202EU202BU206FU202BU202EU200CU200DU200CU200BU200CU202BU206BU206CU206BU206AU200CU200EU206FU200CU206BU202AU202EU202EU200DU200BU206DU202CU202EU200CU202EU202EU200BU206CU202E_m2FA9B9E7ABB6A684C862084BCC7CB90BB9E29A90 (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, int32_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = ((int32_t)(1<<((int32_t)(L_0&((int32_t)31)))));
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* L_1 = __this->___U206DU200EU200EU206FU202DU206DU202DU206FU200DU200EU206EU206FU202AU202AU206BU202BU200CU206EU202EU206CU202BU202AU202EU200EU202CU200DU200CU202AU200EU206DU200EU206FU202DU200BU200DU200BU200EU202CU200CU202CU202E_6;
		uint32_t L_2 = V_0;
		NullCheck(L_1);
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_U202BU206FU206AU206FU202BU202AU202CU202DU200CU202CU200CU206CU200DU206DU200FU200FU202DU200BU206CU206BU202AU200EU200EU200FU202CU202AU202DU200DU200BU200EU206AU202AU206BU206DU206CU202CU200FU200CU202DU202CU202E_mDDB069456A89ADAE29D51DF2AAA7842C441D423F(L_1, L_2, NULL);
	}

IL_0013:
	{
		G_B2_0 = ((int32_t)144705013);
	}

IL_0018:
	{
		int32_t L_3 = ((int32_t)(G_B2_0^((int32_t)734396774)));
		V_1 = L_3;
		switch (((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0054;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0013;
			}
			case 3:
			{
				goto IL_0039;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_0039:
	{
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* L_4 = __this->___U200FU200FU206EU206EU200CU206BU202BU200CU206FU206CU206FU206EU206CU206BU200DU200BU206EU206AU202AU202BU202DU202DU202BU200DU206AU206FU200EU202CU206AU200FU206CU200FU202CU206CU200CU200EU200BU206FU206BU206FU202E_12;
		uint32_t L_5 = V_0;
		NullCheck(L_4);
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_U202BU206FU206AU206FU202BU202AU202CU202DU200CU202CU200CU206CU200DU206DU200FU200FU202DU200BU206CU206BU202AU200EU200EU200FU202CU202AU202DU200DU200BU200EU206AU202AU206BU206DU206CU202CU200FU200CU202DU202CU202E_mDDB069456A89ADAE29D51DF2AAA7842C441D423F(L_4, L_5, NULL);
		uint32_t L_6 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-1395485089)))^((int32_t)795186359)));
		goto IL_0018;
	}

IL_0054:
	{
		uint32_t L_7 = V_0;
		__this->___U206AU200EU202AU202EU202CU206EU206DU206DU206FU206AU206AU206FU200BU206AU202EU202AU202EU200CU206BU206AU206CU200EU202DU202CU206AU202CU206CU206DU206EU206DU202AU206AU200BU200FU202EU202BU200DU200EU206DU206FU202E_17 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 1));
		uint32_t L_8 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-322176737)))^((int32_t)-1691587373)));
		goto IL_0018;
	}

IL_006c:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::????????????????????????????????????????(System.IO.Stream,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U206AU206BU200FU206AU200DU206AU202DU206AU200EU206BU206EU206AU206FU206EU200FU200CU206CU202DU200FU206FU206BU200BU202CU206AU200DU202DU202BU202AU202CU206BU200DU206BU200BU206BU206CU206EU206AU202BU206EU202E_mE773385C18F4BFB53A54A935DD8316BB6C42557C (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B26_1 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	{
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_0 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = p0;
		NullCheck(L_0);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_U202AU202AU202BU206AU200EU202CU200EU206FU206CU206EU200CU200DU206FU206FU206FU202DU206EU200DU202CU202AU206FU206BU200EU200EU206FU202DU200EU206FU202DU200DU202CU200DU202BU202AU206CU200BU200CU206FU200EU206DU202E_m9F4451EF1A2A5FDAB4C0790B4937262B25B591E9(L_0, L_1, NULL);
	}

IL_000c:
	{
		G_B2_0 = ((int32_t)645954109);
	}

IL_0011:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)418150838)));
		V_3 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)23))))
		{
			case 0:
			{
				goto IL_01cf;
			}
			case 1:
			{
				goto IL_0147;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_000c;
			}
			case 4:
			{
				goto IL_0244;
			}
			case 5:
			{
				goto IL_01e5;
			}
			case 6:
			{
				goto IL_0258;
			}
			case 7:
			{
				goto IL_028e;
			}
			case 8:
			{
				goto IL_01f7;
			}
			case 9:
			{
				goto IL_0210;
			}
			case 10:
			{
				goto IL_02ad;
			}
			case 11:
			{
				goto IL_01ab;
			}
			case 12:
			{
				goto IL_00b3;
			}
			case 13:
			{
				goto IL_017d;
			}
			case 14:
			{
				goto IL_00f4;
			}
			case 15:
			{
				goto IL_009f;
			}
			case 16:
			{
				goto IL_02cf;
			}
			case 17:
			{
				goto IL_012a;
			}
			case 18:
			{
				goto IL_02c3;
			}
			case 19:
			{
				goto IL_0082;
			}
			case 20:
			{
				goto IL_015d;
			}
			case 21:
			{
				goto IL_0199;
			}
			case 22:
			{
				goto IL_02e7;
			}
		}
	}
	{
		goto IL_02e7;
	}

IL_0082:
	{
		uint32_t L_3 = V_1;
		uint32_t L_4 = __this->___U206AU200EU202AU202EU202CU206EU206DU206DU206FU206AU206AU206FU200BU206AU202EU202AU202EU200CU206BU206AU206CU200EU202DU202CU206AU202CU206CU206DU206EU206DU202AU206AU200BU200FU202EU202BU200DU200EU206DU206FU202E_17;
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_4))))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_5 = ((int32_t)672250597);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_0099;
	}

IL_0093:
	{
		int32_t L_6 = ((int32_t)374576301);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_0099:
	{
		G_B2_0 = G_B7_1;
		goto IL_0011;
	}

IL_009f:
	{
		V_0 = 0;
		uint32_t L_7 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)142052911)))^((int32_t)-1518096737)));
		goto IL_0011;
	}

IL_00b3:
	{
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* L_8 = __this->___U200FU200FU206EU206EU200CU206BU202BU200CU206FU206CU206FU206EU206CU206BU200DU200BU206EU206AU202AU202BU202DU202DU202BU200DU206AU206FU200EU202CU206AU200FU206CU200FU202CU206CU200CU200EU200BU206FU206BU206FU202E_12;
		NullCheck(L_8);
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_U202EU206DU206DU202DU200BU202CU206BU200EU202AU200BU206AU206CU200EU200EU202DU206DU202BU206EU202BU206DU206BU202CU206FU200EU206BU206AU206AU202BU202EU200DU202CU202EU202EU200BU202EU206AU206DU202BU206BU200FU202E_m075275B910D7F14433A869E6263277F4155DF772(L_8, NULL);
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* L_9 = (&__this->___U202BU206BU202BU200DU202BU200EU206DU202AU200CU200FU206BU200BU200CU200CU202AU202DU206DU200CU200DU206BU206CU202DU200FU206CU206BU206AU206CU206FU206DU200EU202DU202EU202EU206BU206EU206CU200EU200BU206CU206CU202E_16);
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U200FU202DU200BU206BU200EU202AU206EU206CU202BU206BU206CU202DU200BU202CU200BU206CU200FU206DU202EU200FU200DU206FU206BU202CU206BU200BU206CU202AU200CU200FU206BU206CU206EU202CU202BU200BU200BU206AU202AU200CU202E_m76F9A027DF3FE429F7187112B6C5FF37CED880CE(L_9, NULL);
		uint32_t L_10 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-2086345935)))^((int32_t)-797380613)));
		goto IL_0011;
	}

IL_00db:
	{
		uint32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) < ((uint32_t)((int32_t)114)))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_12 = ((int32_t)1441384932);
		G_B13_0 = L_12;
		G_B13_1 = L_12;
		goto IL_00ee;
	}

IL_00e8:
	{
		int32_t L_13 = ((int32_t)1920358159);
		G_B13_0 = L_13;
		G_B13_1 = L_13;
	}

IL_00ee:
	{
		G_B2_0 = G_B13_1;
		goto IL_0011;
	}

IL_00f4:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_14 = __this->___U202BU200DU200DU206FU200DU206AU206DU202DU200CU202AU202BU200BU206EU200BU200CU206EU202AU200EU200FU200BU206AU200DU200EU206BU202AU206DU200BU200EU200EU206FU206EU202EU202DU200CU206FU206AU200BU202BU200CU200CU202E_4;
		uint32_t L_15 = V_0;
		NullCheck(L_14);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056(((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_15)))), NULL);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_16 = __this->___U206DU202BU206CU200BU206DU202DU202AU202BU206BU206BU206EU202AU200FU200EU206DU206CU206FU200EU200CU202EU206BU202AU200EU200BU202DU206CU206EU206FU206CU202EU200FU200FU206DU202BU206CU206EU202DU202CU202CU200FU202E_5;
		uint32_t L_17 = V_0;
		NullCheck(L_16);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_17)))), NULL);
		uint32_t L_18 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)-2046861454)))^((int32_t)668164931)));
		goto IL_0011;
	}

IL_012a:
	{
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* L_19 = __this->___U206DU200EU200EU206FU202DU206DU202DU206FU200DU200EU206EU206FU202AU202AU206BU202BU200CU206EU202EU206CU202BU202AU202EU200EU202CU200DU200CU202AU200EU206DU200EU206FU202DU200BU200DU200BU200EU202CU200CU202CU202E_6;
		NullCheck(L_19);
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_U202EU206DU206DU202DU200BU202CU206BU200EU202AU200BU206AU206CU200EU200EU202DU206DU202BU206EU202BU206DU206BU202CU206FU200EU206BU206AU206AU202BU202EU200DU202CU202EU202EU200BU202EU206AU206DU202BU206BU200FU202E_m075275B910D7F14433A869E6263277F4155DF772(L_19, NULL);
		uint32_t L_20 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)-1579863217)))^((int32_t)-99356311)));
		goto IL_0011;
	}

IL_0147:
	{
		uint32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, 1));
		uint32_t L_22 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)-1246551845)))^((int32_t)1346117595)));
		goto IL_0011;
	}

IL_015d:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_23 = __this->___U206CU200CU206EU202CU200BU206FU202BU202EU202BU200EU206CU202EU202DU200DU206FU202BU200CU200FU206CU202DU202EU206FU202CU200FU200BU206FU206BU206AU206FU200DU200BU202EU200CU200FU202CU202EU202CU206DU200EU206DU202E_9;
		uint32_t L_24 = V_0;
		NullCheck(L_23);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056(((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_24)))), NULL);
		uint32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, 1));
		G_B2_0 = ((int32_t)1278306355);
		goto IL_0011;
	}

IL_017d:
	{
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* L_26 = __this->___U206CU206FU202EU202DU200EU202AU206BU206CU202DU200EU200EU200BU206AU202DU206AU200CU200DU200EU202DU202CU200FU202BU200DU202DU206EU202DU200EU202DU206BU206BU200EU206BU202AU200CU200BU200DU206CU206EU206AU206AU202E_10;
		uint32_t L_27 = V_0;
		NullCheck(L_26);
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U200FU202DU200BU206BU200EU202AU206EU206CU202BU206BU206CU202DU200BU202CU200BU206CU200FU206DU202EU200FU200DU206FU206BU202CU206BU200BU206CU202AU200CU200FU206BU206CU206EU202CU202BU200BU200BU206AU202AU200CU202E_m76F9A027DF3FE429F7187112B6C5FF37CED880CE(((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_27)))), NULL);
		G_B2_0 = ((int32_t)798357394);
		goto IL_0011;
	}

IL_0199:
	{
		uint32_t L_28 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_28, ((int32_t)939794383)))^((int32_t)-1989030279)));
		goto IL_0011;
	}

IL_01ab:
	{
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* L_29 = __this->___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_30 = p1;
		bool L_31 = __this->___U202AU206EU200FU206DU200DU200FU206DU206CU202EU206FU200BU200BU202AU202DU202EU206AU200BU202EU200CU206FU202DU200EU200DU200FU200BU206EU206DU200FU206AU202DU206DU202EU202AU206EU206EU206BU200BU202AU200CU202BU202E_13;
		NullCheck(L_29);
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U200BU202AU206DU200DU200DU202AU206EU206CU200EU200CU200CU206FU202AU200BU200FU200CU202BU206CU202EU206DU200DU206EU200EU200EU206DU206CU202BU206CU206FU206DU206DU202BU202BU206EU202DU200FU206BU206AU206DU202BU202E_mB83508945AC964AC32BD860A4B3B00434EA6C30F(L_29, L_30, L_31, NULL);
		uint32_t L_32 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_32, ((int32_t)-1472048712)))^((int32_t)781623298)));
		goto IL_0011;
	}

IL_01cf:
	{
		uint32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, 1));
		uint32_t L_34 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_34, ((int32_t)-1897491946)))^((int32_t)-1022957152)));
		goto IL_0011;
	}

IL_01e5:
	{
		uint32_t L_35 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_35, ((int32_t)221902522)))^((int32_t)62519937)));
		goto IL_0011;
	}

IL_01f7:
	{
		uint32_t L_36 = V_0;
		if ((!(((uint32_t)L_36) < ((uint32_t)((int32_t)12)))))
		{
			goto IL_0204;
		}
	}
	{
		int32_t L_37 = ((int32_t)1520487199);
		G_B26_0 = L_37;
		G_B26_1 = L_37;
		goto IL_020a;
	}

IL_0204:
	{
		int32_t L_38 = ((int32_t)1450139614);
		G_B26_0 = L_38;
		G_B26_1 = L_38;
	}

IL_020a:
	{
		G_B2_0 = G_B26_1;
		goto IL_0011;
	}

IL_0210:
	{
		uint32_t L_39 = V_0;
		uint32_t L_40 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_39<<4)), (int32_t)L_40));
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_41 = __this->___U206DU206DU200CU200FU200DU200CU202EU202EU200DU206FU202BU200EU202EU206FU206AU206CU202CU202DU202DU200BU200CU206AU202AU206AU206FU202EU206DU206FU200FU206EU206BU200EU206FU202AU200BU202CU206DU206DU202EU200EU202E_0;
		uint32_t L_42 = V_2;
		NullCheck(L_41);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056(((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_42)))), NULL);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_43 = __this->___U200FU202CU200BU206DU206FU202DU206CU202BU202BU200FU202DU206BU202BU200FU202BU200CU206BU202DU206CU202EU202CU206BU206AU206AU200FU206EU202AU200EU206CU206DU206EU206DU200FU202CU202AU200EU206EU202EU206CU206AU202E_1;
		uint32_t L_44 = V_2;
		NullCheck(L_43);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056(((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_44)))), NULL);
		G_B2_0 = ((int32_t)167444284);
		goto IL_0011;
	}

IL_0244:
	{
		V_0 = 0;
		uint32_t L_45 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_45, ((int32_t)-1485666619)))^((int32_t)1422065945)));
		goto IL_0011;
	}

IL_0258:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_46 = __this->___U202AU202BU206AU206FU200EU206CU200DU206CU200FU206CU206AU200BU200DU206EU202EU200BU200EU206CU206DU202BU200CU202EU206CU206EU206AU206FU200BU202CU206DU200CU202EU200FU200CU206BU200DU206BU206FU206DU202EU206BU202E_2;
		uint32_t L_47 = V_0;
		NullCheck(L_46);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056(((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_47)))), NULL);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_48 = __this->___U206DU200DU200DU200CU202AU202BU206DU200CU200EU206DU202EU200BU206BU202CU206BU200FU202DU200FU200EU200DU202EU202CU202BU202AU200BU206BU202DU202CU200EU200BU202DU202AU206CU200DU200DU202BU206AU202EU206DU202EU202E_3;
		uint32_t L_49 = V_0;
		NullCheck(L_48);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056(((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_49)))), NULL);
		uint32_t L_50 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_50, ((int32_t)-2116128133)))^((int32_t)-708985928)));
		goto IL_0011;
	}

IL_028e:
	{
		U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* L_51 = __this->___U200FU206EU200FU206CU202BU206BU200CU200EU202EU206EU202BU206EU206BU206CU202BU200DU206BU200DU200EU202CU200BU200EU206BU200DU206CU206CU200EU202BU200BU202BU206EU206CU206BU202CU200CU206EU200EU202EU200CU200EU202E_7;
		NullCheck(L_51);
		U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U202AU206AU200CU206FU206CU200FU202CU200EU200CU200FU206FU202BU202DU206FU200DU206BU206AU200CU206EU202BU202BU206BU200CU206AU200DU200DU202DU200FU200BU206BU206EU202DU206DU202CU200DU202EU202DU200EU202EU202AU202E_mB6EBF7D623695E477227729975608B7BFA18056C(L_51, NULL);
		V_0 = 0;
		uint32_t L_52 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_52, ((int32_t)190179429)))^((int32_t)231223728)));
		goto IL_0011;
	}

IL_02ad:
	{
		uint32_t L_53 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, 1));
		uint32_t L_54 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_54, ((int32_t)-616812244)))^((int32_t)-1672232809)));
		goto IL_0011;
	}

IL_02c3:
	{
		V_1 = 0;
		G_B2_0 = ((int32_t)705004322);
		goto IL_0011;
	}

IL_02cf:
	{
		uint32_t L_55 = V_0;
		if ((!(((uint32_t)L_55) >= ((uint32_t)4))))
		{
			goto IL_02db;
		}
	}
	{
		int32_t L_56 = ((int32_t)1665588884);
		G_B36_0 = L_56;
		G_B36_1 = L_56;
		goto IL_02e1;
	}

IL_02db:
	{
		int32_t L_57 = ((int32_t)1911736889);
		G_B36_0 = L_57;
		G_B36_1 = L_57;
	}

IL_02e1:
	{
		G_B2_0 = G_B36_1;
		goto IL_0011;
	}

IL_02e7:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.IO.Stream,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U200CU200CU202DU206BU200EU202CU202DU200FU206DU202DU202CU206DU202BU200BU206AU200EU206FU200BU206CU202EU206BU202EU202BU202CU200CU206FU206AU200BU202BU202BU206FU206AU202CU206CU202BU200CU200EU202CU200FU206CU202E_mDC8E1A7DFEFF703AE2455D70040021F46AFB5DF2 (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p1, int64_t p2, int64_t p3, const RuntimeMethod* method) 
{
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint8_t V_7 = 0x0;
	uint32_t V_8 = 0;
	uint8_t V_9 = 0x0;
	uint8_t V_10 = 0x0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B25_1 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B33_1 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B43_1 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B55_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B59_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B69_1 = 0;
	int32_t G_B74_0 = 0;
	int32_t G_B74_1 = 0;
	int32_t G_B78_0 = 0;
	int32_t G_B78_1 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B91_1 = 0;
	int32_t G_B100_0 = 0;
	int32_t G_B100_1 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = p0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = p1;
		U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U206AU206BU200FU206AU200DU206AU202DU206AU200EU206BU206EU206AU206FU206EU200FU200CU206CU202DU200FU206FU206BU200BU202CU206AU200DU202DU202BU202AU202CU206BU200DU206BU200BU206BU206CU206EU206AU202BU206EU202E_mE773385C18F4BFB53A54A935DD8316BB6C42557C(__this, L_0, L_1, NULL);
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)-200768343);
	}

IL_000d:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-822703721)));
		V_15 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)55))))
		{
			case 0:
			{
				goto IL_0520;
			}
			case 1:
			{
				goto IL_074a;
			}
			case 2:
			{
				goto IL_0679;
			}
			case 3:
			{
				goto IL_015d;
			}
			case 4:
			{
				goto IL_0169;
			}
			case 5:
			{
				goto IL_0688;
			}
			case 6:
			{
				goto IL_03e7;
			}
			case 7:
			{
				goto IL_02a9;
			}
			case 8:
			{
				goto IL_01b7;
			}
			case 9:
			{
				goto IL_0540;
			}
			case 10:
			{
				goto IL_020c;
			}
			case 11:
			{
				goto IL_04f0;
			}
			case 12:
			{
				goto IL_0375;
			}
			case 13:
			{
				goto IL_022f;
			}
			case 14:
			{
				goto IL_0560;
			}
			case 15:
			{
				goto IL_01d7;
			}
			case 16:
			{
				goto IL_0130;
			}
			case 17:
			{
				goto IL_0483;
			}
			case 18:
			{
				goto IL_065b;
			}
			case 19:
			{
				goto IL_054d;
			}
			case 20:
			{
				goto IL_0461;
			}
			case 21:
			{
				goto IL_0624;
			}
			case 22:
			{
				goto IL_07db;
			}
			case 23:
			{
				goto IL_011d;
			}
			case 24:
			{
				goto IL_02d1;
			}
			case 25:
			{
				goto IL_0418;
			}
			case 26:
			{
				goto IL_0267;
			}
			case 27:
			{
				goto IL_0354;
			}
			case 28:
			{
				goto IL_06a6;
			}
			case 29:
			{
				goto IL_04b7;
			}
			case 30:
			{
				goto IL_05f0;
			}
			case 31:
			{
				goto IL_06e8;
			}
			case 32:
			{
				goto IL_0008;
			}
			case 33:
			{
				goto IL_0191;
			}
			case 34:
			{
				goto IL_05ca;
			}
			case 35:
			{
				goto IL_030b;
			}
			case 36:
			{
				goto IL_0785;
			}
			case 37:
			{
				goto IL_07b9;
			}
			case 38:
			{
				goto IL_070f;
			}
			case 39:
			{
				goto IL_057a;
			}
			case 40:
			{
				goto IL_058d;
			}
			case 41:
			{
				goto IL_03d1;
			}
			case 42:
			{
				goto IL_014a;
			}
			case 43:
			{
				goto IL_00ff;
			}
			case 44:
			{
				goto IL_0249;
			}
			case 45:
			{
				goto IL_075d;
			}
			case 46:
			{
				goto IL_0332;
			}
			case 47:
			{
				goto IL_04cf;
			}
			case 48:
			{
				goto IL_0470;
			}
			case 49:
			{
				goto IL_03b7;
			}
			case 50:
			{
				goto IL_06f9;
			}
			case 51:
			{
				goto IL_02f8;
			}
			case 52:
			{
				goto IL_0258;
			}
			case 53:
			{
				goto IL_050a;
			}
			case 54:
			{
				goto IL_0447;
			}
		}
	}
	{
		goto IL_07db;
	}

IL_00ff:
	{
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_3 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		NullCheck(L_3);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_U200CU202EU206BU206FU200FU202BU200BU202CU206FU206BU202EU202BU202BU202DU200DU202AU206EU200BU206DU200CU200FU202AU206BU206EU206AU206DU206BU206DU200FU200DU202DU206CU200DU200DU200BU200CU206FU206EU206FU202DU202E_m53FF8FD906E75AF348CB5E64AC7BD8CC1C5E9E8C(L_3, NULL);
		uint32_t L_4 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)1907234276)))^((int32_t)263726274)));
		goto IL_000d;
	}

IL_011d:
	{
		uint32_t L_5 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)-2079434310)))^((int32_t)60093104)));
		goto IL_000d;
	}

IL_0130:
	{
		uint64_t L_6 = V_5;
		uint64_t L_7 = V_6;
		if ((!(((uint64_t)L_6) >= ((uint64_t)L_7))))
		{
			goto IL_013e;
		}
	}
	{
		int32_t L_8 = ((int32_t)-198084797);
		G_B9_0 = L_8;
		G_B9_1 = L_8;
		goto IL_0144;
	}

IL_013e:
	{
		int32_t L_9 = ((int32_t)-473200297);
		G_B9_0 = L_9;
		G_B9_1 = L_9;
	}

IL_0144:
	{
		G_B2_0 = G_B9_1;
		goto IL_000d;
	}

IL_014a:
	{
		uint32_t L_10 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-897712893)))^((int32_t)-1771869641)));
		goto IL_000d;
	}

IL_015d:
	{
		uint32_t L_11 = V_2;
		V_3 = L_11;
		G_B2_0 = ((int32_t)-1918831401);
		goto IL_000d;
	}

IL_0169:
	{
		uint32_t L_12 = V_3;
		V_4 = L_12;
		uint32_t L_13 = V_2;
		V_3 = L_13;
		uint32_t L_14 = V_1;
		V_2 = L_14;
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* L_15 = __this->___U206DU200EU200EU206FU202DU206DU202DU206FU200DU200EU206EU206FU202AU202AU206BU202BU200CU206EU202EU206CU202BU202AU202EU200EU202CU200DU200CU202AU200EU206DU200EU206FU202DU200BU200DU200BU200EU202CU200CU202CU202E_6;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_16 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		uint32_t L_17 = V_8;
		NullCheck(L_15);
		uint32_t L_18;
		L_18 = U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_U206FU200FU206AU206AU202CU206EU200BU202CU202EU200CU202AU200DU206DU202DU202EU206FU202DU202DU202AU200BU202EU202DU206AU206CU206DU206BU202CU202CU202EU200EU206FU206AU200BU202EU202DU202AU200EU206BU206BU200DU202E_mFC14D0B536278223DCC452F61DE4419CEA55A02F(L_15, L_16, L_17, NULL);
		V_11 = ((int32_t)il2cpp_codegen_add(2, (int32_t)L_18));
		G_B2_0 = ((int32_t)-422377839);
		goto IL_000d;
	}

IL_0191:
	{
		uint32_t L_19 = V_1;
		uint32_t L_20 = __this->___U206CU206BU200CU202BU200CU202BU206DU200FU202CU206AU202EU206FU206DU200DU206AU200FU202BU206AU206CU200BU200BU200EU202CU200EU200DU202CU206FU206EU200EU206DU202EU202EU202BU202EU202EU202DU206BU200EU200DU200FU202E_15;
		if ((!(((uint32_t)L_19) >= ((uint32_t)L_20))))
		{
			goto IL_01a2;
		}
	}
	{
		int32_t L_21 = ((int32_t)834054159);
		G_B16_0 = L_21;
		G_B16_1 = L_21;
		goto IL_01a8;
	}

IL_01a2:
	{
		int32_t L_22 = ((int32_t)558026657);
		G_B16_0 = L_22;
		G_B16_1 = L_22;
	}

IL_01a8:
	{
		uint32_t L_23 = V_15;
		G_B2_0 = ((int32_t)(G_B16_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)-592317433)))));
		goto IL_000d;
	}

IL_01b7:
	{
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* L_24 = __this->___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8;
		NullCheck(L_24);
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U202EU202DU206EU206AU202BU200BU200FU206FU202BU200EU206CU202CU206AU200BU200EU200EU202BU206DU202EU206AU206AU206AU200DU200EU200CU200DU206BU202CU200FU202CU200DU202EU206DU200DU202DU206BU202EU202DU206DU206FU202E_m0E89AE02BB13D5AB880CE25F4F4AAFA09D61A48D(L_24, NULL);
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* L_25 = __this->___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8;
		NullCheck(L_25);
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206CU206AU206BU200BU206AU206DU200CU206EU206BU206EU200DU206CU202BU206EU206FU206FU206EU206CU200EU200FU206DU202BU202BU202DU206CU200BU206EU202BU206FU206EU200CU206CU200EU206EU206DU200CU206AU202DU206DU206DU202E_m7BFC0F2D7CB2391AD8AAB8AE69F82190EE8F80E5(L_25, NULL);
		G_B2_0 = ((int32_t)-797116760);
		goto IL_000d;
	}

IL_01d7:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_26 = __this->___U202AU202BU206AU206FU200EU206CU200DU206CU200FU206CU206AU200BU200DU206EU202EU200BU200EU206CU206DU202BU200CU202EU206CU206EU206AU206FU200BU202CU206DU200CU202EU200FU200CU206BU200DU206BU206FU206DU202EU206BU202E_2;
		uint32_t L_27 = (&V_0)->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		NullCheck(L_26);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_28 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		uint32_t L_29;
		L_29 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_27)))), L_28, NULL);
		if ((!(((uint32_t)L_29) == ((uint32_t)1))))
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_30 = ((int32_t)-481610733);
		G_B21_0 = L_30;
		G_B21_1 = L_30;
		goto IL_0206;
	}

IL_0200:
	{
		int32_t L_31 = ((int32_t)-1235491617);
		G_B21_0 = L_31;
		G_B21_1 = L_31;
	}

IL_0206:
	{
		G_B2_0 = G_B21_1;
		goto IL_000d;
	}

IL_020c:
	{
		uint32_t L_32 = V_13;
		if ((!(((uint32_t)L_32) >= ((uint32_t)((int32_t)14)))))
		{
			goto IL_021a;
		}
	}
	{
		int32_t L_33 = ((int32_t)-571589919);
		G_B25_0 = L_33;
		G_B25_1 = L_33;
		goto IL_0220;
	}

IL_021a:
	{
		int32_t L_34 = ((int32_t)-1135283467);
		G_B25_0 = L_34;
		G_B25_1 = L_34;
	}

IL_0220:
	{
		uint32_t L_35 = V_15;
		G_B2_0 = ((int32_t)(G_B25_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_35, ((int32_t)-1796649383)))));
		goto IL_000d;
	}

IL_022f:
	{
		U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200EU202CU200BU200FU202EU200CU200DU206AU206FU206EU202BU206AU200CU206CU200BU200CU206AU206BU206DU200BU206DU206AU202AU202BU206FU200FU202DU202CU202EU200DU206CU200CU202AU202EU200DU206EU206BU200CU200FU200DU202E_mECE91C0C864053D62DBA98DFD221D66AA42E9312((&V_0), NULL);
		uint32_t L_36 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_36, ((int32_t)773506244)))^((int32_t)-1298913837)));
		goto IL_000d;
	}

IL_0249:
	{
		goto IL_0354;
	}
	// Dead block : IL_024e: ldc.i4 -275523228

IL_0258:
	{
		uint32_t L_37 = V_1;
		V_2 = L_37;
		uint32_t L_38 = V_12;
		V_1 = L_38;
		G_B2_0 = ((int32_t)-47416632);
		goto IL_000d;
	}

IL_0267:
	{
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* L_39 = __this->___U206CU206FU202EU202DU200EU202AU206BU206CU202DU200EU200EU200BU206AU202DU206AU200CU200DU200EU202DU202CU200FU202BU200DU202DU206EU202DU200EU202DU206BU206BU200EU206BU202AU200CU200BU200DU206CU206EU206AU206AU202E_10;
		uint32_t L_40 = V_11;
		uint32_t L_41;
		L_41 = U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U206FU200EU206DU200DU200DU202AU200DU200CU202AU206CU206BU202DU206CU206CU202CU202CU202CU206BU200BU200FU202AU200BU200FU206FU200EU202BU206BU200EU200CU200CU202BU200EU202CU206DU200FU206CU206EU200BU202AU202BU202E_m97F7752B53C1F058489A46CA3F74F72D2008F3EB(L_40, NULL);
		NullCheck(L_39);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_42 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		uint32_t L_43;
		L_43 = U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206EU202BU202CU202DU202DU200CU206CU200CU200CU202AU202AU200BU206AU206DU202BU206CU202DU200CU200BU202EU206BU200EU202CU202EU202CU202BU200EU206BU200FU202BU200CU206DU200FU200EU206BU206AU200FU206BU202EU206AU202E_mECDBD5D94CF50EEA7C36024C4EE8387FD7D0E14B(((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_41)))), L_42, NULL);
		V_13 = L_43;
		uint32_t L_44 = V_13;
		if ((!(((uint32_t)L_44) < ((uint32_t)4))))
		{
			goto IL_0294;
		}
	}
	{
		int32_t L_45 = ((int32_t)-1461648073);
		G_B33_0 = L_45;
		G_B33_1 = L_45;
		goto IL_029a;
	}

IL_0294:
	{
		int32_t L_46 = ((int32_t)-1538407248);
		G_B33_0 = L_46;
		G_B33_1 = L_46;
	}

IL_029a:
	{
		uint32_t L_47 = V_15;
		G_B2_0 = ((int32_t)(G_B33_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_47, ((int32_t)1268240930)))));
		goto IL_000d;
	}

IL_02a9:
	{
		U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* L_48 = __this->___U200FU206EU200FU206CU202BU206BU200CU200EU202EU206EU202BU206EU206BU206CU202BU200DU206BU200DU200EU202CU200BU200EU206BU200DU206CU206CU200EU202BU200BU202BU206EU206CU206BU202CU200CU206EU200EU202EU200CU200EU202E_7;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_49 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		NullCheck(L_48);
		uint8_t L_50;
		L_50 = U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U206AU206EU202AU202AU206FU200BU206FU202CU202DU206FU200DU202BU200EU206FU202CU206EU206FU202EU206FU202BU206AU200CU200CU202DU200CU206CU200FU202BU200DU202BU206FU206EU206BU200FU200BU202EU202EU202EU206FU200DU202E_m5CA83382E0A42282694FA67B2A8C27653F7A6861(L_48, L_49, 0, (uint8_t)0, NULL);
		V_7 = L_50;
		uint32_t L_51 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_51, ((int32_t)199538701)))^((int32_t)-1237887065)));
		goto IL_000d;
	}

IL_02d1:
	{
		uint32_t L_52 = V_1;
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* L_53 = (&__this->___U202BU206BU202BU200DU202BU200EU206DU202AU200CU200FU206BU200BU200CU200CU202AU202DU206DU200CU200DU206BU206CU202DU200FU206CU206BU206AU206CU206FU206DU200EU202DU202EU202EU206BU206EU206CU200EU200BU206CU206CU202E_16);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_54 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		uint32_t L_55;
		L_55 = U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206CU206AU206BU200FU206BU202CU206FU202DU200CU202BU206CU206BU202AU202CU200CU202AU206BU200DU206AU200CU200EU202DU200EU200EU202BU202EU200BU200DU202DU206AU206CU202AU206DU200EU202DU206FU200BU202EU202EU202DU202E_m9A56878E7864B1B30ED4369FA57B5A347BAC0B29(L_53, L_54, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)L_55));
		uint32_t L_56 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_56, ((int32_t)1760415124)))^((int32_t)-1485130990)));
		goto IL_000d;
	}

IL_02f8:
	{
		uint32_t L_57 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_57, ((int32_t)1897386339)))^((int32_t)-1852081749)));
		goto IL_000d;
	}

IL_030b:
	{
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* L_58 = __this->___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8;
		uint8_t L_59 = V_7;
		NullCheck(L_58);
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U202AU200FU206BU206BU200FU206FU206AU206DU200DU202EU200DU202CU200EU202DU202CU206BU206DU202AU200BU200DU200CU202BU200EU206DU206AU206DU200CU202EU206AU206CU206FU202EU206CU202DU206CU206BU206BU200CU202BU202DU202E_m14389FEBAE859C343FDA84BC9D25FFF9C73800DA(L_58, L_59, NULL);
		uint64_t L_60 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)1)));
		uint32_t L_61 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_61, ((int32_t)-495520656)))^((int32_t)-1560521916)));
		goto IL_000d;
	}

IL_0332:
	{
		U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* L_62 = __this->___U200FU206EU200FU206CU202BU206BU200CU200EU202EU206EU202BU206EU206BU206CU202BU200DU206BU200DU200EU202CU200BU200EU206BU200DU206CU206CU200EU202BU200BU202BU206EU206CU206BU202CU200CU206EU200EU202EU200CU200EU202E_7;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_63 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		uint64_t L_64 = V_5;
		uint8_t L_65 = V_10;
		NullCheck(L_62);
		uint8_t L_66;
		L_66 = U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U206AU206EU202AU202AU206FU200BU206FU202CU202DU206FU200DU202BU200EU206FU202CU206EU206FU202EU206FU202BU206AU200CU200CU202DU200CU206CU200FU202BU200DU202BU206FU206EU206BU200FU200BU202EU202EU202EU206FU200DU202E_m5CA83382E0A42282694FA67B2A8C27653F7A6861(L_62, L_63, ((int32_t)(uint32_t)L_64), L_65, NULL);
		V_9 = L_66;
		G_B2_0 = ((int32_t)-301764762);
		goto IL_000d;
	}

IL_0354:
	{
		U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* L_67 = __this->___U200FU200FU206EU206EU200CU206BU202BU200CU206FU206CU206FU206EU206CU206BU200DU200BU206EU206AU202AU202BU202DU202DU202BU200DU206AU206FU200EU202CU206AU200FU206CU200FU202CU206CU200CU200EU200BU206FU206BU206FU202E_12;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_68 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		uint32_t L_69 = V_8;
		NullCheck(L_67);
		uint32_t L_70;
		L_70 = U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_U206FU200FU206AU206AU202CU206EU200BU202CU202EU200CU202AU200DU206DU202DU202EU206FU202DU202DU202AU200BU202EU202DU206AU206CU206DU206BU202CU202CU202EU200EU206FU206AU200BU202EU202DU202AU200EU206BU206BU200DU202E_mFC14D0B536278223DCC452F61DE4419CEA55A02F(L_67, L_68, L_69, NULL);
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, 2));
		G_B2_0 = ((int32_t)-878962187);
		goto IL_000d;
	}

IL_0375:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_71 = __this->___U200FU202CU200BU206DU206FU202DU206CU202BU202BU200FU202DU206BU202BU200FU202BU200CU206BU202DU206CU202EU202CU206BU206AU206AU200FU206EU202AU200EU206CU206DU206EU206DU200FU202CU202AU200EU206EU202EU206CU206AU202E_1;
		uint32_t L_72 = (&V_0)->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		uint32_t L_73 = V_8;
		NullCheck(L_71);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_74 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		uint32_t L_75;
		L_75 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_72<<4)), (int32_t)L_73)))))), L_74, NULL);
		if (L_75)
		{
			goto IL_03a2;
		}
	}
	{
		int32_t L_76 = ((int32_t)-297003565);
		G_B43_0 = L_76;
		G_B43_1 = L_76;
		goto IL_03a8;
	}

IL_03a2:
	{
		int32_t L_77 = ((int32_t)-37217146);
		G_B43_0 = L_77;
		G_B43_1 = L_77;
	}

IL_03a8:
	{
		uint32_t L_78 = V_15;
		G_B2_0 = ((int32_t)(G_B43_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_78, ((int32_t)1747297346)))));
		goto IL_000d;
	}

IL_03b7:
	{
		U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206EU200DU206DU206CU200FU206DU200BU206AU206EU202BU202EU206BU202CU206DU206BU202CU206BU200FU200BU202BU200BU206CU202AU206BU202DU202DU200EU200EU206EU200BU206DU206CU200CU200BU206AU206DU200CU206AU202EU200FU202E_m6D5C9D3F76CF0DDFBAF4F9E924D7C8B609A9E319((&V_0), NULL);
		uint32_t L_79 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_79, ((int32_t)-1646577631)))^((int32_t)-280929572)));
		goto IL_000d;
	}

IL_03d1:
	{
		uint32_t L_80 = V_2;
		V_12 = L_80;
		uint32_t L_81 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_81, ((int32_t)528724382)))^((int32_t)1951859596)));
		goto IL_000d;
	}

IL_03e7:
	{
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* L_82 = __this->___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8;
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* L_83 = __this->___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8;
		uint32_t L_84 = V_1;
		NullCheck(L_83);
		uint8_t L_85;
		L_85 = U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206FU200BU200BU202EU202EU202BU206BU206DU206FU200BU206AU202DU202EU206CU206AU200DU202CU206CU206EU200FU206CU200FU206DU206DU200FU206BU202DU206BU200BU200CU202AU206AU202EU206FU200FU202EU202DU206CU202CU206BU202E_m5B6E14A328259A386A6523F050EB9A3EB85386B2(L_83, L_84, NULL);
		NullCheck(L_82);
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U202AU200FU206BU206BU200FU206FU206AU206DU200DU202EU200DU202CU200EU202DU202CU206BU206DU202AU200BU200DU200CU202BU200EU206DU206AU206DU200CU202EU206AU206CU206FU202EU206CU202DU206CU206BU206BU200CU202BU202DU202E_m14389FEBAE859C343FDA84BC9D25FFF9C73800DA(L_82, L_85, NULL);
		uint64_t L_86 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
		uint32_t L_87 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_87, ((int32_t)2083262923)))^((int32_t)207350722)));
		goto IL_000d;
	}

IL_0418:
	{
		uint32_t L_88 = V_1;
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_89 = __this->___U206CU200CU206EU202CU200BU206FU202BU202EU202BU200EU206CU202EU202DU200DU206FU202BU200CU200FU206CU202DU202EU206FU202CU200FU200BU206FU206BU206AU206FU200DU200BU202EU200CU200FU202CU202EU202CU206DU200EU206DU202E_9;
		uint32_t L_90 = V_1;
		uint32_t L_91 = V_13;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_92 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		int32_t L_93 = V_14;
		uint32_t L_94;
		L_94 = U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206FU200EU202CU202DU202CU200CU202DU206DU206BU206DU202AU200BU206AU202AU206EU202EU202AU206BU202AU202AU206BU200BU202DU200DU206EU200CU202DU200EU206EU206BU200DU200DU206CU200DU202CU200CU206DU206BU206FU200DU202E_mBC8374786819633A0E26D5C39408F66EE06920B4(L_89, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)L_91)), 1)), L_92, L_93, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)L_94));
		uint32_t L_95 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_95, ((int32_t)-559345280)))^((int32_t)506023100)));
		goto IL_000d;
	}

IL_0447:
	{
		uint64_t L_96 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, ((int64_t)1)));
		uint32_t L_97 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_97, ((int32_t)93671611)))^((int32_t)1084429961)));
		goto IL_000d;
	}

IL_0461:
	{
		goto IL_0130;
	}
	// Dead block : IL_0466: ldc.i4 -473200297

IL_0470:
	{
		uint32_t L_98 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_98, ((int32_t)1970266754)))^((int32_t)1327094497)));
		goto IL_000d;
	}

IL_0483:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_99 = __this->___U202BU200DU200DU206FU200DU206AU206DU202DU200CU202AU202BU200BU206EU200BU200CU206EU202AU200EU200FU200BU206AU200DU200EU206BU202AU206DU200BU200EU200EU206FU206EU202EU202DU200CU206FU206AU200BU202BU200CU200CU202E_4;
		uint32_t L_100 = (&V_0)->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		NullCheck(L_99);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_101 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		uint32_t L_102;
		L_102 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(((L_99)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_100)))), L_101, NULL);
		if (!L_102)
		{
			goto IL_04ab;
		}
	}
	{
		int32_t L_103 = ((int32_t)-330645618);
		G_B55_0 = L_103;
		G_B55_1 = L_103;
		goto IL_04b1;
	}

IL_04ab:
	{
		int32_t L_104 = ((int32_t)-652470281);
		G_B55_0 = L_104;
		G_B55_1 = L_104;
	}

IL_04b1:
	{
		G_B2_0 = G_B55_1;
		goto IL_000d;
	}

IL_04b7:
	{
		uint32_t L_105 = V_1;
		if ((!(((uint32_t)L_105) == ((uint32_t)(-1)))))
		{
			goto IL_04c3;
		}
	}
	{
		int32_t L_106 = ((int32_t)-2069654417);
		G_B59_0 = L_106;
		G_B59_1 = L_106;
		goto IL_04c9;
	}

IL_04c3:
	{
		int32_t L_107 = ((int32_t)-201209526);
		G_B59_0 = L_107;
		G_B59_1 = L_107;
	}

IL_04c9:
	{
		G_B2_0 = G_B59_1;
		goto IL_000d;
	}

IL_04cf:
	{
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* L_108 = __this->___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8;
		NullCheck(L_108);
		uint8_t L_109;
		L_109 = U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206FU200BU200BU202EU202EU202BU206BU206DU206FU200BU206AU202DU202EU206CU206AU200DU202CU206CU206EU200FU206CU200FU206DU206DU200FU206BU202DU206BU200BU200CU202AU206AU202EU206FU200FU202EU202DU206CU202CU206BU202E_m5B6E14A328259A386A6523F050EB9A3EB85386B2(L_108, 0, NULL);
		V_10 = L_109;
		uint32_t L_110 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_110, ((int32_t)-969961351)))^((int32_t)-131079610)));
		goto IL_000d;
	}

IL_04f0:
	{
		U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206BU206FU202EU202DU200EU200EU202DU200CU206EU200DU206EU202EU206FU200EU206CU202AU202DU200DU200CU206EU206CU200EU202BU200FU200DU202BU202AU202DU202BU200CU200FU206DU206FU206AU206DU202CU200CU200BU200DU200EU202E_mFCCF7B739B50C4A62068107E042045228AFFFB16((&V_0), NULL);
		uint32_t L_111 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_111, ((int32_t)-1984432439)))^((int32_t)-1252276731)));
		goto IL_000d;
	}

IL_050a:
	{
		uint64_t L_112 = V_5;
		uint32_t L_113 = __this->___U206AU200EU202AU202EU202CU206EU206DU206DU206FU206AU206AU206FU200BU206AU202EU202AU202EU200CU206BU206AU206CU200EU202DU202CU206AU202CU206CU206DU206EU206DU202AU206AU200BU200FU202EU202BU200DU200EU206DU206FU202E_17;
		V_8 = ((int32_t)(((int32_t)(uint32_t)L_112)&(int32_t)L_113));
		G_B2_0 = ((int32_t)-394309882);
		goto IL_000d;
	}

IL_0520:
	{
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* L_114 = __this->___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8;
		uint32_t L_115 = V_1;
		uint32_t L_116 = V_11;
		NullCheck(L_114);
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206AU200EU206AU206DU202AU206EU200DU206AU200DU200CU202EU202EU202AU206FU206BU200FU202DU206FU200BU202EU202EU206FU206AU202BU206AU206BU200CU200DU202BU200EU200EU206AU202CU202AU202CU206FU200CU206DU200DU200DU202E_mD11D2F7DC43CBC333F6FD572F9867A81E09733C7(L_114, L_115, L_116, NULL);
		uint64_t L_117 = V_5;
		uint32_t L_118 = V_11;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_117, ((int64_t)(uint64_t)L_118)));
		G_B2_0 = ((int32_t)-581919343);
		goto IL_000d;
	}

IL_0540:
	{
		uint32_t L_119 = V_13;
		V_1 = L_119;
		G_B2_0 = ((int32_t)-1373976023);
		goto IL_000d;
	}

IL_054d:
	{
		uint32_t L_120 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_120, ((int32_t)1596076935)))^((int32_t)-1601417411)));
		goto IL_000d;
	}

IL_0560:
	{
		uint32_t L_121 = V_1;
		uint64_t L_122 = V_5;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_121)) < ((uint64_t)L_122))))
		{
			goto IL_056e;
		}
	}
	{
		int32_t L_123 = ((int32_t)-555496086);
		G_B69_0 = L_123;
		G_B69_1 = L_123;
		goto IL_0574;
	}

IL_056e:
	{
		int32_t L_124 = ((int32_t)-453660956);
		G_B69_0 = L_124;
		G_B69_1 = L_124;
	}

IL_0574:
	{
		G_B2_0 = G_B69_1;
		goto IL_000d;
	}

IL_057a:
	{
		uint32_t L_125 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_125, ((int32_t)-349639029)))^((int32_t)-787461146)));
		goto IL_000d;
	}

IL_058d:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_126 = __this->___U206DU200DU200DU200CU202AU202BU206DU200CU200EU206DU202EU200BU206BU202CU206BU200FU202DU200FU200EU200DU202EU202CU202BU202AU200BU206BU202DU202CU200EU200BU202DU202AU206CU200DU200DU202BU206AU202EU206DU202EU202E_3;
		uint32_t L_127 = (&V_0)->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		NullCheck(L_126);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_128 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		uint32_t L_129;
		L_129 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(((L_126)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_127)))), L_128, NULL);
		if (L_129)
		{
			goto IL_05b5;
		}
	}
	{
		int32_t L_130 = ((int32_t)515435136);
		G_B74_0 = L_130;
		G_B74_1 = L_130;
		goto IL_05bb;
	}

IL_05b5:
	{
		int32_t L_131 = ((int32_t)1160735736);
		G_B74_0 = L_131;
		G_B74_1 = L_131;
	}

IL_05bb:
	{
		uint32_t L_132 = V_15;
		G_B2_0 = ((int32_t)(G_B74_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_132, ((int32_t)-561266425)))));
		goto IL_000d;
	}

IL_05ca:
	{
		bool L_133;
		L_133 = U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206BU200BU200EU202CU202CU206BU200BU200BU206FU200CU202BU202DU202AU206BU202DU206FU206EU206DU200FU206DU202EU200BU202CU202BU206EU200BU206CU200CU206AU202AU200DU200EU206AU206DU200CU200CU200CU206EU202DU200CU202E_m4E0B3FAA7338B81236EDA2D5DFAAF6AE9DC25F50((&V_0), NULL);
		if (L_133)
		{
			goto IL_05db;
		}
	}
	{
		int32_t L_134 = ((int32_t)1606146903);
		G_B78_0 = L_134;
		G_B78_1 = L_134;
		goto IL_05e1;
	}

IL_05db:
	{
		int32_t L_135 = ((int32_t)1963570833);
		G_B78_0 = L_135;
		G_B78_1 = L_135;
	}

IL_05e1:
	{
		uint32_t L_136 = V_15;
		G_B2_0 = ((int32_t)(G_B78_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_136, ((int32_t)1168686810)))));
		goto IL_000d;
	}

IL_05f0:
	{
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		V_5 = ((int64_t)0);
		int64_t L_137 = p3;
		V_6 = L_137;
		uint64_t L_138 = V_5;
		uint64_t L_139 = V_6;
		if ((!(((uint64_t)L_138) < ((uint64_t)L_139))))
		{
			goto IL_060f;
		}
	}
	{
		int32_t L_140 = ((int32_t)283339477);
		G_B82_0 = L_140;
		G_B82_1 = L_140;
		goto IL_0615;
	}

IL_060f:
	{
		int32_t L_141 = ((int32_t)1286198783);
		G_B82_0 = L_141;
		G_B82_1 = L_141;
	}

IL_0615:
	{
		uint32_t L_142 = V_15;
		G_B2_0 = ((int32_t)(G_B82_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_142, ((int32_t)394788943)))));
		goto IL_000d;
	}

IL_0624:
	{
		U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* L_143 = __this->___U200FU206EU200FU206CU202BU206BU200CU200EU202EU206EU202BU206EU206BU206CU202BU200DU206BU200DU200EU202CU200BU200EU206BU200DU206CU206CU200EU202BU200BU202BU206EU206CU206BU202CU200CU206EU200EU202EU200CU200EU202E_7;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_144 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		uint64_t L_145 = V_5;
		uint8_t L_146 = V_10;
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* L_147 = __this->___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8;
		uint32_t L_148 = V_1;
		NullCheck(L_147);
		uint8_t L_149;
		L_149 = U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206FU200BU200BU202EU202EU202BU206BU206DU206FU200BU206AU202DU202EU206CU206AU200DU202CU206CU206EU200FU206CU200FU206DU206DU200FU206BU202DU206BU200BU200CU202AU206AU202EU206FU200FU202EU202DU206CU202CU206BU202E_m5B6E14A328259A386A6523F050EB9A3EB85386B2(L_147, L_148, NULL);
		NullCheck(L_143);
		uint8_t L_150;
		L_150 = U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U200CU206BU202AU202EU202CU200DU200DU206DU200FU206DU200FU206EU202CU200DU206BU206BU206AU200DU200EU202DU206AU202DU202DU200BU206AU206DU202EU206BU200EU202EU206FU200DU206CU200DU206DU206DU202BU206EU202CU200EU202E_m7B6761569B7BDD44767C066B2EA058438CB15C6F(L_143, L_144, ((int32_t)(uint32_t)L_145), L_146, L_149, NULL);
		V_9 = L_150;
		uint32_t L_151 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_151, ((int32_t)-910083830)))^((int32_t)871831883)));
		goto IL_000d;
	}

IL_065b:
	{
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* L_152 = __this->___U200EU200DU206EU200EU200EU202AU206DU206AU200FU202DU202AU202DU206CU202DU202AU200FU202DU206FU202DU206FU200BU202EU206EU202CU200DU206DU206BU206DU202EU200CU206CU206DU206CU202DU200BU202AU200CU200CU202CU200EU202E_8;
		uint8_t L_153 = V_9;
		NullCheck(L_152);
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U202AU200FU206BU206BU200FU206FU206AU206DU200DU202EU200DU202CU200EU202DU202CU206BU206DU202AU200BU200DU200CU202BU200EU206DU206AU206DU200CU202EU206AU206CU206FU202EU206CU202DU206CU206BU206BU200CU202BU202DU202E_m14389FEBAE859C343FDA84BC9D25FFF9C73800DA(L_152, L_153, NULL);
		U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200CU206BU202AU206CU206EU202AU200BU206CU206AU200FU200BU206AU202AU200EU206CU202AU206FU202AU206AU202CU206EU200CU200DU206AU200BU206AU202DU206CU202BU206AU206FU206FU200DU200EU200FU200BU206FU200DU206DU200CU202E_mB9C173B2A6358C099FA7693D9627FD281CC47935((&V_0), NULL);
		G_B2_0 = ((int32_t)-1989388307);
		goto IL_000d;
	}

IL_0679:
	{
		goto IL_0560;
	}
	// Dead block : IL_067e: ldc.i4 -1665725953

IL_0688:
	{
		uint32_t L_154 = V_1;
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_155 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		int32_t L_156 = V_14;
		NullCheck(L_155);
		uint32_t L_157;
		L_157 = U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_U200FU200BU202BU206EU206CU202AU206BU206FU206BU200DU200BU202AU202CU202CU200DU206FU202EU202EU202DU202BU206EU202AU206AU202BU206CU206EU206FU206AU200BU202AU202AU200CU202EU206BU200CU206CU206CU202BU200BU202EU202E_mCEF629385EF387C1B2F6C882D8CD559B000AFEC1(L_155, ((int32_t)il2cpp_codegen_subtract(L_156, 4)), NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_154, ((int32_t)((int32_t)L_157<<4))));
		G_B2_0 = ((int32_t)-1364334206);
		goto IL_000d;
	}

IL_06a6:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_158 = __this->___U206DU206DU200CU200FU200DU200CU202EU202EU200DU206FU202BU200EU202EU206FU206AU206CU202CU202DU202DU200BU200CU206AU202AU206AU206FU202EU206DU206FU200FU206EU206BU200EU206FU202AU200BU202CU206DU206DU202EU200EU202E_0;
		uint32_t L_159 = (&V_0)->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		uint32_t L_160 = V_8;
		NullCheck(L_158);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_161 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		uint32_t L_162;
		L_162 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(((L_158)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_159<<4)), (int32_t)L_160)))))), L_161, NULL);
		if (L_162)
		{
			goto IL_06d3;
		}
	}
	{
		int32_t L_163 = ((int32_t)27746391);
		G_B91_0 = L_163;
		G_B91_1 = L_163;
		goto IL_06d9;
	}

IL_06d3:
	{
		int32_t L_164 = ((int32_t)1719218283);
		G_B91_0 = L_164;
		G_B91_1 = L_164;
	}

IL_06d9:
	{
		uint32_t L_165 = V_15;
		G_B2_0 = ((int32_t)(G_B91_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_165, ((int32_t)842548438)))));
		goto IL_000d;
	}

IL_06e8:
	{
		uint32_t L_166 = V_4;
		V_12 = L_166;
		uint32_t L_167 = V_3;
		V_4 = L_167;
		G_B2_0 = ((int32_t)-860843654);
		goto IL_000d;
	}

IL_06f9:
	{
		uint32_t L_168 = V_3;
		V_12 = L_168;
		uint32_t L_169 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_169, ((int32_t)-900080318)))^((int32_t)-1188560428)));
		goto IL_000d;
	}

IL_070f:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_170 = __this->___U206DU206DU200CU200FU200DU200CU202EU202EU200DU206FU202BU200EU202EU206FU206AU206CU202CU202DU202DU200BU200CU206AU202AU206AU206FU202EU206DU206FU200FU206EU206BU200EU206FU202AU200BU202CU206DU206DU202EU200EU202E_0;
		uint32_t L_171 = (&V_0)->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		NullCheck(L_170);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_172 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		uint32_t L_173;
		L_173 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(((L_170)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)((int32_t)L_171<<4)))))), L_172, NULL);
		U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200CU206BU202AU206CU206EU202AU200BU206CU206AU200FU200BU206AU202AU200EU206CU202AU206FU202AU206AU202CU206EU200CU200DU206AU200BU206AU202DU206CU202BU206AU206FU206FU200DU200EU200FU200BU206FU200DU206DU200CU202E_mB9C173B2A6358C099FA7693D9627FD281CC47935((&V_0), NULL);
		uint32_t L_174 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_174, ((int32_t)1087256390)))^((int32_t)-1414269636)));
		goto IL_000d;
	}

IL_074a:
	{
		uint32_t L_175 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_175, ((int32_t)1404846788)))^((int32_t)1443458449)));
		goto IL_000d;
	}

IL_075d:
	{
		uint32_t L_176 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract(((int32_t)((uint32_t)L_176>>1)), 1));
		uint32_t L_177 = V_13;
		int32_t L_178 = V_14;
		V_1 = ((int32_t)(((int32_t)(2|((int32_t)((int32_t)L_177&1))))<<((int32_t)(L_178&((int32_t)31)))));
		uint32_t L_179 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_179, ((int32_t)-1252278527)))^((int32_t)556201105)));
		goto IL_000d;
	}

IL_0785:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_180 = __this->___U206DU202BU206CU200BU206DU202DU202AU202BU206BU206BU206EU202AU200FU200EU206DU206CU206FU200EU200CU202EU206BU202AU200EU200BU202DU206CU206EU206FU206CU202EU200FU200FU206DU202BU206CU206EU202DU202CU202CU200FU202E_5;
		uint32_t L_181 = (&V_0)->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		NullCheck(L_180);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_182 = __this->___U206CU206BU200BU200BU200EU200FU200CU200CU202BU202BU202CU200BU206AU202EU206BU206EU206FU200EU206EU202EU200CU200FU202DU202AU206BU200BU206BU202BU200BU206BU200FU206EU206FU200FU200FU206FU200BU206AU202CU200FU202E_11;
		uint32_t L_183;
		L_183 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(((L_180)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_181)))), L_182, NULL);
		if (L_183)
		{
			goto IL_07ad;
		}
	}
	{
		int32_t L_184 = ((int32_t)-196709694);
		G_B100_0 = L_184;
		G_B100_1 = L_184;
		goto IL_07b3;
	}

IL_07ad:
	{
		int32_t L_185 = ((int32_t)-2042121407);
		G_B100_0 = L_185;
		G_B100_1 = L_185;
	}

IL_07b3:
	{
		G_B2_0 = G_B100_1;
		goto IL_000d;
	}

IL_07b9:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8));
		U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200DU202DU202EU206FU200EU206EU202EU202CU200FU202AU202DU200FU202EU202CU200FU206FU206FU200BU206EU200DU206AU202CU200DU202CU202BU206BU202BU206AU202CU206CU206DU200BU200BU206DU206EU200FU206EU200BU206AU200FU202E_mDA620F9C21ED51C706C4B099513776616ED0625C((&V_0), NULL);
		uint32_t L_186 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_186, ((int32_t)519832412)))^((int32_t)-1892888166)));
		goto IL_000d;
	}

IL_07db:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U202AU206FU202AU206EU202CU202BU206EU202BU202AU206FU206EU206AU206CU206AU206CU200EU202BU202DU202CU206CU206AU202CU202DU200BU202AU206BU200FU206FU206AU200CU206AU206BU206DU200EU200DU202CU202DU200DU206CU202CU202E_m9141F12641670371AD9D2066CEE2481437FF2ED9 (U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_tFA06B49934CADDBFF0866FC960A4A4C0A771FE36* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = p0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int32_t)((int32_t)L_2%((int32_t)9)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = p0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int32_t)((int32_t)L_5/((int32_t)9)));
		int32_t L_6 = V_1;
		V_2 = ((int32_t)(L_6%5));
	}

IL_0012:
	{
		G_B2_0 = ((int32_t)-52114328);
	}

IL_0017:
	{
		int32_t L_7 = ((int32_t)(G_B2_0^((int32_t)-1653180677)));
		V_6 = L_7;
		switch (((int32_t)((uint32_t)(int32_t)L_7%(uint32_t)(int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_00d3;
			}
			case 1:
			{
				goto IL_007f;
			}
			case 2:
			{
				goto IL_00b0;
			}
			case 3:
			{
				goto IL_011b;
			}
			case 4:
			{
				goto IL_0105;
			}
			case 5:
			{
				goto IL_006c;
			}
			case 6:
			{
				goto IL_0012;
			}
			case 7:
			{
				goto IL_00ec;
			}
			case 8:
			{
				goto IL_0093;
			}
			case 9:
			{
				goto IL_0055;
			}
		}
	}
	{
		goto IL_011b;
	}

IL_0055:
	{
		int32_t L_8 = V_3;
		U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U206FU202EU202EU206BU200BU200DU200FU202EU202BU206FU202BU202EU200CU200DU200CU200BU200CU202BU206BU206CU206BU206AU200CU200EU206FU200CU206BU202AU202EU202EU200DU200BU206DU202CU202EU200CU202EU202EU200BU206CU202E_m2FA9B9E7ABB6A684C862084BCC7CB90BB9E29A90(__this, L_8, NULL);
		uint32_t L_9 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-624431020)))^((int32_t)-782115296)));
		goto IL_0017;
	}

IL_006c:
	{
		V_4 = 0;
		uint32_t L_10 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-704584133)))^((int32_t)-401323572)));
		goto IL_0017;
	}

IL_007f:
	{
		int32_t L_11 = V_1;
		V_3 = ((int32_t)(L_11/5));
		uint32_t L_12 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)1467876052)))^((int32_t)866415732)));
		goto IL_0017;
	}

IL_0093:
	{
		uint32_t L_13 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = p0;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(1, L_15));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, ((int32_t)((int32_t)L_17<<((int32_t)(((int32_t)il2cpp_codegen_multiply(L_18, 8))&((int32_t)31)))))));
		G_B2_0 = ((int32_t)-1717998489);
		goto IL_0017;
	}

IL_00b0:
	{
		uint32_t L_19 = V_4;
		U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U200DU200BU202DU206EU202EU206DU206DU202AU206AU200EU202BU202DU206DU200DU200FU200DU200BU206AU200EU206FU206BU200CU206AU202EU202EU200EU202AU202EU200FU202DU202AU206FU206DU200DU206DU200BU202AU202BU202DU200EU202E_m4AEF5C1473E6070472A8AC69481C7576351AE295(__this, L_19, NULL);
		int32_t L_20 = V_2;
		int32_t L_21 = V_0;
		U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U202DU200CU206FU202EU200DU206CU202DU206BU202EU202BU202CU202DU200CU200FU202BU200FU206CU200FU202CU206AU200EU202BU200CU200FU202CU200BU202CU206BU206CU200FU202BU206AU206DU202EU206AU206BU200EU206AU206DU206FU202E_m4598CA9E47181506F4AB85FC3E37552DAC96F36C(__this, L_20, L_21, NULL);
		uint32_t L_22 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)2097390846)))^((int32_t)288370244)));
		goto IL_0017;
	}

IL_00d3:
	{
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		uint32_t L_24 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)-457093845)))^((int32_t)130483002)));
		goto IL_0017;
	}

IL_00ec:
	{
		int32_t L_25 = V_5;
		if ((((int32_t)L_25) >= ((int32_t)4)))
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_26 = ((int32_t)-1114809221);
		G_B13_0 = L_26;
		G_B13_1 = L_26;
		goto IL_00ff;
	}

IL_00f9:
	{
		int32_t L_27 = ((int32_t)-989206889);
		G_B13_0 = L_27;
		G_B13_1 = L_27;
	}

IL_00ff:
	{
		G_B2_0 = G_B13_1;
		goto IL_0017;
	}

IL_0105:
	{
		V_5 = 0;
		uint32_t L_28 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_28, ((int32_t)-1209726847)))^((int32_t)1962795512)));
		goto IL_0017;
	}

IL_011b:
	{
		return;
	}
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200BU206CU200DU200EU206AU200BU200CU200FU202AU202BU200EU202BU200EU202AU206AU202EU202CU200DU200BU206EU202AU200CU202CU200EU206DU206EU202AU206BU206DU206CU206EU202CU200BU206AU206DU202EU206CU200BU200CU200CU202E_U206FU200EU206DU200DU200DU202AU200DU200CU202AU206CU206BU202DU206CU206CU202CU202CU202CU206BU200BU200FU202AU200BU200FU206FU200EU202BU206BU200EU200CU200CU202BU200EU202CU206DU200FU206CU206EU200BU202AU202BU202E_m97F7752B53C1F058489A46CA3F74F72D2008F3EB (uint32_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		uint32_t L_0 = p0;
		p0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 2));
		uint32_t L_1 = p0;
		if ((!(((uint32_t)L_1) < ((uint32_t)4))))
		{
			goto IL_003c;
		}
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)-1594566631);
	}

IL_000e:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-764847103)));
		V_0 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_0009;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_002b:
	{
		uint32_t L_3 = p0;
		return L_3;
	}
	// Dead block : IL_002d: ldloc.0

IL_003c:
	{
		return 3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E__ctor_mDA7191992C311C8F4F07C8E6045D05F2B580B14E (U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA V_0;
	memset((&V_0), 0, sizeof(V_0));
	U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint32_t V_2 = 0;
	{
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* L_0 = (U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D*)(U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D*)SZArrayNew(U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)16)));
		__this->___U200DU202BU206EU206FU200BU206CU202AU202CU206AU200DU200BU202AU200FU200BU206CU200FU200EU206AU202CU200DU206BU206FU200DU200DU206BU202EU200CU202DU206EU206BU206DU206EU206DU206BU202AU206EU206AU206DU202BU206DU202E_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200DU202BU206EU206FU200BU206CU202AU202CU206AU200DU200BU202AU200FU200BU206CU200FU200EU206AU202CU200DU206BU206FU200DU200DU206BU202EU200CU202DU206EU206BU206DU206EU206DU206BU202AU206EU206AU206DU202BU206DU202E_0), (void*)L_0);
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* L_1 = (U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D*)(U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D*)SZArrayNew(U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)16)));
		__this->___U206FU206FU202BU202EU202DU202BU200DU202CU200BU200DU202EU200CU202EU206EU206BU200EU200CU200FU206DU206AU200DU200CU206AU202DU200EU206DU202BU200DU202EU200DU206EU206BU200CU200EU202EU206EU200EU206EU200BU206EU202E_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206FU206FU202BU202EU202DU202BU200DU202CU200BU200DU202EU200CU202EU206EU206BU200EU200CU200FU206DU206AU200DU200CU206AU202DU200EU206DU202BU200DU202EU200DU206EU206BU200CU200EU202EU206EU200EU206EU200BU206EU202E_1), (void*)L_1);
		il2cpp_codegen_initobj((&V_0), sizeof(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA));
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA L_2 = V_0;
		__this->___U200FU206BU206EU206CU200EU200DU200BU202DU200BU202BU206AU200DU206DU206CU206CU206DU200FU206EU206FU206FU202EU202CU206EU206BU206BU200FU206AU206FU206EU202AU202EU202AU202DU200CU200CU206AU202DU202EU200DU206AU202E_2 = L_2;
		il2cpp_codegen_initobj((&V_1), sizeof(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA));
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA L_3 = V_1;
		__this->___U200DU206BU206CU206FU200CU200CU200FU202CU200CU202AU200BU206CU202CU206EU202DU200DU200BU200CU200EU206CU206FU206CU202EU202AU202CU206EU200FU206CU206DU206BU200EU202CU202EU202BU206CU202AU206EU202EU202BU206DU202E_3 = L_3;
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B L_4;
		memset((&L_4), 0, sizeof(L_4));
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E__ctor_m1926AA055D99164DD1C196A0F5B701DD4EE95592((&L_4), 8, /*hidden argument*/NULL);
		__this->___U206CU200FU206FU206DU200BU206BU206FU206CU202EU206BU206BU202EU202EU200DU206FU202DU206CU200FU206BU202DU206BU202AU206EU200EU206BU202BU202EU202DU202CU200EU206DU200DU206CU200FU200BU200BU200DU206CU200EU200DU202E_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U206CU200FU206FU206DU200BU206BU206FU206CU202EU206BU206BU202EU202EU200DU206FU202DU206CU200FU206BU202DU206BU202AU206EU200EU206BU202BU202EU202DU202CU200EU206DU200DU206CU200FU200BU200BU200DU206CU200EU200DU202E_4))->___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0), (void*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_U202BU206FU206AU206FU202BU202AU202CU202DU200CU202CU200CU206CU200DU206DU200FU200FU202DU200BU206CU206BU202AU200EU200EU200FU202CU202AU202DU200DU200BU200EU206AU202AU206BU206DU206CU202CU200FU200CU202DU202CU202E_mDDB069456A89ADAE29D51DF2AAA7842C441D423F (U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* __this, uint32_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		uint32_t L_0 = __this->___U206FU206FU202DU206BU200CU202BU206AU206EU200CU202EU200FU200CU200BU202DU200DU200CU206BU206FU202DU202EU206CU200FU200EU206DU202AU206BU202DU200BU200BU202AU206AU206BU206DU202EU206CU202DU202EU200DU202AU206FU202E_5;
		V_0 = L_0;
		goto IL_003e;
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)1326291144);
	}

IL_000e:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)784970926)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)7)))
		{
			case 0:
			{
				goto IL_0009;
			}
			case 1:
			{
				goto IL_009c;
			}
			case 2:
			{
				goto IL_003e;
			}
			case 3:
			{
				goto IL_00b5;
			}
			case 4:
			{
				goto IL_007a;
			}
			case 5:
			{
				goto IL_0053;
			}
			case 6:
			{
				goto IL_00cb;
			}
		}
	}
	{
		goto IL_00cb;
	}

IL_003e:
	{
		uint32_t L_2 = V_0;
		uint32_t L_3 = p0;
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_3))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_4 = ((int32_t)1872202332);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0050;
	}

IL_004a:
	{
		int32_t L_5 = ((int32_t)1326291144);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0050:
	{
		G_B2_0 = G_B7_1;
		goto IL_000e;
	}

IL_0053:
	{
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* L_6 = __this->___U206FU206FU202BU202EU202DU202BU200DU202CU200BU200DU202EU200CU202EU206EU206BU200EU200CU200FU206DU206AU200DU200CU206AU202DU200EU206DU202BU200DU202EU200DU206EU206BU200CU200EU202EU206EU200EU206EU200BU206EU202E_1;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B L_8;
		memset((&L_8), 0, sizeof(L_8));
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E__ctor_m1926AA055D99164DD1C196A0F5B701DD4EE95592((&L_8), 3, /*hidden argument*/NULL);
		*(U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B*)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_7)))) = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B*)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_7)))))->___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0), (void*)NULL);
		uint32_t L_9 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)1605588543)))^((int32_t)1554871580)));
		goto IL_000e;
	}

IL_007a:
	{
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* L_10 = __this->___U200DU202BU206EU206FU200BU206CU202AU202CU206AU200DU200BU202AU200FU200BU206CU200FU200EU206AU202CU200DU206BU206FU200DU200DU206BU202EU200CU202DU206EU206BU206DU206EU206DU206BU202AU206EU206AU206DU202BU206DU202E_0;
		uint32_t L_11 = V_0;
		NullCheck(L_10);
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B L_12;
		memset((&L_12), 0, sizeof(L_12));
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E__ctor_m1926AA055D99164DD1C196A0F5B701DD4EE95592((&L_12), 3, /*hidden argument*/NULL);
		*(U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B*)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_11)))) = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B*)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_11)))))->___U202DU200FU206FU202DU206BU200CU200EU202AU202BU206DU206FU202CU202BU206CU202AU206EU206CU200BU200CU200BU206CU200FU202BU202BU200FU206CU206EU206DU206CU206FU202BU206DU200CU206EU206EU200CU206FU200BU206BU206CU202E_0), (void*)NULL);
		G_B2_0 = ((int32_t)875353379);
		goto IL_000e;
	}

IL_009c:
	{
		uint32_t L_13 = p0;
		__this->___U206FU206FU202DU206BU200CU202BU206AU206EU200CU202EU200FU200CU200BU202DU200DU200CU206BU206FU202DU202EU206CU200FU200EU206DU202AU206BU202DU200BU200BU202AU206AU206BU206DU202EU206CU202DU202EU200DU202AU206FU202E_5 = L_13;
		uint32_t L_14 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-1865405532)))^((int32_t)-1229448234)));
		goto IL_000e;
	}

IL_00b5:
	{
		uint32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, 1));
		uint32_t L_16 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)-705287171)))^((int32_t)1059978856)));
		goto IL_000e;
	}

IL_00cb:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_U202EU206DU206DU202DU200BU202CU206BU200EU202AU200BU206AU206CU200EU200EU202DU206DU202BU206EU202BU206DU206BU202CU206FU200EU206BU206AU206AU202BU202EU200DU202CU202EU202EU200BU202EU206AU206DU202BU206BU200FU202E_m075275B910D7F14433A869E6263277F4155DF772 (U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* L_0 = (&__this->___U200FU206BU206EU206CU200EU200DU200BU202DU200BU202BU206AU200DU206DU206CU206CU206DU200FU206EU206FU206FU202EU202CU206EU206BU206BU200FU206AU206FU206EU202AU202EU202AU202DU200CU200CU206AU202DU202EU200DU206AU202E_2);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056(L_0, NULL);
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)-1937869968);
	}

IL_0010:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-922061418)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_00ab;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_000b;
			}
			case 3:
			{
				goto IL_005a;
			}
			case 4:
			{
				goto IL_006d;
			}
			case 5:
			{
				goto IL_008e;
			}
			case 6:
			{
				goto IL_0101;
			}
			case 7:
			{
				goto IL_00e5;
			}
			case 8:
			{
				goto IL_00c8;
			}
		}
	}
	{
		goto IL_0101;
	}

IL_0049:
	{
		V_0 = 0;
		uint32_t L_2 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)522201176)))^((int32_t)1177217470)));
		goto IL_0010;
	}

IL_005a:
	{
		uint32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, 1));
		uint32_t L_4 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-404846356)))^((int32_t)-1221401926)));
		goto IL_0010;
	}

IL_006d:
	{
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* L_5 = __this->___U206FU206FU202BU202EU202DU202BU200DU202CU200BU200DU202EU200CU202EU206EU206BU200EU200CU200FU206DU206AU200DU200CU206AU202DU200EU206DU202BU200DU202EU200DU206EU206BU200CU200EU202EU206EU200EU206EU200BU206EU202E_1;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U200FU202DU200BU206BU200EU202AU206EU206CU202BU206BU206CU202DU200BU202CU200BU206CU200FU206DU202EU200FU200DU206FU206BU202CU206BU200BU206CU202AU200CU200FU206BU206CU206EU202CU202BU200BU200BU206AU202AU200CU202E_m76F9A027DF3FE429F7187112B6C5FF37CED880CE(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_6)))), NULL);
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)524391610)))^((int32_t)-685590291)));
		goto IL_0010;
	}

IL_008e:
	{
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* L_8 = (&__this->___U206CU200FU206FU206DU200BU206BU206FU206CU202EU206BU206BU202EU202EU200DU206FU202DU206CU200FU206BU202DU206BU202AU206EU200EU206BU202BU202EU202DU202CU200EU206DU200DU206CU200FU200BU200BU200DU206CU200EU200DU202E_4);
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U200FU202DU200BU206BU200EU202AU206EU206CU202BU206BU206CU202DU200BU202CU200BU206CU200FU206DU202EU200FU200DU206FU206BU202CU206BU200BU206CU202AU200CU200FU206BU206CU206EU202CU202BU200BU200BU206AU202AU200CU202E_m76F9A027DF3FE429F7187112B6C5FF37CED880CE(L_8, NULL);
		uint32_t L_9 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)2008502196)))^((int32_t)-1097890716)));
		goto IL_0010;
	}

IL_00ab:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* L_10 = (&__this->___U200DU206BU206CU206FU200CU200CU200FU202CU200CU202AU200BU206CU202CU206EU202DU200DU200BU200CU200EU206CU206FU206CU202EU202AU202CU206EU200FU206CU206DU206BU200EU202CU202EU202BU206CU202AU206EU202EU202BU206DU202E_3);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056(L_10, NULL);
		uint32_t L_11 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)-147846462)))^((int32_t)2047445274)));
		goto IL_0010;
	}

IL_00c8:
	{
		uint32_t L_12 = V_0;
		uint32_t L_13 = __this->___U206FU206FU202DU206BU200CU202BU206AU206EU200CU202EU200FU200CU200BU202DU200DU200CU206BU206FU202DU202EU206CU200FU200EU206DU202AU206BU202DU200BU200BU202AU206AU206BU206DU202EU206CU202DU202EU200DU202AU206FU202E_5;
		if ((!(((uint32_t)L_12) < ((uint32_t)L_13))))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_14 = ((int32_t)-1472911097);
		G_B12_0 = L_14;
		G_B12_1 = L_14;
		goto IL_00df;
	}

IL_00d9:
	{
		int32_t L_15 = ((int32_t)-220647652);
		G_B12_0 = L_15;
		G_B12_1 = L_15;
	}

IL_00df:
	{
		G_B2_0 = G_B12_1;
		goto IL_0010;
	}

IL_00e5:
	{
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* L_16 = __this->___U200DU202BU206EU206FU200BU206CU202AU202CU206AU200DU200BU202AU200FU200BU206CU200FU200EU206AU202CU200DU206BU206FU200DU200DU206BU202EU200CU202DU206EU206BU206DU206EU206DU206BU202AU206EU206AU206DU202BU206DU202E_0;
		uint32_t L_17 = V_0;
		NullCheck(L_16);
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U200FU202DU200BU206BU200EU202AU206EU206CU202BU206BU206CU202DU200BU202CU200BU206CU200FU206DU202EU200FU200DU206FU206BU202CU206BU200BU206CU202AU200CU200FU206BU206CU206EU202CU202BU200BU200BU206AU202AU200CU202E_m76F9A027DF3FE429F7187112B6C5FF37CED880CE(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_17)))), NULL);
		G_B2_0 = ((int32_t)-1085831588);
		goto IL_0010;
	}

IL_0101:
	{
		return;
	}
}
// System.UInt32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_U206FU200FU206AU206AU202CU206EU200BU202CU202EU200CU202AU200DU206DU202DU202EU206FU202DU202DU202AU200BU202EU202DU206AU206CU206DU206BU202CU202CU202EU200EU206FU206AU200BU202EU202DU202AU200EU206BU206BU200DU202E_mFC14D0B536278223DCC452F61DE4419CEA55A02F (U206AU200DU202AU200EU206FU202BU202DU202BU206EU200EU202DU202BU206AU206CU206DU202CU206BU202EU206BU202CU202DU206BU202EU200CU206DU202DU200EU206EU206AU200EU206AU206CU206AU200CU202CU202CU200EU206FU200BU200FU202E_t9E6006D39588A082D8E67EBFAD0A42B63CA2F13A* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, uint32_t p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* L_0 = (&__this->___U200FU206BU206EU206CU200EU200DU200BU202DU200BU202BU206AU200DU206DU206CU206CU206DU200FU206EU206FU206FU202EU202CU206EU206BU206BU200FU206AU206FU206EU202AU202EU202AU202DU200CU200CU206AU202DU202EU200DU206AU202E_2);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_1 = p0;
		uint32_t L_2;
		L_2 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_00d3;
		}
	}

IL_0011:
	{
		G_B2_0 = ((int32_t)-1585873997);
	}

IL_0016:
	{
		int32_t L_3 = ((int32_t)(G_B2_0^((int32_t)-651529508)));
		V_1 = L_3;
		switch (((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_008d;
			}
			case 2:
			{
				goto IL_00c5;
			}
			case 3:
			{
				goto IL_004a;
			}
			case 4:
			{
				goto IL_00d3;
			}
			case 5:
			{
				goto IL_00f7;
			}
			case 6:
			{
				goto IL_0011;
			}
			case 7:
			{
				goto IL_009f;
			}
		}
	}
	{
		goto IL_00f7;
	}

IL_004a:
	{
		uint32_t L_4 = V_0;
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* L_5 = __this->___U206FU206FU202BU202EU202DU202BU200DU202CU200BU200DU202EU200CU202EU206EU206BU200EU200CU200FU206DU206AU200DU200CU206AU202DU200EU206DU202BU200DU202EU200DU206EU206BU200CU200EU202EU206EU200EU206EU200BU206EU202E_1;
		uint32_t L_6 = p1;
		NullCheck(L_5);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_7 = p0;
		uint32_t L_8;
		L_8 = U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206EU202BU202CU202DU202DU200CU206CU200CU200CU202AU202AU200BU206AU206DU202BU206CU202DU200CU200BU202EU206BU200EU202CU202EU202CU202BU200EU206BU200FU202BU200CU206DU200FU200EU206BU206AU200FU206BU202EU206AU202E_mECDBD5D94CF50EEA7C36024C4EE8387FD7D0E14B(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_6)))), L_7, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_8));
		uint32_t L_9 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-1406806001)))^((int32_t)-1170106768)));
		goto IL_0016;
	}

IL_006f:
	{
		uint32_t L_10 = V_0;
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_tD45A2792C633D397E5988C0D4D59848ABBBBF92B* L_11 = (&__this->___U206CU200FU206FU206DU200BU206BU206FU206CU202EU206BU206BU202EU202EU200DU206FU202DU206CU200FU206BU202DU206BU202AU206EU200EU206BU202BU202EU202DU202CU200EU206DU200DU206CU200FU200BU200BU200DU206CU200EU200DU202E_4);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_12 = p0;
		uint32_t L_13;
		L_13 = U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206EU202BU202CU202DU202DU200CU206CU200CU200CU202AU202AU200BU206AU206DU202BU206CU202DU200CU200BU202EU206BU200EU202CU202EU202CU202BU200EU206BU200FU202BU200CU206DU200FU200EU206BU206AU200FU206BU202EU206AU202E_mECDBD5D94CF50EEA7C36024C4EE8387FD7D0E14B(L_11, L_12, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_13));
		uint32_t L_14 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-1196852868)))^((int32_t)1762613265)));
		goto IL_0016;
	}

IL_008d:
	{
		uint32_t L_15 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)-1965360108)))^((int32_t)-351409691)));
		goto IL_0016;
	}

IL_009f:
	{
		U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202EU5BU5D_tFA623B54898F16E9950594F4AA1CFFF0E6E0767D* L_16 = __this->___U200DU202BU206EU206FU200BU206CU202AU202CU206AU200DU200BU202AU200FU200BU206CU200FU200EU206AU202CU200DU206BU206FU200DU200DU206BU202EU200CU202DU206EU206BU206DU206EU206DU206BU202AU206EU206AU206DU202BU206DU202E_0;
		uint32_t L_17 = p1;
		NullCheck(L_16);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_18 = p0;
		uint32_t L_19;
		L_19 = U200CU206AU200CU206BU202EU206EU200CU202BU202EU206DU200BU202BU202DU200CU202EU202BU200FU200FU206FU200BU206BU206FU206AU200DU200FU202EU200EU206EU206EU202BU206BU202DU202EU206BU206BU200BU206FU202CU200FU206FU202E_U206EU202BU202CU202DU202DU200CU206CU200CU200CU202AU202AU200BU206AU206DU202BU206CU202DU200CU200BU202EU206BU200EU202CU202EU202CU202BU200EU206BU200FU202BU200CU206DU200FU200EU206BU206AU200FU206BU202EU206AU202E_mECDBD5D94CF50EEA7C36024C4EE8387FD7D0E14B(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_17)))), L_18, NULL);
		return L_19;
	}
	// Dead block : IL_00b3: ldloc.1

IL_00c5:
	{
		uint32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, 8));
		G_B2_0 = ((int32_t)-838347060);
		goto IL_0016;
	}

IL_00d3:
	{
		V_0 = 8;
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA* L_21 = (&__this->___U200DU206BU206CU206FU200CU200CU200FU202CU200CU202AU200BU206CU202CU206EU202DU200DU200BU200CU200EU206CU206FU206CU202EU202AU202CU206EU200FU206CU206DU206BU200EU202CU202EU202BU206CU202AU206EU202EU202BU206DU202E_3);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_22 = p0;
		uint32_t L_23;
		L_23 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_24 = ((int32_t)-1396431162);
		G_B13_0 = L_24;
		G_B13_1 = L_24;
		goto IL_00f1;
	}

IL_00eb:
	{
		int32_t L_25 = ((int32_t)-1375259977);
		G_B13_0 = L_25;
		G_B13_1 = L_25;
	}

IL_00f1:
	{
		G_B2_0 = G_B13_1;
		goto IL_0016;
	}

IL_00f7:
	{
		uint32_t L_26 = V_0;
		return L_26;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E__ctor_m6D56AACC04ACD130641956EF3F3AEC01B1292090 (U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U200FU202AU206CU200DU206EU202DU200FU206BU200FU206CU200DU206BU202AU206CU200EU206AU200EU202DU200BU206BU206EU206DU200DU202BU202DU202BU202EU202EU206FU200BU206DU206EU200DU202DU202BU202AU206CU202BU206AU202BU202E_m40FDD473421631CCE94F32ECB380A9E9A606DB00 (U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	{
		U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E* L_0 = __this->___U206BU200BU202CU206AU206DU200BU200CU200FU202DU202DU202CU202EU202BU200CU206CU206DU206EU202AU200DU206BU206FU206FU200EU202DU206CU202CU206DU200EU200FU206FU206EU206CU206DU200DU200DU206BU206CU206CU206DU200FU202E_0;
		if (!L_0)
		{
			goto IL_005a;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)949168090);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1479987461)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)14))))
		{
			case 0:
			{
				goto IL_016e;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_019a;
			}
			case 3:
			{
				goto IL_014e;
			}
			case 4:
			{
				goto IL_0089;
			}
			case 5:
			{
				goto IL_0008;
			}
			case 6:
			{
				goto IL_0068;
			}
			case 7:
			{
				goto IL_00a1;
			}
			case 8:
			{
				goto IL_010a;
			}
			case 9:
			{
				goto IL_00c0;
			}
			case 10:
			{
				goto IL_005a;
			}
			case 11:
			{
				goto IL_0120;
			}
			case 12:
			{
				goto IL_0132;
			}
			case 13:
			{
				goto IL_00e5;
			}
		}
	}
	{
		goto IL_019a;
	}

IL_005a:
	{
		int32_t L_2 = p0;
		__this->___U200BU200DU206AU206EU206FU200BU202EU202EU200BU206AU200DU202EU202BU200BU202AU200EU202AU202BU200DU202DU206BU200BU206FU206DU206CU202AU206CU200DU202BU206DU200BU206CU202AU202EU200CU202EU200DU200EU206AU200EU202E_1 = L_2;
		G_B2_0 = ((int32_t)983921626);
		goto IL_000d;
	}

IL_0068:
	{
		return;
	}
	// Dead block : IL_0069: ldloc.2

IL_0078:
	{
		V_1 = 0;
		uint32_t L_3 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)1237690854)))^((int32_t)870190220)));
		goto IL_000d;
	}

IL_0089:
	{
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_4) < ((uint32_t)L_5))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_6 = ((int32_t)1769601055);
		G_B11_0 = L_6;
		G_B11_1 = L_6;
		goto IL_009b;
	}

IL_0095:
	{
		int32_t L_7 = ((int32_t)1308314469);
		G_B11_0 = L_7;
		G_B11_1 = L_7;
	}

IL_009b:
	{
		G_B2_0 = G_B11_1;
		goto IL_000d;
	}

IL_00a1:
	{
		uint32_t L_8 = V_0;
		U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E* L_9 = (U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E*)(U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E*)SZArrayNew(U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)L_8));
		__this->___U206BU200BU202CU206AU206DU200BU200CU200FU202DU202DU202CU202EU202BU200CU206CU206DU206EU202AU200DU206BU206FU206FU200EU202DU206CU202CU206DU200EU200FU206FU206EU206CU206DU200DU200DU206BU206CU206CU206DU200FU202E_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206BU200BU202CU206AU206DU200BU200CU200FU202DU202DU202CU202EU202BU200CU206CU206DU206EU202AU200DU206BU206FU206FU200EU202DU206CU202CU206DU200EU200FU206FU206EU206CU206DU200DU200DU206BU206CU206CU206DU200FU202E_0), (void*)L_9);
		uint32_t L_10 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-1635138688)))^((int32_t)2054403188)));
		goto IL_000d;
	}

IL_00c0:
	{
		int32_t L_11 = __this->___U200BU206DU202BU200DU206FU206DU202BU202EU200EU202CU200FU206EU206EU206AU202AU202DU200FU200BU200DU202AU202BU200CU202AU200DU202DU206BU202BU202CU200DU202DU200FU202DU206EU200FU206FU202BU206AU200FU206AU206AU202E_2;
		int32_t L_12 = p1;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_13 = ((int32_t)1106063204);
		G_B16_0 = L_13;
		G_B16_1 = L_13;
		goto IL_00d7;
	}

IL_00d1:
	{
		int32_t L_14 = ((int32_t)2106141415);
		G_B16_0 = L_14;
		G_B16_1 = L_14;
	}

IL_00d7:
	{
		uint32_t L_15 = V_2;
		G_B2_0 = ((int32_t)(G_B16_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)591742281)))));
		goto IL_000d;
	}

IL_00e5:
	{
		int32_t L_16 = __this->___U200BU200DU206AU206EU206FU200BU202EU202EU200BU206AU200DU202EU202BU200BU202AU200EU202AU202BU200DU202DU206BU200BU206FU206DU206CU202AU206CU200DU202BU206DU200BU206CU202AU202EU200CU202EU200DU200EU206AU200EU202E_1;
		int32_t L_17 = p0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_18 = ((int32_t)-391035886);
		G_B20_0 = L_18;
		G_B20_1 = L_18;
		goto IL_00fc;
	}

IL_00f6:
	{
		int32_t L_19 = ((int32_t)-372973274);
		G_B20_0 = L_19;
		G_B20_1 = L_19;
	}

IL_00fc:
	{
		uint32_t L_20 = V_2;
		G_B2_0 = ((int32_t)(G_B20_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)-937035295)))));
		goto IL_000d;
	}

IL_010a:
	{
		uint32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, 1));
		uint32_t L_22 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)-1518542947)))^((int32_t)1717442779)));
		goto IL_000d;
	}

IL_0120:
	{
		uint32_t L_23 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)-1737739630)))^((int32_t)-117202153)));
		goto IL_000d;
	}

IL_0132:
	{
		U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E* L_24 = __this->___U206BU200BU202CU206AU206DU200BU200CU200FU202DU202DU202CU202EU202BU200CU206CU206DU206EU202AU200DU206BU206FU206FU200EU202DU206CU202CU206DU200EU200FU206FU206EU206CU206DU200DU200DU206BU206CU206CU206DU200FU202E_0;
		uint32_t L_25 = V_1;
		NullCheck(L_24);
		U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200BU202CU202BU206DU202EU200DU200FU206CU200EU202DU202AU200BU200EU200DU202CU200DU200CU202CU206EU206EU206BU200FU206EU206BU206CU200FU202BU200BU200DU200CU202DU202AU206FU202AU202AU206CU206CU200EU202BU202EU202E_m09338BC4ED956EC0081CBDD47EAD5B4C0FAB3E6C(((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_25)))), NULL);
		G_B2_0 = ((int32_t)1206183599);
		goto IL_000d;
	}

IL_014e:
	{
		int32_t L_26 = p0;
		__this->___U200EU200FU202AU206BU200EU200DU202BU200DU206AU200DU200BU200BU200FU202CU206DU206EU206CU200BU206AU200EU200FU200DU206BU200FU202BU200DU202CU202EU206FU206DU206DU200EU202BU202DU200CU202EU206DU200DU202BU202E_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_26&((int32_t)31))))), 1));
		uint32_t L_27 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)227649193)))^((int32_t)821389050)));
		goto IL_000d;
	}

IL_016e:
	{
		int32_t L_28 = p1;
		__this->___U200BU206DU202BU200DU206FU206DU202BU202EU200EU202CU200FU206EU206EU206AU202AU202DU200FU200BU200DU202AU202BU200CU202AU200DU202DU206BU202BU202CU200DU202DU200FU202DU206EU200FU206FU202BU206AU200FU206AU206AU202E_2 = L_28;
		int32_t L_29 = __this->___U200BU206DU202BU200DU206FU206DU202BU202EU200EU202CU200FU206EU206EU206AU202AU202DU200FU200BU200DU202AU202BU200CU202AU200DU202DU206BU202BU202CU200DU202DU200FU202DU206EU200FU206FU202BU206AU200FU206AU206AU202E_2;
		int32_t L_30 = __this->___U200BU200DU206AU206EU206FU200BU202EU202EU200BU206AU200DU202EU202BU200BU202AU200EU202AU202BU200DU202DU206BU200BU206FU206DU206CU202AU206CU200DU202BU206DU200BU206CU202AU202EU200CU202EU200DU200EU206AU200EU202E_1;
		V_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_29, L_30))&((int32_t)31)))));
		uint32_t L_31 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)1925889339)))^((int32_t)1888222526)));
		goto IL_000d;
	}

IL_019a:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U202AU206AU200CU206FU206CU200FU202CU200EU200CU200FU206FU202BU202DU206FU200DU206BU206AU200CU206EU202BU202BU206BU200CU206AU200DU200DU202DU200FU200BU206BU206EU202DU206DU202CU200DU202EU202DU200EU202EU202AU202E_mB6EBF7D623695E477227729975608B7BFA18056C (U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		int32_t L_0 = __this->___U200BU206DU202BU200DU206FU206DU202BU202EU200EU202CU200FU206EU206EU206AU202AU202DU200FU200BU200DU202AU202BU200CU202AU200DU202DU206BU202BU202CU200DU202DU200FU202DU206EU200FU206FU202BU206AU200FU206AU206AU202E_2;
		int32_t L_1 = __this->___U200BU200DU206AU206EU206FU200BU202EU202EU200BU206AU200DU202EU202BU200BU202AU200EU202AU202BU200DU202DU206BU200BU206FU206DU206CU202AU206CU200DU202BU206DU200BU206CU202AU202EU200CU202EU200DU200EU206AU200EU202E_1;
		V_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_0, L_1))&((int32_t)31)))));
	}

IL_0013:
	{
		G_B2_0 = ((int32_t)262843812);
	}

IL_0018:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)117206448)));
		V_2 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_003d;
			}
			case 3:
			{
				goto IL_0080;
			}
			case 4:
			{
				goto IL_0063;
			}
		}
	}
	{
		goto IL_0080;
	}

IL_003d:
	{
		V_1 = 0;
		uint32_t L_3 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)888595474)))^((int32_t)-1306767999)));
		goto IL_0018;
	}

IL_004e:
	{
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_4) < ((uint32_t)L_5))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_6 = ((int32_t)1472324059);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
		goto IL_0060;
	}

IL_005a:
	{
		int32_t L_7 = ((int32_t)150194706);
		G_B8_0 = L_7;
		G_B8_1 = L_7;
	}

IL_0060:
	{
		G_B2_0 = G_B8_1;
		goto IL_0018;
	}

IL_0063:
	{
		U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E* L_8 = __this->___U206BU200BU202CU206AU206DU200BU200CU200FU202DU202DU202CU202EU202BU200CU206CU206DU206EU202AU200DU206BU206FU206FU200EU202DU206CU202CU206DU200EU200FU206FU206EU206CU206DU200DU200DU206BU206CU206CU206DU200FU202E_0;
		uint32_t L_9 = V_1;
		NullCheck(L_8);
		U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200EU200CU202BU202BU206CU206EU200CU206EU206CU206BU206FU206AU202BU206CU206BU206FU206AU202CU200DU206FU200FU202AU200EU206DU206FU206CU202BU200DU202EU206EU200DU200FU206EU200BU200BU200EU200DU206DU200DU206BU202E_m35E4179957FA3C6E18E2ABB42DD58661F1F5164C(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_9)))), NULL);
		uint32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, 1));
		G_B2_0 = ((int32_t)1014963433);
		goto IL_0018;
	}

IL_0080:
	{
		return;
	}
}
// System.UInt32 <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U202CU202DU200DU206AU200CU200DU200DU202CU200FU206DU206DU206FU202EU200EU202BU206AU206DU200BU202CU200BU202BU206AU200DU202DU200EU202AU206DU202BU206BU202CU206AU200DU200BU200BU200FU200EU206FU206BU206EU202DU202E_mBB8D3507524B609AB04542CADBC914EC0D6A1055 (U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* __this, uint32_t p0, uint8_t p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = p0;
		uint32_t L_1 = __this->___U200EU200FU202AU206BU200EU200DU202BU200DU206AU200DU200BU200BU200FU202CU206DU206EU206CU200BU206AU200EU200FU200DU206BU200FU202BU200DU202CU202EU206FU206DU206DU200EU202BU202DU200CU202EU206DU200DU202BU202E_3;
		int32_t L_2 = __this->___U200BU206DU202BU200DU206FU206DU202BU202EU200EU202CU200FU206EU206EU206AU202AU202DU200FU200BU200DU202AU202BU200CU202AU200DU202DU206BU202BU202CU200DU202DU200FU202DU206EU200FU206FU202BU206AU200FU206AU206AU202E_2;
		uint8_t L_3 = p1;
		int32_t L_4 = __this->___U200BU206DU202BU200DU206FU206DU202BU202EU200EU202CU200FU206EU206EU206AU202AU202DU200FU200BU200DU202AU202BU200CU202AU200DU202DU206BU202BU202CU200DU202DU200FU202DU206EU200FU206FU202BU206AU200FU206AU206AU202E_2;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))<<((int32_t)(L_2&((int32_t)31))))), ((int32_t)((int32_t)L_3>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_4))&((int32_t)31)))))));
	}
}
// System.Byte <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U206AU206EU202AU202AU206FU200BU206FU202CU202DU206FU200DU202BU200EU206FU202CU206EU206FU202EU206FU202BU206AU200CU200CU202DU200CU206CU200FU202BU200DU202BU206FU206EU206BU200FU200BU202EU202EU202EU206FU200DU202E_m5CA83382E0A42282694FA67B2A8C27653F7A6861 (U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, uint32_t p1, uint8_t p2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E* L_0 = __this->___U206BU200BU202CU206AU206DU200BU200CU200FU202DU202DU202CU202EU202BU200CU206CU206DU206EU202AU200DU206BU206FU206FU200EU202DU206CU202CU206DU200EU200FU206FU206EU206CU206DU200DU200DU206BU206CU206CU206DU200FU202E_0;
		uint32_t L_1 = p1;
		uint8_t L_2 = p2;
		uint32_t L_3;
		L_3 = U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U202CU202DU200DU206AU200CU200DU200DU202CU200FU206DU206DU206FU202EU200EU202BU206AU206DU200BU202CU200BU202BU206AU200DU202DU200EU202AU206DU202BU206BU202CU206AU200DU200BU200BU200FU200EU206FU206BU206EU202DU202E_mBB8D3507524B609AB04542CADBC914EC0D6A1055(__this, L_1, L_2, NULL);
		NullCheck(L_0);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_4 = p0;
		uint8_t L_5;
		L_5 = U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200FU202DU202EU202BU200DU206FU206AU200CU202BU200BU200FU200EU200BU206FU206BU200CU202AU200EU200CU202BU202DU200DU202BU200EU202DU202BU206AU200BU206CU206BU200BU202BU202CU206AU200EU206DU206EU206BU202AU206DU202E_mBE2CEA8798A97286D5A56933B5990BEA2B45EE71(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_3)))), L_4, NULL);
		return L_5;
	}
}
// System.Byte <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U200CU206BU202AU202EU202CU200DU200DU206DU200FU206DU200FU206EU202CU200DU206BU206BU206AU200DU200EU202DU206AU202DU202DU200BU206AU206DU202EU206BU200EU202EU206FU200DU206CU200DU206DU206DU202BU206EU202CU200EU202E_m7B6761569B7BDD44767C066B2EA058438CB15C6F (U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_tD3D648EF1201A167310BB06B9241393BA31ECED7* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, uint32_t p1, uint8_t p2, uint8_t p3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202EU5BU5D_t6755E168D89E2C79AC4029A141A56D5E250A713E* L_0 = __this->___U206BU200BU202CU206AU206DU200BU200CU200FU202DU202DU202CU202EU202BU200CU206CU206DU206EU202AU200DU206BU206FU206FU200EU202DU206CU202CU206DU200EU200FU206FU206EU206CU206DU200DU200DU206BU206CU206CU206DU200FU202E_0;
		uint32_t L_1 = p1;
		uint8_t L_2 = p2;
		uint32_t L_3;
		L_3 = U206DU202DU200DU206CU206DU206EU202EU200EU206EU202BU200DU202DU200FU200BU206FU202AU202AU206AU202DU200FU202DU206CU206BU200CU200BU200FU202BU206DU202EU202EU202EU202EU202EU200CU202BU200DU206BU200FU200DU202E_U202CU202DU200DU206AU200CU200DU200DU202CU200FU206DU206DU206FU202EU200EU202BU206AU206DU200BU202CU200BU202BU206AU200DU202DU200EU202AU206DU202BU206BU202CU206AU200DU200BU200BU200FU200EU206FU206BU206EU202DU202E_mBB8D3507524B609AB04542CADBC914EC0D6A1055(__this, L_1, L_2, NULL);
		NullCheck(L_0);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_4 = p0;
		uint8_t L_5 = p3;
		uint8_t L_6;
		L_6 = U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U206AU206FU202EU206DU200FU206AU202EU200CU206BU206BU200DU200DU206BU202BU206EU206FU206CU202CU206DU206BU200CU206FU206BU206CU202AU202EU206CU206FU206DU200BU200EU202DU202BU206CU200CU206BU200CU206FU202EU206BU202E_m4836884F90DF30A121AA21FF0FEAE78DDD9565D0(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_3)))), L_4, L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????
IL2CPP_EXTERN_C void U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshal_pinvoke(const U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF& unmarshaled, U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledU206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_Length = (unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0)->max_length;
		marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 = il2cpp_codegen_marshal_allocate_array<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA>(_unmarshaledU206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledU206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_Length); i++)
		{
			(marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0)[i] = (unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 = NULL;
	}
}
IL2CPP_EXTERN_C void U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshal_pinvoke_back(const U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshaled_pinvoke& marshaled, U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 != NULL)
	{
		if (unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 == NULL)
		{
			unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 = reinterpret_cast<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*>((U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0), (void*)reinterpret_cast<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*>((U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????
IL2CPP_EXTERN_C void U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshal_pinvoke_cleanup(U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshaled_pinvoke& marshaled)
{
	if (marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0);
		marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 = NULL;
	}
}
// Conversion methods for marshalling of: <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????
IL2CPP_EXTERN_C void U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshal_com(const U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF& unmarshaled, U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshaled_com& marshaled)
{
	if (unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledU206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_Length = (unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0)->max_length;
		marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 = il2cpp_codegen_marshal_allocate_array<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_t0BF79845A45296EEDD0E3C7F31C105925E0AA0FA>(_unmarshaledU206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledU206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_Length); i++)
		{
			(marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0)[i] = (unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 = NULL;
	}
}
IL2CPP_EXTERN_C void U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshal_com_back(const U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshaled_com& marshaled, U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 != NULL)
	{
		if (unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 == NULL)
		{
			unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 = reinterpret_cast<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*>((U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0), (void*)reinterpret_cast<U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*>((U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????
IL2CPP_EXTERN_C void U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshal_com_cleanup(U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF_marshaled_com& marshaled)
{
	if (marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0);
		marshaled.___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 = NULL;
	}
}
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200BU202CU202BU206DU202EU200DU200FU206CU200EU202DU202AU200BU200EU200DU202CU200DU200CU202CU206EU206EU206BU200FU206EU206BU206CU200FU202BU200BU200DU200CU202DU202AU206FU202AU202AU206CU206CU200EU202BU202EU202E_m09338BC4ED956EC0081CBDD47EAD5B4C0FAB3E6C (U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_0 = (U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A*)SZArrayNew(U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)768));
		__this->___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200BU202CU202BU206DU202EU200DU200FU206CU200EU202DU202AU200BU200EU200DU202CU200DU200CU202CU206EU206EU206BU200FU206EU206BU206CU200FU202BU200BU200DU200CU202DU202AU206FU202AU202AU206CU206CU200EU202BU202EU202E_m09338BC4ED956EC0081CBDD47EAD5B4C0FAB3E6C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF*>(__this + _offset);
	U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200BU202CU202BU206DU202EU200DU200FU206CU200EU202DU202AU200BU200EU200DU202CU200DU200CU202CU206EU206EU206BU200FU206EU206BU206CU200FU202BU200BU200DU200CU202DU202AU206FU202AU202AU206CU206CU200EU202BU202EU202E_m09338BC4ED956EC0081CBDD47EAD5B4C0FAB3E6C(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200EU200CU202BU202BU206CU206EU200CU206EU206CU206BU206FU206AU202BU206CU206BU206FU206AU202CU200DU206FU200FU202AU200EU206DU206FU206CU202BU200DU202EU206EU200DU200FU206EU200BU200BU200EU200DU206DU200DU206BU202E_m35E4179957FA3C6E18E2ABB42DD58661F1F5164C (U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		V_0 = 0;
		goto IL_0059;
	}

IL_0004:
	{
		G_B2_0 = ((int32_t)912581262);
	}

IL_0009:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)1179063698)));
		V_1 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0004;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_0072;
			}
			case 4:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0072;
	}

IL_002e:
	{
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_1 = __this->___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206DU202AU200BU206CU206CU206BU206DU200EU206FU200DU202BU202DU206DU206FU202CU206CU206DU200BU206FU200EU206DU202EU202BU206DU206EU200CU200CU202BU206AU200FU206EU202CU206FU206FU206FU206FU200BU206BU200DU200CU202E_m176B1B982320975F08C9A0735B701F669312D056(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), NULL);
		G_B2_0 = ((int32_t)1984512684);
		goto IL_0009;
	}

IL_0046:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		uint32_t L_4 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-1524876740)))^((int32_t)125202940)));
		goto IL_0009;
	}

IL_0059:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)768))))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_6 = ((int32_t)912581262);
		G_B9_0 = L_6;
		G_B9_1 = L_6;
		goto IL_006f;
	}

IL_0069:
	{
		int32_t L_7 = ((int32_t)623019414);
		G_B9_0 = L_7;
		G_B9_1 = L_7;
	}

IL_006f:
	{
		G_B2_0 = G_B9_1;
		goto IL_0009;
	}

IL_0072:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200EU200CU202BU202BU206CU206EU200CU206EU206CU206BU206FU206AU202BU206CU206BU206FU206AU202CU200DU206FU200FU202AU200EU206DU206FU206CU202BU200DU202EU206EU200DU200FU206EU200BU200BU200EU200DU206DU200DU206BU202E_m35E4179957FA3C6E18E2ABB42DD58661F1F5164C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF*>(__this + _offset);
	U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200EU200CU202BU202BU206CU206EU200CU206EU206CU206BU206FU206AU202BU206CU206BU206FU206AU202CU200DU206FU200FU202AU200EU206DU206FU206CU202BU200DU202EU206EU200DU200FU206EU200BU200BU200EU200DU206DU200DU206BU202E_m35E4179957FA3C6E18E2ABB42DD58661F1F5164C(_thisAdjusted, method);
}
// System.Byte <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200FU202DU202EU202BU200DU206FU206AU200CU202BU200BU200FU200EU200BU206FU206BU200CU202AU200EU200CU202BU202DU200DU202BU200EU202DU202BU206AU200BU206CU206BU200BU202BU202CU206AU200EU206DU206EU206BU202AU206DU202E_mBE2CEA8798A97286D5A56933B5990BEA2B45EE71 (U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)1259532066);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)1899231852)));
		V_1 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0024;
			}
			case 2:
			{
				goto IL_0002;
			}
		}
	}
	{
		goto IL_0055;
	}

IL_0024:
	{
		uint32_t L_1 = V_0;
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_2 = __this->___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0;
		uint32_t L_3 = V_0;
		NullCheck(L_2);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_4 = p0;
		uint32_t L_5;
		L_5 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_3)))), L_4, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_1<<1))|(int32_t)L_5));
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) >= ((uint32_t)((int32_t)256)))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = ((int32_t)1487583994);
		G_B7_0 = L_7;
		G_B7_1 = L_7;
		goto IL_0052;
	}

IL_004c:
	{
		int32_t L_8 = ((int32_t)1259532066);
		G_B7_0 = L_8;
		G_B7_1 = L_8;
	}

IL_0052:
	{
		G_B2_0 = G_B7_1;
		goto IL_0007;
	}

IL_0055:
	{
		uint32_t L_9 = V_0;
		return (uint8_t)((int32_t)(uint8_t)L_9);
	}
}
IL2CPP_EXTERN_C  uint8_t U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200FU202DU202EU202BU200DU206FU206AU200CU202BU200BU200FU200EU200BU206FU206BU200CU202AU200EU200CU202BU202DU200DU202BU200EU202DU202BU206AU200BU206CU206BU200BU202BU202CU206AU200EU206DU206EU206BU202AU206DU202E_mBE2CEA8798A97286D5A56933B5990BEA2B45EE71_AdjustorThunk (RuntimeObject* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, const RuntimeMethod* method)
{
	U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U200FU202DU202EU202BU200DU206FU206AU200CU202BU200BU200FU200EU200BU206FU206BU200CU202AU200EU200CU202BU202DU200DU202BU200EU202DU202BU206AU200BU206CU206BU200BU202BU202CU206AU200EU206DU206EU206BU202AU206DU202E_mBE2CEA8798A97286D5A56933B5990BEA2B45EE71(_thisAdjusted, p0, method);
	return _returnValue;
}
// System.Byte <Module>/?????????????????????????????????????????/????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U206AU206FU202EU206DU200FU206AU202EU200CU206BU206BU200DU200DU206BU202BU206EU206FU206CU202CU206DU206BU200CU206FU206BU206CU202AU202EU206CU206FU206DU200BU200EU202DU202BU206CU200CU206BU200CU206FU202EU206BU202E_m4836884F90DF30A121AA21FF0FEAE78DDD9565D0 (U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, uint8_t p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)-676235812);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-2080331375)));
		V_3 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_00b5;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_00f3;
			}
			case 3:
			{
				goto IL_0061;
			}
			case 4:
			{
				goto IL_0127;
			}
			case 5:
			{
				goto IL_00d7;
			}
			case 6:
			{
				goto IL_0115;
			}
			case 7:
			{
				goto IL_0105;
			}
			case 8:
			{
				goto IL_0099;
			}
			case 9:
			{
				goto IL_0002;
			}
		}
	}
	{
		goto IL_0127;
	}

IL_0044:
	{
		uint32_t L_1 = V_1;
		uint32_t L_2 = V_2;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_3 = ((int32_t)-2013270741);
		G_B7_0 = L_3;
		G_B7_1 = L_3;
		goto IL_0056;
	}

IL_0050:
	{
		int32_t L_4 = ((int32_t)-1637659243);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
	}

IL_0056:
	{
		uint32_t L_5 = V_3;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)1612482406)))));
		goto IL_0007;
	}

IL_0061:
	{
		uint8_t L_6 = p1;
		p1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_6<<1)));
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_7 = __this->___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_0;
		NullCheck(L_7);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_10 = p0;
		uint32_t L_11;
		L_11 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_add(1, (int32_t)L_8))<<8)), (int32_t)L_9)))))), L_10, NULL);
		V_2 = L_11;
		uint32_t L_12 = V_0;
		uint32_t L_13 = V_2;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_12<<1))|(int32_t)L_13));
		uint32_t L_14 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-303936293)))^((int32_t)1555983509)));
		goto IL_0007;
	}

IL_0099:
	{
		uint32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) < ((uint32_t)((int32_t)256)))))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_16 = ((int32_t)-676235812);
		G_B12_0 = L_16;
		G_B12_1 = L_16;
		goto IL_00af;
	}

IL_00a9:
	{
		int32_t L_17 = ((int32_t)-1531330863);
		G_B12_0 = L_17;
		G_B12_1 = L_17;
	}

IL_00af:
	{
		G_B2_0 = G_B12_1;
		goto IL_0007;
	}

IL_00b5:
	{
		uint32_t L_18 = V_0;
		U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202EU5BU5D_tB0DBDF61D0A1DEB22C661624BE71D9233E144B8A* L_19 = __this->___U206EU200BU202CU200EU200BU206DU206DU200DU206EU202BU206DU200FU206FU202DU202BU200FU206EU206DU200DU206EU202EU206DU206BU206FU200BU200DU206CU200EU202EU202BU206DU206CU200BU200CU202DU202EU206EU206CU200CU200FU202E_0;
		uint32_t L_20 = V_0;
		NullCheck(L_19);
		U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* L_21 = p0;
		uint32_t L_22;
		L_22 = U202CU206AU200BU200EU200FU206CU200CU202BU206EU206BU206DU200EU200DU206CU200DU202EU206AU202DU206BU206CU200EU206FU206BU202DU206DU202EU202AU202CU200FU206EU200CU200CU206CU200FU200DU206DU206BU206BU202EU202AU202E_U206EU202DU200DU206EU200CU206DU202CU206BU202CU200BU200EU202CU200CU206FU206CU202CU206CU206EU200CU202BU202BU206DU200CU206CU206CU202BU206AU206CU206DU200FU200BU200DU206CU202BU200CU206DU202EU206CU200BU202DU202E_m2E4DD60941DC91041D6B05142FADE5184A8E9F9C(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_20)))), L_21, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_18<<1))|(int32_t)L_22));
		G_B2_0 = ((int32_t)-521032846);
		goto IL_0007;
	}

IL_00d7:
	{
		uint32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) < ((uint32_t)((int32_t)256)))))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_24 = ((int32_t)-1476694187);
		G_B17_0 = L_24;
		G_B17_1 = L_24;
		goto IL_00ed;
	}

IL_00e7:
	{
		int32_t L_25 = ((int32_t)-460432993);
		G_B17_0 = L_25;
		G_B17_1 = L_25;
	}

IL_00ed:
	{
		G_B2_0 = G_B17_1;
		goto IL_0007;
	}

IL_00f3:
	{
		uint32_t L_26 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_26, ((int32_t)-1418009760)))^((int32_t)295424401)));
		goto IL_0007;
	}

IL_0105:
	{
		uint8_t L_27 = p1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_27>>7))&1));
		G_B2_0 = ((int32_t)-2116955494);
		goto IL_0007;
	}

IL_0115:
	{
		uint32_t L_28 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_28, ((int32_t)-435465949)))^((int32_t)1107210126)));
		goto IL_0007;
	}

IL_0127:
	{
		uint32_t L_29 = V_0;
		return (uint8_t)((int32_t)(uint8_t)L_29);
	}
}
IL2CPP_EXTERN_C  uint8_t U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U206AU206FU202EU206DU200FU206AU202EU200CU206BU206BU200DU200DU206BU202BU206EU206FU206CU202CU206DU206BU200CU206FU206BU206CU202AU202EU206CU206FU206DU200BU200EU202DU202BU206CU200CU206BU200CU206FU202EU206BU202E_m4836884F90DF30A121AA21FF0FEAE78DDD9565D0_AdjustorThunk (RuntimeObject* __this, U206BU206BU200DU206CU200DU202EU202AU202BU202EU202AU206EU202AU206EU202AU206EU200BU200BU200BU202AU206FU206AU200BU206EU206DU200CU206EU202AU206DU206BU200FU200FU202BU200EU206BU206DU200CU206CU202EU200FU200FU202E_tC25CBC5197B59BA669394E64D5632460A9E80AE8* p0, uint8_t p1, const RuntimeMethod* method)
{
	U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_t0DAE61C439CF2DA82728FCFD61630BE42B855BAF*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = U206CU200FU202CU202EU206CU200BU202EU200BU200EU206CU206BU206FU202BU206DU206CU202DU206CU200BU206BU200FU202AU200FU200DU202BU206BU206EU200DU200BU200CU206CU202DU200FU206AU202CU202DU206EU200EU206CU200BU202AU202E_U206AU206FU202EU206DU200FU206AU202EU200CU206BU206BU200DU200DU206BU202BU206EU206FU206CU202CU206DU206BU200CU206FU206BU206CU202AU202EU206CU206FU206DU200BU200EU202DU202BU206CU200CU206BU200CU206FU202EU206BU202E_m4836884F90DF30A121AA21FF0FEAE78DDD9565D0(_thisAdjusted, p0, p1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E__ctor_m2966F6FB3B70085446A333E85AA6ABF03DE36369 (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206BU200CU202EU200DU200EU206BU202BU200BU200DU200CU200FU200CU202CU206DU206EU200CU200FU200EU200EU202AU202CU202BU202CU206BU200EU202DU206FU206EU206AU200FU202DU202BU202AU206DU202EU202CU206CU202BU202BU202E_mFC3E05087AE8F64B4853C52ED661B856AD5CD4A7 (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, uint32_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		uint32_t L_0 = __this->___U202BU200DU202EU206CU200FU206DU200BU200CU206FU206BU206AU206AU202BU200EU206DU202EU200EU202EU202DU200DU200EU206BU206CU206BU202CU202CU202CU206CU200FU200FU202CU206FU202EU202EU206BU206DU206BU202DU202DU206AU202E_4;
		uint32_t L_1 = p0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_004f;
		}
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)-1210658578);
	}

IL_000e:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-703501822)));
		V_0 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_007a;
			}
			case 1:
			{
				goto IL_0064;
			}
			case 2:
			{
				goto IL_0009;
			}
			case 3:
			{
				goto IL_0033;
			}
			case 4:
			{
				goto IL_004f;
			}
		}
	}
	{
		goto IL_007a;
	}

IL_0033:
	{
		uint32_t L_3 = p0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)L_3));
		__this->___U206EU200BU206EU202BU206BU202CU206EU200CU200BU202DU206EU200CU206FU200DU206CU200BU202CU200BU202BU206BU202CU200CU206DU200FU206DU200BU202AU202CU206EU200DU202AU200DU202EU200DU200DU200FU200EU206FU206DU200FU202E_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206EU200BU206EU202BU206BU202CU206EU200CU200BU202DU206EU200CU206FU200DU206CU200BU202CU200BU202BU206BU202CU200CU206DU200FU206DU200BU202AU202CU206EU200DU202AU200DU202EU200DU200DU200FU200EU206FU206DU200FU202E_0), (void*)L_4);
		uint32_t L_5 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)1978298414)))^((int32_t)15206547)));
		goto IL_000e;
	}

IL_004f:
	{
		uint32_t L_6 = p0;
		__this->___U202BU200DU202EU206CU200FU206DU200BU200CU206FU206BU206AU206AU202BU200EU206DU202EU200EU202EU202DU200DU200EU206BU206CU206BU202CU202CU202CU206CU200FU200FU202CU206FU202EU202EU206BU206DU206BU202DU202DU206AU202E_4 = L_6;
		__this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1 = 0;
		G_B2_0 = ((int32_t)-1778708239);
		goto IL_000e;
	}

IL_0064:
	{
		__this->___U202BU206DU206CU206AU202CU206FU202BU206EU202AU206BU206EU206BU200DU202EU200EU200DU202DU200FU206AU206EU206DU206AU206CU202BU206FU202BU202BU202EU206EU200CU202DU202DU202CU200FU202CU200CU202BU200BU202DU206CU202E_3 = 0;
		uint32_t L_7 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-1804555026)))^((int32_t)221275332)));
		goto IL_000e;
	}

IL_007a:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U200BU202AU206DU200DU200DU202AU206EU206CU200EU200CU200CU206FU202AU200BU200FU200CU202BU206CU202EU206DU200DU206EU200EU200EU206DU206CU202BU206CU206FU206DU206DU202BU202BU206EU202DU200FU206BU206AU206DU202BU202E_mB83508945AC964AC32BD860A4B3B00434EA6C30F (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* p0, bool p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206CU206AU206BU200BU206AU206DU200CU206EU206BU206EU200DU206CU202BU206EU206FU206FU206EU206CU200EU200FU206DU202BU202BU202DU206CU200BU206EU202BU206FU206EU200CU206CU200EU206EU206DU200CU206AU202DU206DU206DU202E_m7BFC0F2D7CB2391AD8AAB8AE69F82190EE8F80E5(__this, NULL);
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)-86122338);
	}

IL_000b:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-1892065826)));
		V_0 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_007f;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_0030;
			}
			case 4:
			{
				goto IL_0006;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0030:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = p0;
		__this->___U202CU200BU200FU200EU206DU206DU206AU202BU200CU200DU206DU206BU200FU202BU200FU200FU206FU202DU200EU200EU200BU206BU200BU206CU206DU200BU202CU202AU200EU200EU200CU206BU200FU202EU200EU206BU206EU200EU200DU202EU202E_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202CU200BU200FU200EU206DU206DU206AU202BU200CU200DU206DU206BU200FU202BU200FU200FU206FU202DU200EU200EU200BU206BU200BU206CU206DU200BU202CU202AU200EU200EU200CU206BU200FU202EU200EU206BU206EU200EU200DU202EU202E_2), (void*)L_1);
		uint32_t L_2 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)1375080470)))^((int32_t)194362786)));
		goto IL_000b;
	}

IL_0046:
	{
		__this->___U202BU206DU206CU206AU202CU206FU202BU206EU202AU206BU206EU206BU200DU202EU200EU200DU202DU200FU206AU206EU206DU206AU206CU202BU206FU202BU202BU202EU206EU200CU202DU202DU202CU200FU202CU200CU202BU200BU202DU206CU202E_3 = 0;
		__this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1 = 0;
		uint32_t L_3 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)-1302872984)))^((int32_t)1122875660)));
		goto IL_000b;
	}

IL_0063:
	{
		bool L_4 = p1;
		if (L_4)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_5 = ((int32_t)3829868);
		G_B9_0 = L_5;
		G_B9_1 = L_5;
		goto IL_0074;
	}

IL_006e:
	{
		int32_t L_6 = ((int32_t)11665720);
		G_B9_0 = L_6;
		G_B9_1 = L_6;
	}

IL_0074:
	{
		uint32_t L_7 = V_0;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)1027325711)))));
		goto IL_000b;
	}

IL_007f:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206CU206AU206BU200BU206AU206DU200CU206EU206BU206EU200DU206CU202BU206EU206FU206FU206EU206CU200EU200FU206DU202BU202BU202DU206CU200BU206EU202BU206FU206EU200CU206CU200EU206EU206DU200CU206AU202DU206DU206DU202E_m7BFC0F2D7CB2391AD8AAB8AE69F82190EE8F80E5 (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U202EU202DU206EU206AU202BU200BU200FU206FU202BU200EU206CU202CU206AU200BU200EU200EU202BU206DU202EU206AU206AU206AU200DU200EU200CU200DU206BU202CU200FU202CU200DU202EU206DU200DU202DU206BU202EU202DU206DU206FU202E_m0E89AE02BB13D5AB880CE25F4F4AAFA09D61A48D(__this, NULL);
		__this->___U202CU200BU200FU200EU206DU206DU206AU202BU200CU200DU206DU206BU200FU202BU200FU200FU206FU202DU200EU200EU200BU206BU200BU206CU206DU200BU202CU202AU200EU200EU200CU206BU200FU202EU200EU206BU206EU200EU200DU202EU202E_2 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202CU200BU200FU200EU206DU206DU206AU202BU200CU200DU206DU206BU200FU202BU200FU200FU206FU202DU200EU200EU200BU206BU200BU206CU206DU200BU202CU202AU200EU200EU200CU206BU200FU202EU200EU206BU206EU200EU200DU202EU202E_2), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U206EU200BU206EU202BU206BU202CU206EU200CU200BU202DU206EU200CU206FU200DU206CU200BU202CU200BU202BU206BU202CU200CU206DU200FU206DU200BU202AU202CU206EU200DU202AU200DU202EU200DU200DU200FU200EU206FU206DU200FU202E_0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___U206EU200BU206EU202BU206BU202CU206EU200CU200BU202DU206EU200CU206FU200DU206CU200BU202CU200BU202BU206BU202CU200CU206DU200FU206DU200BU202AU202CU206EU200DU202AU200DU202EU200DU200DU200FU200EU206FU206DU200FU202E_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___U206EU200BU206EU202BU206BU202CU206EU200CU200BU202DU206EU200CU206FU200DU206CU200BU202CU200BU202BU206BU202CU200CU206DU200FU206DU200BU202AU202CU206EU200DU202AU200DU202EU200DU200DU200FU200EU206FU206DU200FU202E_0;
		NullCheck(L_3);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U202EU202DU206EU206AU202BU200BU200FU206FU202BU200EU206CU202CU206AU200BU200EU200EU202BU206DU202EU206AU206AU206AU200DU200EU200CU200DU206BU202CU200FU202CU200DU202EU206DU200DU202DU206BU202EU202DU206DU206FU202E_m0E89AE02BB13D5AB880CE25F4F4AAFA09D61A48D (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	{
		uint32_t L_0 = __this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1;
		uint32_t L_1 = __this->___U202BU206DU206CU206AU202CU206FU202BU206EU202AU206BU206EU206BU200DU202EU200EU200DU202DU200FU206AU206EU206DU206AU206CU202BU206FU202BU202BU202EU206EU200CU202DU202DU202CU200FU202CU200CU202BU200BU202DU206CU202E_3;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}

IL_000e:
	{
		G_B2_0 = ((int32_t)1519982093);
	}

IL_0013:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1119045159)));
		V_1 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_000e;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_0062;
			}
			case 3:
			{
				goto IL_003c;
			}
			case 4:
			{
				goto IL_00b8;
			}
			case 5:
			{
				goto IL_0052;
			}
		}
	}
	{
		goto IL_00b8;
	}

IL_003c:
	{
		__this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1 = 0;
		uint32_t L_3 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)805110943)))^((int32_t)-41266786)));
		goto IL_0013;
	}

IL_0052:
	{
		return;
	}
	// Dead block : IL_0053: ldloc.1

IL_0062:
	{
		uint32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_5 = ((int32_t)-1493184492);
		G_B10_0 = L_5;
		G_B10_1 = L_5;
		goto IL_0073;
	}

IL_006d:
	{
		int32_t L_6 = ((int32_t)-180890424);
		G_B10_0 = L_6;
		G_B10_1 = L_6;
	}

IL_0073:
	{
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(G_B10_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)1291896143)))));
		goto IL_0013;
	}

IL_007e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->___U202CU200BU200FU200EU206DU206DU206AU202BU200CU200DU206DU206BU200FU202BU200FU200FU206FU202DU200EU200EU200BU206BU200BU206CU206DU200BU202CU202AU200EU200EU200CU206BU200FU202EU200EU206BU206EU200EU200DU202EU202E_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___U206EU200BU206EU202BU206BU202CU206EU200CU200BU202DU206EU200CU206FU200DU206CU200BU202CU200BU202BU206BU202CU200CU206DU200FU206DU200BU202AU202CU206EU200DU202AU200DU202EU200DU200DU200FU200EU206FU206DU200FU202E_0;
		uint32_t L_10 = __this->___U202BU206DU206CU206AU202CU206FU202BU206EU202AU206BU206EU206BU200DU202EU200EU200DU202DU200FU206AU206EU206DU206AU206CU202BU206FU202BU202BU202EU206EU200CU202DU202DU202CU200FU202CU200CU202BU200BU202DU206CU202E_3;
		uint32_t L_11 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, L_10, L_11);
		uint32_t L_12 = __this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1;
		uint32_t L_13 = __this->___U202BU200DU202EU206CU200FU206DU200BU200CU206FU206BU206AU206AU202BU200EU206DU202EU200EU202EU202DU200DU200EU206BU206CU206BU202CU202CU202CU206CU200FU200FU202CU206FU202EU202EU206BU206DU206BU202DU202DU206AU202E_4;
		if ((!(((uint32_t)L_12) >= ((uint32_t)L_13))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_14 = ((int32_t)1246045582);
		G_B14_0 = L_14;
		G_B14_1 = L_14;
		goto IL_00b2;
	}

IL_00ac:
	{
		int32_t L_15 = ((int32_t)303159401);
		G_B14_0 = L_15;
		G_B14_1 = L_15;
	}

IL_00b2:
	{
		G_B2_0 = G_B14_1;
		goto IL_0013;
	}

IL_00b8:
	{
		uint32_t L_16 = __this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1;
		__this->___U202BU206DU206CU206AU202CU206FU202BU206EU202AU206BU206EU206BU200DU202EU200EU200DU202DU200FU206AU206EU206DU206AU206CU202BU206FU202BU202BU202EU206EU200CU202DU202DU202CU200FU202CU200CU202BU200BU202DU206CU202E_3 = L_16;
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206AU200EU206AU206DU202AU206EU200DU206AU200DU200CU202EU202EU202AU206FU206BU200FU202DU206FU200BU202EU202EU206FU206AU202BU206AU206BU200CU200DU202BU200EU200EU206AU202CU202AU202CU206FU200CU206DU200DU200DU202E_mD11D2F7DC43CBC333F6FD572F9867A81E09733C7 (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, uint32_t p0, uint32_t p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B25_1 = 0;
	{
		uint32_t L_0 = __this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1;
		uint32_t L_1 = p0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), 1));
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)1444161506);
	}

IL_0010:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1381874868)));
		V_2 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)11))))
		{
			case 0:
			{
				goto IL_007c;
			}
			case 1:
			{
				goto IL_00a3;
			}
			case 2:
			{
				goto IL_0088;
			}
			case 3:
			{
				goto IL_0134;
			}
			case 4:
			{
				goto IL_000b;
			}
			case 5:
			{
				goto IL_0128;
			}
			case 6:
			{
				goto IL_00e0;
			}
			case 7:
			{
				goto IL_00bb;
			}
			case 8:
			{
				goto IL_014c;
			}
			case 9:
			{
				goto IL_0051;
			}
			case 10:
			{
				goto IL_0062;
			}
		}
	}
	{
		goto IL_014c;
	}

IL_0051:
	{
		V_0 = 0;
		uint32_t L_3 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)-596243741)))^((int32_t)-1040608567)));
		goto IL_0010;
	}

IL_0062:
	{
		uint32_t L_4 = V_0;
		uint32_t L_5 = __this->___U202BU200DU202EU206CU200FU206DU200BU200CU206FU206BU206AU206AU202BU200EU206DU202EU200EU202EU202DU200DU200EU206BU206CU206BU202CU202CU202CU206CU200FU200FU202CU206FU202EU202EU206BU206DU206BU202DU202DU206AU202E_4;
		if ((!(((uint32_t)L_4) < ((uint32_t)L_5))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_6 = ((int32_t)285458762);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
		goto IL_0079;
	}

IL_0073:
	{
		int32_t L_7 = ((int32_t)1450601045);
		G_B8_0 = L_7;
		G_B8_1 = L_7;
	}

IL_0079:
	{
		G_B2_0 = G_B8_1;
		goto IL_0010;
	}

IL_007c:
	{
		uint32_t L_8 = p1;
		p1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1));
		G_B2_0 = ((int32_t)221198362);
		goto IL_0010;
	}

IL_0088:
	{
		uint32_t L_9 = V_0;
		uint32_t L_10 = __this->___U202BU200DU202EU206CU200FU206DU200BU200CU206FU206BU206AU206AU202BU200EU206DU202EU200EU202EU202DU200DU200EU206BU206CU206BU202CU202CU202CU206CU200FU200FU202CU206FU202EU202EU206BU206DU206BU202DU202DU206AU202E_4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
		uint32_t L_11 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)1486822982)))^((int32_t)-1988096632)));
		goto IL_0010;
	}

IL_00a3:
	{
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U202EU202DU206EU206AU202BU200BU200FU206FU202BU200EU206CU202CU206AU200BU200EU200EU202BU206DU202EU206AU206AU206AU200DU200EU200CU200DU206BU202CU200FU202CU200DU202EU206DU200DU202DU206BU202EU202DU206DU206FU202E_m0E89AE02BB13D5AB880CE25F4F4AAFA09D61A48D(__this, NULL);
		uint32_t L_12 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)1709447769)))^((int32_t)850344266)));
		goto IL_0010;
	}

IL_00bb:
	{
		uint32_t L_13 = V_0;
		uint32_t L_14 = __this->___U202BU200DU202EU206CU200FU206DU200BU200CU206FU206BU206AU206AU202BU200EU206DU202EU200EU202EU202DU200DU200EU206BU206CU206BU202CU202CU202CU206CU200FU200FU202CU206FU202EU202EU206BU206DU206BU202DU202DU206AU202E_4;
		if ((!(((uint32_t)L_13) >= ((uint32_t)L_14))))
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_15 = ((int32_t)1783533396);
		G_B15_0 = L_15;
		G_B15_1 = L_15;
		goto IL_00d2;
	}

IL_00cc:
	{
		int32_t L_16 = ((int32_t)1517682330);
		G_B15_0 = L_16;
		G_B15_1 = L_16;
	}

IL_00d2:
	{
		uint32_t L_17 = V_2;
		G_B2_0 = ((int32_t)(G_B15_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)-942503999)))));
		goto IL_0010;
	}

IL_00e0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___U206EU200BU206EU202BU206BU202CU206EU200CU200BU202DU206EU200CU206FU200DU206CU200BU202CU200BU202BU206BU202CU200CU206DU200FU206DU200BU202AU202CU206EU200DU202AU200DU202EU200DU200DU200FU200EU206FU206DU200FU202E_0;
		uint32_t L_19 = __this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1;
		uint32_t L_20 = L_19;
		V_1 = L_20;
		__this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, 1));
		uint32_t L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___U206EU200BU206EU202BU206BU202CU206EU200CU200BU202DU206EU200CU206FU200DU206CU200BU202CU200BU202BU206BU202CU200CU206DU200FU206DU200BU202AU202CU206EU200DU202AU200DU202EU200DU200DU200FU200EU206FU206DU200FU202E_0;
		uint32_t L_23 = V_0;
		uint32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, 1));
		NullCheck(L_22);
		uintptr_t L_25 = ((uintptr_t)L_24);
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_21)), (uint8_t)L_26);
		uint32_t L_27 = __this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1;
		uint32_t L_28 = __this->___U202BU200DU202EU206CU200FU206DU200BU200CU206FU206BU206AU206AU202BU200EU206DU202EU200EU202EU202DU200DU200EU206BU206CU206BU202CU202CU202CU206CU200FU200FU202CU206FU202EU202EU206BU206DU206BU202DU202DU206AU202E_4;
		if ((!(((uint32_t)L_27) < ((uint32_t)L_28))))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_29 = ((int32_t)2130214975);
		G_B19_0 = L_29;
		G_B19_1 = L_29;
		goto IL_0122;
	}

IL_011c:
	{
		int32_t L_30 = ((int32_t)1149731017);
		G_B19_0 = L_30;
		G_B19_1 = L_30;
	}

IL_0122:
	{
		G_B2_0 = G_B19_1;
		goto IL_0010;
	}

IL_0128:
	{
		goto IL_0134;
	}
	// Dead block : IL_012a: ldc.i4 1147425180

IL_0134:
	{
		uint32_t L_31 = p1;
		if ((!(((uint32_t)L_31) <= ((uint32_t)0))))
		{
			goto IL_0140;
		}
	}
	{
		int32_t L_32 = ((int32_t)554589017);
		G_B25_0 = L_32;
		G_B25_1 = L_32;
		goto IL_0146;
	}

IL_0140:
	{
		int32_t L_33 = ((int32_t)1147425180);
		G_B25_0 = L_33;
		G_B25_1 = L_33;
	}

IL_0146:
	{
		G_B2_0 = G_B25_1;
		goto IL_0010;
	}

IL_014c:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U202AU200FU206BU206BU200FU206FU206AU206DU200DU202EU200DU202CU200EU202DU202CU206BU206DU202AU200BU200DU200CU202BU200EU206DU206AU206DU200CU202EU206AU206CU206FU202EU206CU202DU206CU206BU206BU200CU202BU202DU202E_m14389FEBAE859C343FDA84BC9D25FFF9C73800DA (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, uint8_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U206EU200BU206EU202BU206BU202CU206EU200CU200BU202DU206EU200CU206FU200DU206CU200BU202CU200BU202BU206BU202CU200CU206DU200FU206DU200BU202AU202CU206EU200DU202AU200DU202EU200DU200DU200FU200EU206FU206DU200FU202E_0;
		uint32_t L_1 = __this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1;
		uint32_t L_2 = L_1;
		V_0 = L_2;
		__this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, 1));
		uint32_t L_3 = V_0;
		uint8_t L_4 = p0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_3)), (uint8_t)L_4);
		uint32_t L_5 = __this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1;
		uint32_t L_6 = __this->___U202BU200DU202EU206CU200FU206DU200BU200CU206FU206BU206AU206AU202BU200EU206DU202EU200EU202EU202DU200DU200EU206BU206CU206BU202CU202CU202CU206CU200FU200FU202CU206FU202EU202EU206BU206DU206BU202DU202DU206AU202E_4;
		if ((!(((uint32_t)L_5) >= ((uint32_t)L_6))))
		{
			goto IL_005f;
		}
	}

IL_0028:
	{
		G_B2_0 = ((int32_t)-1475913455);
	}

IL_002d:
	{
		int32_t L_7 = ((int32_t)(G_B2_0^((int32_t)-128358641)));
		V_1 = L_7;
		switch (((int32_t)((uint32_t)(int32_t)L_7%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_005f;
	}

IL_004a:
	{
		U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U202EU202DU206EU206AU202BU200BU200FU206FU202BU200EU206CU202CU206AU200BU200EU200EU202BU206DU202EU206AU206AU206AU200DU200EU200CU200DU206BU202CU200FU202CU200DU202EU206DU200DU202DU206BU202EU202DU206DU206FU202E_m0E89AE02BB13D5AB880CE25F4F4AAFA09D61A48D(__this, NULL);
		uint32_t L_8 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-1693196711)))^((int32_t)-670926526)));
		goto IL_002d;
	}

IL_005f:
	{
		return;
	}
}
// System.Byte <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_U206FU200BU200BU202EU202EU202BU206BU206DU206FU200BU206AU202DU202EU206CU206AU200DU202CU206CU206EU200FU206CU200FU206DU206DU200FU206BU202DU206BU200BU200CU202AU206AU202EU206FU200FU202EU202DU206CU202CU206BU202E_m5B6E14A328259A386A6523F050EB9A3EB85386B2 (U206BU202BU200EU200FU200BU202CU202AU202AU200BU206DU206BU200CU200DU206DU202DU206FU206CU202AU200EU200DU206BU202BU200CU206FU202DU206AU206BU202BU206CU200EU202DU200DU200BU206DU202EU200CU206EU200CU200DU200EU202E_tC8BB69C1C125DEE7AF2D3B91A35D3DAE8832D663* __this, uint32_t p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		uint32_t L_0 = __this->___U200BU200FU200DU206FU202CU206FU206FU206BU200BU206BU206EU200BU206BU206AU202EU200FU206CU206FU206EU200CU206BU206CU200EU206DU206EU202AU206DU200EU202AU206BU200EU206DU200BU200FU202CU206DU202DU200DU202EU202E_1;
		uint32_t L_1 = p0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), 1));
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)-257663900);
	}

IL_0010:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-808838867)));
		V_1 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_006b;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_000b;
			}
			case 3:
			{
				goto IL_0053;
			}
		}
	}
	{
		goto IL_006b;
	}

IL_0031:
	{
		uint32_t L_3 = V_0;
		uint32_t L_4 = __this->___U202BU200DU202EU206CU200FU206DU200BU200CU206FU206BU206AU206AU202BU200EU206DU202EU200EU202EU202DU200DU200EU206BU206CU206BU202CU202CU202CU206CU200FU200FU202CU206FU202EU202EU206BU206DU206BU202DU202DU206AU202E_4;
		if ((!(((uint32_t)L_3) < ((uint32_t)L_4))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_5 = ((int32_t)-906681204);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_0048;
	}

IL_0042:
	{
		int32_t L_6 = ((int32_t)-1496135177);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_0048:
	{
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-199945239)))));
		goto IL_0010;
	}

IL_0053:
	{
		uint32_t L_8 = V_0;
		uint32_t L_9 = __this->___U202BU200DU202EU206CU200FU206DU200BU200CU206FU206BU206AU206AU202BU200EU206DU202EU200EU202EU202DU200DU200EU206BU206CU206BU202CU202CU202CU206CU200FU200FU202CU206FU202EU202EU206BU206DU206BU202DU202DU206AU202E_4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		uint32_t L_10 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-102860072)))^((int32_t)330571957)));
		goto IL_0010;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___U206EU200BU206EU202BU206BU202CU206EU200CU200BU202DU206EU200CU206FU200DU206CU200BU202CU200BU202BU206BU202CU200CU206DU200FU206DU200BU202AU202CU206EU200DU202AU200DU202EU200DU200DU200FU200EU206FU206DU200FU202E_0;
		uint32_t L_12 = V_0;
		NullCheck(L_11);
		uintptr_t L_13 = ((uintptr_t)L_12);
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200DU202DU202EU206FU200EU206EU202EU202CU200FU202AU202DU200FU202EU202CU200FU206FU206FU200BU206EU200DU206AU202CU200DU202CU202BU206BU202BU206AU202CU206CU206DU200BU200BU206DU206EU200FU206EU200BU206AU200FU202E_mDA620F9C21ED51C706C4B099513776616ED0625C (U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		__this->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200DU202DU202EU206FU200EU206EU202EU202CU200FU202AU202DU200FU202EU202CU200FU206FU206FU200BU206EU200DU206AU202CU200DU202CU202BU206BU202BU206AU202CU206CU206DU200BU200BU206DU206EU200FU206EU200BU206AU200FU202E_mDA620F9C21ED51C706C4B099513776616ED0625C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8*>(__this + _offset);
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200DU202DU202EU206FU200EU206EU202EU202CU200FU202AU202DU200FU202EU202CU200FU206FU206FU200BU206EU200DU206AU202CU200DU202CU202BU206BU202BU206AU202CU206CU206DU200BU200BU206DU206EU200FU206EU200BU206AU200FU202E_mDA620F9C21ED51C706C4B099513776616ED0625C(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200CU206BU202AU206CU206EU202AU200BU206CU206AU200FU200BU206AU202AU200EU206CU202AU206FU202AU206AU202CU206EU200CU200DU206AU200BU206AU202DU206CU202BU206AU206FU206FU200DU200EU200FU200BU206FU200DU206DU200CU202E_mB9C173B2A6358C099FA7693D9627FD281CC47935 (U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	{
		uint32_t L_0 = __this->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		if ((!(((uint32_t)L_0) < ((uint32_t)4))))
		{
			goto IL_0099;
		}
	}

IL_000c:
	{
		G_B2_0 = ((int32_t)1659764455);
	}

IL_0011:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)787779548)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_0099;
			}
			case 2:
			{
				goto IL_00cf;
			}
			case 3:
			{
				goto IL_0080;
			}
			case 4:
			{
				goto IL_000c;
			}
			case 5:
			{
				goto IL_0063;
			}
			case 6:
			{
				goto IL_00b7;
			}
			case 7:
			{
				goto IL_0054;
			}
		}
	}
	{
		goto IL_00cf;
	}

IL_0045:
	{
		uint32_t L_2 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)-1612936323)))^((int32_t)251767694)));
		goto IL_0011;
	}

IL_0054:
	{
		uint32_t L_3 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)1525540884)))^((int32_t)-2135511854)));
		goto IL_0011;
	}

IL_0063:
	{
		uint32_t L_4 = __this->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		__this->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3));
		uint32_t L_5 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)455976892)))^((int32_t)-525739904)));
		goto IL_0011;
	}

IL_0080:
	{
		__this->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0 = 0;
		uint32_t L_6 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-2068390784)))^((int32_t)-30552269)));
		goto IL_0011;
	}

IL_0099:
	{
		uint32_t L_7 = __this->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		if ((!(((uint32_t)L_7) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_8 = ((int32_t)2001346025);
		G_B11_0 = L_8;
		G_B11_1 = L_8;
		goto IL_00b1;
	}

IL_00ab:
	{
		int32_t L_9 = ((int32_t)2073708058);
		G_B11_0 = L_9;
		G_B11_1 = L_9;
	}

IL_00b1:
	{
		G_B2_0 = G_B11_1;
		goto IL_0011;
	}

IL_00b7:
	{
		uint32_t L_10 = __this->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		__this->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 6));
		G_B2_0 = ((int32_t)547772542);
		goto IL_0011;
	}

IL_00cf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200CU206BU202AU206CU206EU202AU200BU206CU206AU200FU200BU206AU202AU200EU206CU202AU206FU202AU206AU202CU206EU200CU200DU206AU200BU206AU202DU206CU202BU206AU206FU206FU200DU200EU200FU200BU206FU200DU206DU200CU202E_mB9C173B2A6358C099FA7693D9627FD281CC47935_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8*>(__this + _offset);
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200CU206BU202AU206CU206EU202AU200BU206CU206AU200FU200BU206AU202AU200EU206CU202AU206FU202AU206AU202CU206EU200CU200DU206AU200BU206AU202DU206CU202BU206AU206FU206FU200DU200EU200FU200BU206FU200DU206DU200CU202E_mB9C173B2A6358C099FA7693D9627FD281CC47935(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206BU206FU202EU202DU200EU200EU202DU200CU206EU200DU206EU202EU206FU200EU206CU202AU202DU200DU200CU206EU206CU200EU202BU200FU200DU202BU202AU202DU202BU200CU200FU206DU206FU206AU206DU202CU200CU200BU200DU200EU202E_mFCCF7B739B50C4A62068107E042045228AFFFB16 (U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* G_B2_0 = NULL;
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* G_B3_1 = NULL;
	{
		uint32_t L_0 = __this->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		G_B1_0 = __this;
		if ((!(((uint32_t)L_0) < ((uint32_t)7))))
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 7;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000d:
	{
		G_B3_0 = ((int32_t)10);
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206BU206FU202EU202DU200EU200EU202DU200CU206EU200DU206EU202EU206FU200EU206CU202AU202DU200DU200CU206EU206CU200EU202BU200FU200DU202BU202AU202DU202BU200CU200FU206DU206FU206AU206DU202CU200CU200BU200DU200EU202E_mFCCF7B739B50C4A62068107E042045228AFFFB16_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8*>(__this + _offset);
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206BU206FU202EU202DU200EU200EU202DU200CU206EU200DU206EU202EU206FU200EU206CU202AU202DU200DU200CU206EU206CU200EU202BU200FU200DU202BU202AU202DU202BU200CU200FU206DU206FU206AU206DU202CU200CU200BU200DU200EU202E_mFCCF7B739B50C4A62068107E042045228AFFFB16(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200EU202CU200BU200FU202EU200CU200DU206AU206FU206EU202BU206AU200CU206CU200BU200CU206AU206BU206DU200BU206DU206AU202AU202BU206FU200FU202DU202CU202EU200DU206CU200CU202AU202EU200DU206EU206BU200CU200FU200DU202E_mECE91C0C864053D62DBA98DFD221D66AA42E9312 (U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* G_B2_0 = NULL;
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* G_B3_1 = NULL;
	{
		uint32_t L_0 = __this->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		G_B1_0 = __this;
		if ((!(((uint32_t)L_0) < ((uint32_t)7))))
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 8;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000d:
	{
		G_B3_0 = ((int32_t)11);
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200EU202CU200BU200FU202EU200CU200DU206AU206FU206EU202BU206AU200CU206CU200BU200CU206AU206BU206DU200BU206DU206AU202AU202BU206FU200FU202DU202CU202EU200DU206CU200CU202AU202EU200DU206EU206BU200CU200FU200DU202E_mECE91C0C864053D62DBA98DFD221D66AA42E9312_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8*>(__this + _offset);
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U200EU202CU200BU200FU202EU200CU200DU206AU206FU206EU202BU206AU200CU206CU200BU200CU206AU206BU206DU200BU206DU206AU202AU202BU206FU200FU202DU202CU202EU200DU206CU200CU202AU202EU200DU206EU206BU200CU200FU200DU202E_mECE91C0C864053D62DBA98DFD221D66AA42E9312(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206EU200DU206DU206CU200FU206DU200BU206AU206EU202BU202EU206BU202CU206DU206BU202CU206BU200FU200BU202BU200BU206CU202AU206BU202DU202DU200EU200EU206EU200BU206DU206CU200CU200BU206AU206DU200CU206AU202EU200FU202E_m6D5C9D3F76CF0DDFBAF4F9E924D7C8B609A9E319 (U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* G_B2_0 = NULL;
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* G_B3_1 = NULL;
	{
		uint32_t L_0 = __this->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		G_B1_0 = __this;
		if ((!(((uint32_t)L_0) < ((uint32_t)7))))
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((int32_t)9);
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000e:
	{
		G_B3_0 = ((int32_t)11);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		G_B3_1->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206EU200DU206DU206CU200FU206DU200BU206AU206EU202BU202EU206BU202CU206DU206BU202CU206BU200FU200BU202BU200BU206CU202AU206BU202DU202DU200EU200EU206EU200BU206DU206CU200CU200BU206AU206DU200CU206AU202EU200FU202E_m6D5C9D3F76CF0DDFBAF4F9E924D7C8B609A9E319_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8*>(__this + _offset);
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206EU200DU206DU206CU200FU206DU200BU206AU206EU202BU202EU206BU202CU206DU206BU202CU206BU200FU200BU202BU200BU206CU202AU206BU202DU202DU200EU200EU206EU200BU206DU206CU200CU200BU206AU206DU200CU206AU202EU200FU202E_m6D5C9D3F76CF0DDFBAF4F9E924D7C8B609A9E319(_thisAdjusted, method);
}
// System.Boolean <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206BU200BU200EU202CU202CU206BU200BU200BU206FU200CU202BU202DU202AU206BU202DU206FU206EU206DU200FU206DU202EU200BU202CU202BU206EU200BU206CU200CU206AU202AU200DU200EU206AU206DU200CU200CU200CU206EU202DU200CU202E_m4E0B3FAA7338B81236EDA2D5DFAAF6AE9DC25F50 (U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___U200CU200BU200DU206CU202BU206DU200EU202BU200FU206AU202BU206DU202DU206FU202CU206BU200EU200CU200FU202AU206DU200DU202EU206AU206FU200FU206BU202CU206EU202CU206CU206EU206AU202DU206EU206AU206EU206FU206DU206FU202E_0;
		return (bool)((!(((uint32_t)L_0) >= ((uint32_t)7)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206BU200BU200EU202CU202CU206BU200BU200BU206FU200CU202BU202DU202AU206BU202DU206FU206EU206DU200FU206DU202EU200BU202CU202BU206EU200BU206CU200CU206AU202AU200DU200EU206AU206DU200CU200CU200CU206EU202DU200CU202E_m4E0B3FAA7338B81236EDA2D5DFAAF6AE9DC25F50_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_t62CDAE400B8B883982C87301848977CBB9CCACD8*>(__this + _offset);
	bool _returnValue;
	_returnValue = U206FU200EU202BU206AU206FU206FU202AU200BU200CU206DU200FU200CU206FU202CU202EU202EU206CU206FU202CU206FU206EU206DU200FU200EU202DU206FU202BU206DU206FU202AU202AU202DU206DU202CU202EU202BU206EU202DU200EU202EU202E_U206BU200BU200EU202CU202CU206BU200BU200BU206FU200CU202BU202DU202AU206BU202DU206FU206EU206DU200FU206DU202EU200BU202CU202BU206EU200BU206CU200CU206AU202AU200DU200EU206AU206DU200CU200CU200CU206EU202DU200CU202E_m4E0B3FAA7338B81236EDA2D5DFAAF6AE9DC25F50(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Android.AdLoaderClient::.ctor(GoogleMobileAds.Common.AdLoaderClientArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__ctor_m055D518AE1A587BD96A7C9A0ADF874B6296FDD1D (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	bool V_6 = false;
	uint32_t V_7 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23(((int32_t)1297186810), U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, L_0, NULL);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B(((int32_t)918773182), U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, L_1, NULL);
		V_0 = L_2;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		String_t* L_4;
		L_4 = U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05(((int32_t)821815092), U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, L_4, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_5;
		String_t* L_6;
		L_6 = U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0(((int32_t)-405113191), U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_1;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_11 = ___args0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = AdLoaderClientArgs_get_AdUnitId_m9CB2CEDA6950AE81735C721A64024FEE084C1095_inline(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, __this);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)__this);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_14, L_6, L_13, NULL);
		__this->___adLoader_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adLoader_4), (void*)L_14);
		V_2 = (bool)0;
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_15 = ___args0;
		NullCheck(L_15);
		HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* L_16;
		L_16 = AdLoaderClientArgs_get_AdTypes_m3286F08DA89AEF0941C3580385F858CE95635BD4_inline(L_15, NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F(L_16, 1, HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_008a;
		}
	}
	{
		V_2 = (bool)1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = __this->___adLoader_4;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B(((int32_t)628012870), U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_18);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_18, L_19, L_20, NULL);
	}

IL_008a:
	{
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_21 = ___args0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = AdLoaderClientArgs_get_NumberOfAdsToLoad_m16518458445D87FF740EE67FB2117837684591E0_inline(L_21, NULL);
		if ((((int32_t)L_22) <= ((int32_t)1)))
		{
			goto IL_00bc;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = __this->___adLoader_4;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05(((int32_t)-1377669517), U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_27 = ___args0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = AdLoaderClientArgs_get_NumberOfAdsToLoad_m16518458445D87FF740EE67FB2117837684591E0_inline(L_27, NULL);
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_30);
		NullCheck(L_23);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_23, L_24, L_26, NULL);
	}

IL_00bc:
	{
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_31 = ___args0;
		NullCheck(L_31);
		HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* L_32;
		L_32 = AdLoaderClientArgs_get_AdTypes_m3286F08DA89AEF0941C3580385F858CE95635BD4_inline(L_31, NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F(L_32, 0, HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F_RuntimeMethod_var);
		if (!L_33)
		{
			goto IL_0138;
		}
	}
	{
		V_2 = (bool)0;
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_34 = ___args0;
		NullCheck(L_34);
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_35;
		L_35 = AdLoaderClientArgs_get_FormatIds_m6731C0FF425BE0CC73D07B3C07A81D5A5C33CF4A_inline(L_34, NULL);
		NullCheck(L_35);
		Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C L_36;
		L_36 = Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22(L_35, Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22_RuntimeMethod_var);
		V_4 = L_36;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14((&V_4), Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_011f_1;
			}

IL_00db_1:
			{
				KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C L_37;
				L_37 = Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_inline((&V_4), Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_RuntimeMethod_var);
				V_3 = L_37;
				String_t* L_38;
				L_38 = KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_inline((&V_3), KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var);
				V_5 = L_38;
				bool L_39;
				L_39 = KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_inline((&V_3), KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_RuntimeMethod_var);
				V_6 = L_39;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_40 = __this->___adLoader_4;
				il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
				String_t* L_41;
				L_41 = U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656(((int32_t)1650441528), U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656_RuntimeMethod_var);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_42;
				String_t* L_44 = V_5;
				NullCheck(L_43);
				ArrayElementTypeCheck (L_43, L_44);
				(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_43;
				bool L_46 = V_6;
				bool L_47 = L_46;
				RuntimeObject* L_48 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_47);
				NullCheck(L_45);
				ArrayElementTypeCheck (L_45, L_48);
				(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_48);
				NullCheck(L_40);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_40, L_41, L_45, NULL);
			}

IL_011f_1:
			{
				bool L_49;
				L_49 = Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2((&V_4), Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_00db_1;
				}
			}
			{
				goto IL_0138;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0138:
	{
		bool L_50 = V_2;
		if (!L_50)
		{
			goto IL_0156;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_51 = __this->___adLoader_4;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_52;
		L_52 = U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656(((int32_t)1578998177), U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_51);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_51, L_52, L_53, NULL);
	}

IL_0156:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_54 = __this->___adLoader_4;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_55;
		L_55 = U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0(((int32_t)-800734744), U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_54);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_54, L_55, L_56, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnAdFailedToLoad_m9F97AF72F7823388F5B7D7BF87A9469B5EF33A78 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_0 = NULL;
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_0 = __this->___OnAdFailedToLoad_5;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1257633778);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1653340213)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)529537563);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50** L_3 = (&__this->___OnAdFailedToLoad_5);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_4 = V_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_7 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*>(L_3, ((EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)Castclass((RuntimeObject*)L_6, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_9 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_9) == ((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)634140220);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)1953973354);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)1177440433)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnAdFailedToLoad_m230534A775365707E91D50FDCCF4D514A63A6900 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_0 = NULL;
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_0 = __this->___OnAdFailedToLoad_5;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1843166757);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1386033594)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0007;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)2059442286);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50** L_3 = (&__this->___OnAdFailedToLoad_5);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_4 = V_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_7 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*>(L_3, ((EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)Castclass((RuntimeObject*)L_6, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_9 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_9) == ((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-659640367);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-2017288509);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-165703447)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnCustomNativeAdLoaded(System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnCustomNativeAdLoaded_m89A60D28B0B4B1F38A0A08289B6F162151A59EDD (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_0 = NULL;
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->___OnCustomNativeAdLoaded_6;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1608359648);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)298648609)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0007;
			}
			case 3:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)1106721974);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED** L_3 = (&__this->___OnCustomNativeAdLoaded_6);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_4 = V_1;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_7 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*>(L_3, ((EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_9 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_9) == ((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-953708914);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-1107330457);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-567934270)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnCustomNativeAdLoaded(System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnCustomNativeAdLoaded_m33E5CA04251A6A9BD2D935B2492D33064461B0B1 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_0 = NULL;
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->___OnCustomNativeAdLoaded_6;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-615340683);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-167958921)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_004f;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED** L_3 = (&__this->___OnCustomNativeAdLoaded_6);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_4 = V_1;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_7 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*>(L_3, ((EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		G_B2_0 = ((int32_t)-736381988);
		goto IL_000c;
	}

IL_004f:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_9 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_9) == ((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)55360365);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)1008085482);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1281881891)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnCustomNativeAdClicked(System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnCustomNativeAdClicked_mD3803E6D3B545DC90D0643FBB139A346D50A871D (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_0 = NULL;
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->___OnCustomNativeAdClicked_7;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-25639918);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-273046454)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0029:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED** L_3 = (&__this->___OnCustomNativeAdClicked_7);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_4 = V_1;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_7 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*>(L_3, ((EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_9 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_9) == ((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_10))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ((int32_t)-135768691);
		G_B7_0 = L_11;
		G_B7_1 = L_11;
		goto IL_0056;
	}

IL_0050:
	{
		int32_t L_12 = ((int32_t)-25639918);
		G_B7_0 = L_12;
		G_B7_1 = L_12;
	}

IL_0056:
	{
		G_B2_0 = G_B7_1;
		goto IL_000c;
	}

IL_0059:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnCustomNativeAdClicked(System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnCustomNativeAdClicked_mED737635D7893F13FC4F2B00B552987DAF4E76B7 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_0 = NULL;
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->___OnCustomNativeAdClicked_7;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1331441261);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)2004864811)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)308212758);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED** L_3 = (&__this->___OnCustomNativeAdClicked_7);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_4 = V_1;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_7 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*>(L_3, ((EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_9 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_9) == ((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)1681877121);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)167875416);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-847396516)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnNativeAdLoaded(System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdLoaded_m4E2EDF6256EA7F155F3657C1A463A298587F667D (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* V_0 = NULL;
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_0 = __this->___OnNativeAdLoaded_8;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1307128166);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)514871148)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_007f;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0031;
			}
			case 4:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)440430796);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_3 = V_0;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_4 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)L_3) == ((RuntimeObject*)(EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)L_4))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = ((int32_t)-124908056);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_004c;
	}

IL_0046:
	{
		int32_t L_6 = ((int32_t)-1963049944);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_004c:
	{
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)718837930)))));
		goto IL_000c;
	}

IL_0057:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67** L_8 = (&__this->___OnNativeAdLoaded_8);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_9 = V_1;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_10 = ___value0;
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_12 = V_0;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_13;
		L_13 = InterlockedCompareExchangeImpl<EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*>(L_8, ((EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)Castclass((RuntimeObject*)L_11, EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var)), L_12);
		V_0 = L_13;
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)382268560)))^((int32_t)205145703)));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnNativeAdLoaded(System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdLoaded_mC778D46518E2BA5595BF819D7EA5A1123FEF28DC (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* V_0 = NULL;
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_0 = __this->___OnNativeAdLoaded_8;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)84781474);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)84400629)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_007f;
			}
			case 2:
			{
				goto IL_0007;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)280296500);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67** L_3 = (&__this->___OnNativeAdLoaded_8);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_4 = V_1;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_7 = V_0;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*>(L_3, ((EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)Castclass((RuntimeObject*)L_6, EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		uint32_t L_9 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-2128991966)))^((int32_t)-1699166736)));
		goto IL_000c;
	}

IL_0062:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_10 = V_0;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_11 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)L_10) == ((RuntimeObject*)(EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)L_11))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_12 = ((int32_t)465688901);
		G_B9_0 = L_12;
		G_B9_1 = L_12;
		goto IL_0074;
	}

IL_006e:
	{
		int32_t L_13 = ((int32_t)1184878282);
		G_B9_0 = L_13;
		G_B9_1 = L_13;
	}

IL_0074:
	{
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)2005049944)))));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnNativeAdImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdImpression_mB5B3B2F166BD9BE93683C449AE75B30B7E4A0080 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdImpression_9;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1016210467);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)238497111)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0029:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->___OnNativeAdImpression_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ((int32_t)1016210467);
		G_B7_0 = L_11;
		G_B7_1 = L_11;
		goto IL_0056;
	}

IL_0050:
	{
		int32_t L_12 = ((int32_t)9461905);
		G_B7_0 = L_12;
		G_B7_1 = L_12;
	}

IL_0056:
	{
		G_B2_0 = G_B7_1;
		goto IL_000c;
	}

IL_0059:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnNativeAdImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdImpression_m6E8D45F2A927FD723A1109C0EC914B340140D56F (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdImpression_9;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-2098520357);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-796529375)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0029:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->___OnNativeAdImpression_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ((int32_t)-2098520357);
		G_B7_0 = L_11;
		G_B7_1 = L_11;
		goto IL_0056;
	}

IL_0050:
	{
		int32_t L_12 = ((int32_t)-1496390386);
		G_B7_0 = L_12;
		G_B7_1 = L_12;
	}

IL_0056:
	{
		G_B2_0 = G_B7_1;
		goto IL_000c;
	}

IL_0059:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnNativeAdClicked(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdClicked_m1A8D03442432D6C0D4EC4ED6A9F36B9534C47BF6 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdClicked_10;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)246953739);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1933209647)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0062;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)292120861);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->___OnNativeAdClicked_10);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		uint32_t L_9 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-1022161026)))^((int32_t)2140693167)));
		goto IL_000c;
	}

IL_0062:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_11)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_12 = ((int32_t)1826707707);
		G_B9_0 = L_12;
		G_B9_1 = L_12;
		goto IL_0074;
	}

IL_006e:
	{
		int32_t L_13 = ((int32_t)1799743589);
		G_B9_0 = L_13;
		G_B9_1 = L_13;
	}

IL_0074:
	{
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-693226716)))));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnNativeAdClicked(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdClicked_m2269979F15AB0470549BE5AA3225534D2C3AE929 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdClicked_10;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1357927539);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-2015242810)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)-82370344);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->___OnNativeAdClicked_10);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-1676567451);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-432609321);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1214799485)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnNativeAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdOpening_m629E7594AF4AB93C9E6ED60373FD75A453DF4073 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdOpening_11;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1774822618);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1370901003)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_004f;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->___OnNativeAdOpening_11);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		G_B2_0 = ((int32_t)1944163888);
		goto IL_000c;
	}

IL_004f:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-1176392565);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-1182994456);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-377274141)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnNativeAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdOpening_m36509A1BE4895D91F3D50D74EF41B7554F088B19 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdOpening_11;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)759496216);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1575231360)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_007f;
			}
			case 2:
			{
				goto IL_003a;
			}
			case 3:
			{
				goto IL_0007;
			}
			case 4:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)781717295);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_3) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_4)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = ((int32_t)745972947);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_004c;
	}

IL_0046:
	{
		int32_t L_6 = ((int32_t)2010623356);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_004c:
	{
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-1369784095)))));
		goto IL_000c;
	}

IL_0057:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_8 = (&__this->___OnNativeAdOpening_11);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = ___value0;
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_9, L_10, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_12 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13;
		L_13 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_8, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_11, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_12);
		V_0 = L_13;
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)2144477777)))^((int32_t)-164425740)));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnNativeAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdClosed_mDD4019510743B0250E99971A86A34DEB38AA706C (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdClosed_12;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-662724086);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-751268772)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)-1498103067);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->___OnNativeAdClosed_12);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)921175909);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)1680289639);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-253804185)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnNativeAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdClosed_m763234B043A30775FF8CB68E060C592565D2CFEF (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdClosed_12;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1974390256);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-990127399)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0062;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)-319476217);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->___OnNativeAdClosed_12);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		uint32_t L_9 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-1347151155)))^((int32_t)1658527113)));
		goto IL_000c;
	}

IL_0062:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_11)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_12 = ((int32_t)57587462);
		G_B9_0 = L_12;
		G_B9_1 = L_12;
		goto IL_0074;
	}

IL_006e:
	{
		int32_t L_13 = ((int32_t)1696830727);
		G_B9_0 = L_13;
		G_B9_1 = L_13;
	}

IL_0074:
	{
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-2077366847)))));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_LoadAd_mB863835F9D2F80722EC3C8E81E4A933DB81D5744 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = NativeUtils_get_Version_mB8F63B5B552D940B0351BE63FA0ED6E4B93B04D2_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AdRequest_BuildVersionString_mE20A7E8289BA107C2409CE7A3DCFEC5770EEC513(L_0, NULL);
		V_0 = L_1;
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)96415912);
	}

IL_0010:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1748651464)));
		V_1 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0061;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_000b;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_002d:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = __this->___adLoader_4;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23(((int32_t)1213591292), U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_7 = ___request0;
		String_t* L_8 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = Utils_GetAdRequestJavaObject_m1B081FD57A546B7181D07C58C1101E57A227EF7E(L_7, L_8, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_3);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_3, L_4, L_6, NULL);
		uint32_t L_10 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)1657378562)))^((int32_t)-1580898008)));
		goto IL_0010;
	}

IL_0061:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onNativeAdLoaded(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onNativeAdLoaded_m61BDD6A9E7B612AC31DE813753C8B2B350C81B03 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* V_0 = NULL;
	NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_0 = __this->___OnNativeAdLoaded_8;
		if (!L_0)
		{
			goto IL_006d;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)-960514707);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-106187568)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_006d;
			}
			case 1:
			{
				goto IL_002e;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_0008;
			}
		}
	}
	{
		goto IL_006d;
	}

IL_002e:
	{
		NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* L_2 = (NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809*)il2cpp_codegen_object_new(NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NativeClientEventArgs__ctor_mF7DEA301F79DC4E7B2B76ECC00B6AD55D15FF636(L_2, NULL);
		V_1 = L_2;
		NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* L_3 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___ad0;
		NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* L_5 = (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08*)il2cpp_codegen_object_new(NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		NativeAdClient__ctor_m0E816B4BC558AF7D091637D3BFFFC2A81CAD5DC6(L_5, L_4, NULL);
		NullCheck(L_3);
		NativeClientEventArgs_set_nativeAdClient_mCEDBB0459BE0B3E308DA85F15E98E31D740B97FA_inline(L_3, L_5, NULL);
		NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* L_6 = V_1;
		V_0 = L_6;
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-1479863637)))^((int32_t)-258017543)));
		goto IL_000d;
	}

IL_0051:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_8 = __this->___OnNativeAdLoaded_8;
		NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* L_9 = V_0;
		NullCheck(L_8);
		EventHandler_1_Invoke_mE7BEDD3511C7196786EEA138E2CCB15EDFBA079E_inline(L_8, __this, L_9, NULL);
		uint32_t L_10 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)850273657)))^((int32_t)201511866)));
		goto IL_000d;
	}

IL_006d:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onNativeAdImpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onNativeAdImpression_m4107C0F73DF65CDB649EFD0F8A9AE799E3E77F62 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdImpression_9;
		if (!L_0)
		{
			goto IL_004a;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)510890975);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1513470496)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0008;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_002a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = __this->___OnNativeAdImpression_9;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_2, __this, L_3, NULL);
		uint32_t L_4 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)1429881786)))^((int32_t)1593148317)));
		goto IL_000d;
	}

IL_004a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onNativeAdClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onNativeAdClicked_m78A11AB2516DB8C33645A6601EF43EF41A3CF8F5 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdClicked_10;
		if (!L_0)
		{
			goto IL_004a;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)-828058515);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1441222019)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0008;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_002a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = __this->___OnNativeAdClicked_10;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_2, __this, L_3, NULL);
		uint32_t L_4 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-1604869793)))^((int32_t)581143520)));
		goto IL_000d;
	}

IL_004a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onNativeAdOpening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onNativeAdOpening_m286D9BFFE734BDC414D8AD2230209EB53B0E4CCD (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdOpening_11;
		if (!L_0)
		{
			goto IL_004a;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)-23713362);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-593755572)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0008;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_002a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = __this->___OnNativeAdOpening_11;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_2, __this, L_3, NULL);
		uint32_t L_4 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-1648390323)))^((int32_t)-920272107)));
		goto IL_000d;
	}

IL_004a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onNativeAdClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onNativeAdClosed_mA450F47AF7E4C1030A3184474676462CA2401B44 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdClosed_12;
		if (!L_0)
		{
			goto IL_004a;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)-59155012);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-718204897)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0008;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_002a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = __this->___OnNativeAdClosed_12;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_2, __this, L_3, NULL);
		uint32_t L_4 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)1908694446)))^((int32_t)1654787213)));
		goto IL_000d;
	}

IL_004a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onCustomNativeAdLoaded(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onCustomNativeAdLoaded_mC4B7F82CE66C7FADC9A6536643211B1ED00BD12B (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* V_0 = NULL;
	CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->___OnCustomNativeAdLoaded_6;
		if (!L_0)
		{
			goto IL_00a0;
		}
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)-733894153);
	}

IL_0010:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-972311526)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_000b;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_00a0;
			}
			case 3:
			{
				goto IL_007b;
			}
			case 4:
			{
				goto IL_004a;
			}
			case 5:
			{
				goto IL_0039;
			}
		}
	}
	{
		goto IL_00a0;
	}

IL_0039:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_2 = V_1;
		V_0 = L_2;
		uint32_t L_3 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)1641479659)))^((int32_t)-585375903)));
		goto IL_0010;
	}

IL_004a:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_4 = __this->___OnCustomNativeAdLoaded_6;
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_5 = V_0;
		NullCheck(L_4);
		EventHandler_1_Invoke_m23461BB0B5DF74CDA38E5E94CC0CEADB138F06C5_inline(L_4, __this, L_5, NULL);
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)469954759)))^((int32_t)1905626296)));
		goto IL_0010;
	}

IL_0066:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_7 = (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734*)il2cpp_codegen_object_new(CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		CustomNativeClientEventArgs__ctor_mB86D8364F64424DC0778551C310DC8F0B71A46FB(L_7, NULL);
		V_1 = L_7;
		uint32_t L_8 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-1691702820)))^((int32_t)-1704679487)));
		goto IL_0010;
	}

IL_007b:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_9 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = ___ad0;
		CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* L_11 = (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8*)il2cpp_codegen_object_new(CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		CustomNativeAdClient__ctor_m3DCCBCD93644C868D3D4F8E33B4EECD459CDC311(L_11, L_10, NULL);
		NullCheck(L_9);
		CustomNativeClientEventArgs_set_nativeAdClient_m7C4578E96709771F4B4E26B0EF01FD72C1CF0E75_inline(L_9, L_11, NULL);
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_12 = V_1;
		NullCheck(L_12);
		CustomNativeClientEventArgs_set_assetName_m0FFF03346E29AB4599BEB94FD9E2CB5BD6D163C4_inline(L_12, (String_t*)NULL, NULL);
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1565653271)))^((int32_t)1072127766)));
		goto IL_0010;
	}

IL_00a0:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onAdFailedToLoad(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onAdFailedToLoad_m0489FF6B55F4129C7CEBB244C9A179C8805D11AD (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* V_0 = NULL;
	LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_0 = (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2*)il2cpp_codegen_object_new(LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LoadAdErrorClientEventArgs__ctor_m2D09A984965A5EDB0506CDAC47BE1675E80AE0AB(L_0, NULL);
		V_1 = L_0;
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_1 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___error0;
		LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C* L_3 = (LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C*)il2cpp_codegen_object_new(LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoadAdErrorClient__ctor_mAAB2CB3CA79F7FC1CDDA014A8194DDB6A26F9967(L_3, L_2, NULL);
		NullCheck(L_1);
		LoadAdErrorClientEventArgs_set_LoadAdErrorClient_m6E865CB1B347CEF0B75F55CE43EE3FDBF8353353_inline(L_1, L_3, NULL);
	}

IL_0012:
	{
		G_B2_0 = ((int32_t)-1528894895);
	}

IL_0017:
	{
		int32_t L_4 = ((int32_t)(G_B2_0^((int32_t)-154948573)));
		V_2 = L_4;
		switch (((int32_t)((uint32_t)(int32_t)L_4%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0012;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0052;
			}
		}
	}
	{
		goto IL_0052;
	}

IL_0034:
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_5 = V_1;
		V_0 = L_5;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_6 = __this->___OnAdFailedToLoad_5;
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_7 = V_0;
		NullCheck(L_6);
		EventHandler_1_Invoke_m10AA45946252533013704CF408E2DDD0B3BACA82_inline(L_6, __this, L_7, NULL);
		uint32_t L_8 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)391015361)))^((int32_t)615939190)));
		goto IL_0017;
	}

IL_0052:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onCustomNativeAdClick(UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onCustomNativeAdClick_mA8FB2633DF532FE829C54DCB59C4F56922C79DE2 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, String_t* ___assetName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* V_0 = NULL;
	CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->___OnCustomNativeAdClicked_7;
		if (!L_0)
		{
			goto IL_0087;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)-1253201658);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-31466658)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0032;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_0008;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_0066;
			}
		}
	}
	{
		goto IL_0087;
	}

IL_0032:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = __this->___OnCustomNativeAdClicked_7;
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_3 = V_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m23461BB0B5DF74CDA38E5E94CC0CEADB138F06C5_inline(L_2, __this, L_3, NULL);
		uint32_t L_4 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)704694937)))^((int32_t)1659498128)));
		goto IL_000d;
	}

IL_004e:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_5 = V_1;
		String_t* L_6 = ___assetName1;
		NullCheck(L_5);
		CustomNativeClientEventArgs_set_assetName_m0FFF03346E29AB4599BEB94FD9E2CB5BD6D163C4_inline(L_5, L_6, NULL);
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_7 = V_1;
		V_0 = L_7;
		uint32_t L_8 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)1694935980)))^((int32_t)-1500815821)));
		goto IL_000d;
	}

IL_0066:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_9 = (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734*)il2cpp_codegen_object_new(CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CustomNativeClientEventArgs__ctor_mB86D8364F64424DC0778551C310DC8F0B71A46FB(L_9, NULL);
		V_1 = L_9;
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_10 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = ___ad0;
		CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* L_12 = (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8*)il2cpp_codegen_object_new(CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		CustomNativeAdClient__ctor_m3DCCBCD93644C868D3D4F8E33B4EECD459CDC311(L_12, L_11, NULL);
		NullCheck(L_10);
		CustomNativeClientEventArgs_set_nativeAdClient_m7C4578E96709771F4B4E26B0EF01FD72C1CF0E75_inline(L_10, L_12, NULL);
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1413442493)))^((int32_t)315374970)));
		goto IL_000d;
	}

IL_0087:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Android.CustomNativeAdClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNativeAdClient__ctor_m3DCCBCD93644C868D3D4F8E33B4EECD459CDC311 (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___customNativeAd0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___customNativeAd0;
		__this->___customNativeAd_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___customNativeAd_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Android.CustomNativeAdClient::GetAvailableAssetNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* CustomNativeAdClient_GetAvailableAssetNames_m285EC00BE481B69C19D018916251869AED0C606C (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___customNativeAd_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05(((int32_t)1553857480), U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00(L_0, L_1, L_2, AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_4, (RuntimeObject*)L_3, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		return L_4;
	}
}
// System.String GoogleMobileAds.Android.CustomNativeAdClient::GetFormatId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CustomNativeAdClient_GetFormatId_mCE16EF009815B1DDF6D7DA8711619C165D41DCF2 (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___customNativeAd_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0(((int32_t)-462424077), U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.Byte[] GoogleMobileAds.Android.CustomNativeAdClient::GetImageByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CustomNativeAdClient_GetImageByteArray_mAAC3371BB7D4286B79052A540C09FEED5017FD9C (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___customNativeAd_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05(((int32_t)-436280307), U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___key0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C(L_0, L_1, L_3, AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C_RuntimeMethod_var);
		V_0 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0058;
		}
	}

IL_0025:
	{
		G_B2_0 = ((int32_t)-55159906);
	}

IL_002a:
	{
		int32_t L_7 = ((int32_t)(G_B2_0^((int32_t)-1158970991)));
		V_1 = L_7;
		switch (((int32_t)((uint32_t)(int32_t)L_7%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_0058;
	}

IL_0047:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
	// Dead block : IL_0049: ldloc.1

IL_0058:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		return L_8;
	}
}
// System.String GoogleMobileAds.Android.CustomNativeAdClient::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CustomNativeAdClient_GetText_m26D542BA02FFA8E8C6E2194FBCE801B7D1BAFBBF (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___customNativeAd_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656(((int32_t)461135407), U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___key0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		String_t* L_5;
		L_5 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_0020:
	{
		G_B2_0 = ((int32_t)1481792539);
	}

IL_0025:
	{
		int32_t L_6 = ((int32_t)(G_B2_0^((int32_t)738400405)));
		V_1 = L_6;
		switch (((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_007d;
			}
			case 2:
			{
				goto IL_0046;
			}
			case 3:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_007d;
	}

IL_0046:
	{
		String_t* L_7 = V_0;
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_7);
		bool L_9;
		L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_10 = ((int32_t)-1764243120);
		G_B7_0 = L_10;
		G_B7_1 = L_10;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_11 = ((int32_t)-282512754);
		G_B7_0 = L_11;
		G_B7_1 = L_11;
	}

IL_0061:
	{
		uint32_t L_12 = V_1;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)458689181)))));
		goto IL_0025;
	}

IL_006c:
	{
		return (String_t*)NULL;
	}
	// Dead block : IL_006e: ldloc.1

IL_007d:
	{
		String_t* L_13 = V_0;
		return L_13;
	}
}
// System.Void GoogleMobileAds.Android.CustomNativeAdClient::PerformClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNativeAdClient_PerformClick_mD96B7418F1B603AD867CE72D0F8BAAF757978873 (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, String_t* ___assetName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___customNativeAd_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0(((int32_t)2072128601), U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___assetName0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Android.CustomNativeAdClient::RecordImpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNativeAdClient_RecordImpression_m1F933123831CC10EF002C9C17615BF87402D5B17 (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___customNativeAd_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B(((int32_t)-1592160856), U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.GoogleMobileAdsNativeClientFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMobileAdsNativeClientFactory__ctor_mC493E82853A368369642A0BD1A52FD7C83A98CBD (GoogleMobileAdsNativeClientFactory_t7B51A9D779A00C76464A224A4B52821D6A946C84* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Common.IAdLoaderClient GoogleMobileAds.GoogleMobileAdsNativeClientFactory::BuildAdLoaderClient(GoogleMobileAds.Common.AdLoaderClientArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoogleMobileAdsNativeClientFactory_BuildAdLoaderClient_m05E2420DE482E47ED15980D938702E468EC6C52F (GoogleMobileAdsNativeClientFactory_t7B51A9D779A00C76464A224A4B52821D6A946C84* __this, AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0041;
		}
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)-721283732);
	}

IL_000e:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-962101512)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0009;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_002b:
	{
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_2 = ___args0;
		AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* L_3 = (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88*)il2cpp_codegen_object_new(AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AdLoaderClient__ctor_m055D518AE1A587BD96A7C9A0ADF874B6296FDD1D(L_3, L_2, NULL);
		return L_3;
	}
	// Dead block : IL_0032: ldloc.0

IL_0041:
	{
		DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F* L_4 = (DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F*)il2cpp_codegen_object_new(DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DummyNativeClient__ctor_m116A1174D312D713C92ADBB744748987A37D15C1(L_4, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Android.NativeAdClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdClient__ctor_m0E816B4BC558AF7D091637D3BFFFC2A81CAD5DC6 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___nativeAd0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0(((int32_t)437886152), U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, L_0, NULL);
	}

IL_0010:
	{
		G_B2_0 = ((int32_t)1628863237);
	}

IL_0015:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1032037534)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0010;
			}
			case 1:
			{
				goto IL_009b;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_009b;
	}

IL_0036:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___nativeAd0;
		__this->___nativeAd_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nativeAd_5), (void*)L_2);
		uint32_t L_3 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)-19051925)))^((int32_t)-803073975)));
		goto IL_0015;
	}

IL_004c:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___nativeAd0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0(((int32_t)592713764), U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_4, L_5, L_6, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_7;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_0;
		NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* L_9 = (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772*)il2cpp_codegen_object_new(NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		NativeAdInteractionHandlerClient__ctor_mBBCE221D0C939EAF772625836F672623C4115DFE(L_9, L_8, NULL);
		__this->___interactionHandlerClient_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactionHandlerClient_6), (void*)L_9);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = ___nativeAd0;
		String_t* L_11;
		L_11 = U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B(((int32_t)1997087414), U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, __this);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)__this);
		NullCheck(L_10);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_10, L_11, L_13, NULL);
		uint32_t L_14 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)1641109293)))^((int32_t)2019660001)));
		goto IL_0015;
	}

IL_009b:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.NativeAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdClient_add_OnPaidEvent_m70D9951267A97A7D14FF6D684A591A8ED1AF3CA2 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1938279039);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-864420901)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0029:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_3 = (&__this->___OnPaidEvent_4);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_3, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_10)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ((int32_t)-1938279039);
		G_B7_0 = L_11;
		G_B7_1 = L_11;
		goto IL_0056;
	}

IL_0050:
	{
		int32_t L_12 = ((int32_t)-640356664);
		G_B7_0 = L_12;
		G_B7_1 = L_12;
	}

IL_0056:
	{
		G_B2_0 = G_B7_1;
		goto IL_000c;
	}

IL_0059:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.NativeAdClient::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdClient_remove_OnPaidEvent_m2D04EEABF06CA069C5998CC47C2D81254DAC17FC (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-853506838);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-721469977)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_3 = (&__this->___OnPaidEvent_4);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_3, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		G_B2_0 = ((int32_t)-1501284019);
		goto IL_000c;
	}

IL_004f:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-1057610367);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-802729864);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-897858523)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// GoogleMobileAds.Common.INativeAdInteractionHandlerClient GoogleMobileAds.Android.NativeAdClient::GetInteractionHandlerClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeAdClient_GetInteractionHandlerClient_m671874DD690B9AE29E820FC9379C7F5C1BD162BA (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* L_0 = __this->___interactionHandlerClient_6;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Android.NativeAdClient::GetMainImageURLs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* NativeAdClient_GetMainImageURLs_m9BCA7508CCF497DE097D78E79BD35941C5F57F5C (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint32_t V_5 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05(((int32_t)507123370), U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_0 = L_3;
		String_t* L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = Json_Deserialize_m1823918610311F093CBF1E0C77B52C348008763B(L_4, NULL);
		V_1 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)IsInstClass((RuntimeObject*)L_5, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var));
	}

IL_0028:
	{
		G_B2_0 = ((int32_t)1358992277);
	}

IL_002d:
	{
		int32_t L_6 = ((int32_t)(G_B2_0^((int32_t)233013455)));
		V_5 = L_6;
		switch (((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0061;
			}
			case 2:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_004b:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_7, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_2 = L_7;
		uint32_t L_8 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-1207118185)))^((int32_t)139349395)));
		goto IL_002d;
	}

IL_0061:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = V_1;
		NullCheck(L_9);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_10;
		L_10 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_9, List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		V_4 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c9:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_4), Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ad_1;
			}

IL_006b_1:
			{
				G_B8_0 = ((int32_t)1629330850);
			}

IL_0070_1:
			{
				int32_t L_11 = ((int32_t)(G_B8_0^((int32_t)233013455)));
				V_5 = L_11;
				switch (((int32_t)((uint32_t)(int32_t)L_11%(uint32_t)(int32_t)4)))
				{
					case 0:
					{
						goto IL_00ad_1;
					}
					case 1:
					{
						goto IL_0092_1;
					}
					case 2:
					{
						goto IL_00c7_1;
					}
					case 3:
					{
						goto IL_006b_1;
					}
				}
			}
			{
				goto IL_00c7_1;
			}

IL_0092_1:
			{
				RuntimeObject* L_12;
				L_12 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_4), Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
				V_3 = L_12;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = V_2;
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				String_t* L_15;
				L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
				NullCheck(L_13);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				G_B8_0 = ((int32_t)605973327);
				goto IL_0070_1;
			}

IL_00ad_1:
			{
				bool L_16;
				L_16 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_4), Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00be_1;
				}
			}
			{
				int32_t L_17 = ((int32_t)1556161997);
				G_B14_0 = L_17;
				G_B14_1 = L_17;
				goto IL_00c4_1;
			}

IL_00be_1:
			{
				int32_t L_18 = ((int32_t)1629330850);
				G_B14_0 = L_18;
				G_B14_1 = L_18;
			}

IL_00c4_1:
			{
				G_B8_0 = G_B14_1;
				goto IL_0070_1;
			}

IL_00c7_1:
			{
				goto IL_00d7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d7:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = V_2;
		return L_19;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetIconURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetIconURL_mA728A5662CE540D685A7A253E5039CFA2A5FE42E (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05(((int32_t)1975908569), U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetAdChoicesLogoURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetAdChoicesLogoURL_mD550F9C08670BC166B4A1FBD9E507F4200BC6430 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656(((int32_t)-2039381878), U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.Double GoogleMobileAds.Android.NativeAdClient::GetStarRating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeAdClient_GetStarRating_m62F8B9AA55A697F5C5BFF1992D1905C0B6218109 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656(((int32_t)1196550576), U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		double L_3;
		L_3 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_0, L_1, L_2, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetHeadline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetHeadline_m5F7D25749338CBC20783AB0E73418D353C88DE6B (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B(((int32_t)-1808785029), U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetBody_mF182ABB2824C766441C71B36C42D2AD3FA2A108B (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05(((int32_t)-956961406), U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetCallToAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetCallToAction_m7F434ACB9919EDA0D1C21131C717A3FA72702CAC (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23(((int32_t)1543246124), U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetAdvertiser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetAdvertiser_m88DC3EB47B937743B6694F18D01E97879EC53ABD (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05(((int32_t)1452541514), U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetPrice_mE2F14D0C6F44766CAEC9E52ABD581F2FF6AC2A2E (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23(((int32_t)1956496474), U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetStore_m8928D674EECA0B8F3BD2D4FE3A0D2241CE25A141 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23(((int32_t)-2076903175), U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::MediationAdapterClassName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_MediationAdapterClassName_m1261DDCFD282B812DDC8AE2C585AB7F6DF560C33 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0(((int32_t)1647851605), U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Android.NativeAdClient::GetResponseInfoClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeAdClient_GetResponseInfoClient_m11DF476D9D021A1AA18FDFB920118AFC4D5B132D (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E* L_1 = (ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E*)il2cpp_codegen_object_new(ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ResponseInfoClient__ctor_mB3010C36F05A40A73A03FC081FBBD7A15C528EDC(L_1, 1, L_0, NULL);
		return L_1;
	}
}
// System.Void GoogleMobileAds.Android.NativeAdClient::onPaidEvent(System.Int32,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdClient_onPaidEvent_m7F71EC002964B977E9CC6B0BAC9BAC76CFBC3B50 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, int32_t ___precision0, int64_t ___valueInMicros1, String_t* ___currencyCode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* V_0 = NULL;
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* V_1 = NULL;
	AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* V_2 = NULL;
	AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* V_3 = NULL;
	uint32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_4;
		if (!L_0)
		{
			goto IL_0116;
		}
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)1471604328);
	}

IL_0010:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1849376688)));
		V_4 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0077;
			}
			case 1:
			{
				goto IL_00a3;
			}
			case 2:
			{
				goto IL_000b;
			}
			case 3:
			{
				goto IL_00c3;
			}
			case 4:
			{
				goto IL_0116;
			}
			case 5:
			{
				goto IL_00fc;
			}
			case 6:
			{
				goto IL_00e3;
			}
			case 7:
			{
				goto IL_004e;
			}
			case 8:
			{
				goto IL_0089;
			}
			case 9:
			{
				goto IL_0065;
			}
		}
	}
	{
		goto IL_0116;
	}

IL_004e:
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_2 = V_1;
		String_t* L_3 = ___currencyCode2;
		NullCheck(L_2);
		AdValue_set_CurrencyCode_mA493466D946C6484F0F20604EF0B013EA0571F71_inline(L_2, L_3, NULL);
		uint32_t L_4 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-1414164681)))^((int32_t)-1565863092)));
		goto IL_0010;
	}

IL_0065:
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_5 = V_1;
		V_0 = L_5;
		uint32_t L_6 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)177025755)))^((int32_t)267421042)));
		goto IL_0010;
	}

IL_0077:
	{
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_7 = V_3;
		V_2 = L_7;
		uint32_t L_8 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)1606698372)))^((int32_t)2052627593)));
		goto IL_0010;
	}

IL_0089:
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_9 = V_1;
		int64_t L_10 = ___valueInMicros1;
		NullCheck(L_9);
		AdValue_set_Value_m7DF76A9D4ED62FE1F5FDBA6FEBBACD4E92115BE9_inline(L_9, L_10, NULL);
		uint32_t L_11 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)-1247624512)))^((int32_t)-885684033)));
		goto IL_0010;
	}

IL_00a3:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_12 = __this->___OnPaidEvent_4;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_13 = V_2;
		NullCheck(L_12);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_12, __this, L_13, NULL);
		uint32_t L_14 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-448162886)))^((int32_t)-1455560710)));
		goto IL_0010;
	}

IL_00c3:
	{
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_15 = (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D*)il2cpp_codegen_object_new(AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		AdValueEventArgs__ctor_m2786F476E77E35470958434534FA8976541ED4E0(L_15, NULL);
		V_3 = L_15;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_16 = V_3;
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_17 = V_0;
		NullCheck(L_16);
		AdValueEventArgs_set_AdValue_mFDB2656F4BDBCC3CE719341385666747D72F357E_inline(L_16, L_17, NULL);
		uint32_t L_18 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)-526199639)))^((int32_t)-53167801)));
		goto IL_0010;
	}

IL_00e3:
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_19 = (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD*)il2cpp_codegen_object_new(AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		AdValue__ctor_mC8469F36ABE33454B249EBBA51574A1CFAC01010(L_19, NULL);
		V_1 = L_19;
		uint32_t L_20 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)1012687243)))^((int32_t)-655913357)));
		goto IL_0010;
	}

IL_00fc:
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_21 = V_1;
		int32_t L_22 = ___precision0;
		NullCheck(L_21);
		AdValue_set_Precision_m488B0F9CAEBACDD5013E094660C3DD58B362FD03_inline(L_21, L_22, NULL);
		uint32_t L_23 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)-1599490100)))^((int32_t)-1077407266)));
		goto IL_0010;
	}

IL_0116:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Android.NativeAdInteractionHandlerClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdInteractionHandlerClient__ctor_mBBCE221D0C939EAF772625836F672623C4115DFE (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B(((int32_t)918773182), U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, L_0, NULL);
		V_0 = L_1;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
		String_t* L_3;
		L_3 = U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0(((int32_t)-1982044754), U3CModuleU3E_U206EU200CU206FU206EU200BU202CU202DU202BU206EU200EU202AU200EU200DU206AU206AU206CU206BU206AU202DU206EU200EU206EU200CU200EU206CU206EU206FU206DU202EU206AU206AU200CU202CU206BU200BU200EU202AU202CU206AU202EU202E_TisString_t_mC3C150D73DFEB298D95FE994E5DCA07169C85FC0_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_2, L_3, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_4;
		String_t* L_5;
		L_5 = U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B(((int32_t)-1404417192), U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = p0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_11, L_5, L_9, NULL);
		__this->____KDd3vcyJ52DGIXoEGYjTW347hRb_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____KDd3vcyJ52DGIXoEGYjTW347hRb_1), (void*)L_11);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12;
		L_12 = NativeAdInteractionHandlerClient__rEYLGE9n17QTNLVYjnxdu95cgKe_m56976C1B0C3124CD18810627EF7E8CAC1AC0A243(__this, NULL);
		__this->___assetIDMappings_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___assetIDMappings_0), (void*)L_12);
		return;
	}
}
// System.Boolean GoogleMobileAds.Android.NativeAdInteractionHandlerClient::RecordImpression(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeAdInteractionHandlerClient_RecordImpression_mD42E2EB34B73D6C0ACCCB490D8C697D5DEED2385 (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___signal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____KDd3vcyJ52DGIXoEGYjTW347hRb_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656(((int32_t)-526456084), U3CModuleU3E_U206DU202CU202EU202DU206CU206CU202EU202DU206AU206CU202EU202EU200CU206DU206CU206BU202EU206AU206CU202AU202BU206BU202BU206AU200EU206BU206EU202DU206AU202EU200DU202DU206CU202BU200DU206FU206CU206AU202BU206CU202E_TisString_t_mA340BCB7F860024C1904F953F6E8223375193656_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___signal0;
		String_t* L_5;
		L_5 = Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		bool L_6;
		L_6 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, L_1, L_3, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void GoogleMobileAds.Android.NativeAdInteractionHandlerClient::PerformClick(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdInteractionHandlerClient_PerformClick_mC4E832372C19CD28465B8E2B6BFC8B387DD4BB03 (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___signal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____KDd3vcyJ52DGIXoEGYjTW347hRb_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23(((int32_t)-52449184), U3CModuleU3E_U200EU206FU206FU202BU200FU206BU206FU202BU202CU206EU200BU200DU202CU206EU202CU200CU206AU200FU206EU202EU200DU206CU202EU200FU200CU202DU200DU200FU200EU202BU206BU200CU200EU202BU206CU202BU200FU206BU200EU202AU202E_TisString_t_m33EAAC4ECA642FE750730AAE3CA20FD221D39D23_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___signal0;
		String_t* L_5;
		L_5 = Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Android.NativeAdInteractionHandlerClient::ReportTouchEvent(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdInteractionHandlerClient_ReportTouchEvent_m57DFD007DBF560986578EC4E79F663DBE0F4C1FA (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___signal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____KDd3vcyJ52DGIXoEGYjTW347hRb_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B(((int32_t)-844078322), U3CModuleU3E_U202EU200CU200EU206DU202EU206BU206DU202CU202CU206DU200DU200FU200EU206DU200EU206BU200BU202DU200BU200DU202CU200DU202EU200CU202AU206FU200BU206EU202BU200CU200DU200CU206AU202DU200BU200BU200EU202BU200DU200FU202E_TisString_t_m752525A46924FF46364305FB674321EDAA21EF6B_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ___signal0;
		String_t* L_5;
		L_5 = Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Android.NativeAdInteractionHandlerClient::_rEYLGE9n17QTNLVYjnxdu95cgKe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NativeAdInteractionHandlerClient__rEYLGE9n17QTNLVYjnxdu95cgKe_m56976C1B0C3124CD18810627EF7E8CAC1AC0A243 (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____KDd3vcyJ52DGIXoEGYjTW347hRb_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05(((int32_t)-958304384), U3CModuleU3E_U202CU200CU202BU206FU200DU206FU206FU200BU206CU206AU200CU200CU202CU206FU206EU202BU206AU202AU200EU206BU200FU200FU202AU202AU200BU200EU200EU202BU206CU206FU200FU202EU202EU200CU206EU200CU202CU200DU206BU206BU202E_TisString_t_m18DF4A0A10A79E41DB07A119614871197C1E1C05_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_0 = L_3;
		String_t* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5;
		L_5 = NativeUtils_CastAssetIDMappings_m7E3C8BCCFD5A11C1B344838C26028076B70D52C2(L_4, NULL);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Android.NativeAdInteractionHandlerClient::GetAssetIDMappings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NativeAdInteractionHandlerClient_GetAssetIDMappings_m5192544E845B3DA15D0F7D2CF1C53248F25362E7 (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___assetIDMappings_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void _jCmAeLMJfKd8jd5YpiShicMETGo._VJ3aRasocSrnjM7pn82beIEZwsFb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _VJ3aRasocSrnjM7pn82beIEZwsFb__ctor_mD66DE4145E1D06E4854DDFDBDA619EFD39ED8233 (_VJ3aRasocSrnjM7pn82beIEZwsFb_t8DF3B09DD2D62AB0E68AD5842D26A26F700491F6* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdLoaderClientArgs_get_AdUnitId_m9CB2CEDA6950AE81735C721A64024FEE084C1095_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAdUnitIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* AdLoaderClientArgs_get_AdTypes_m3286F08DA89AEF0941C3580385F858CE95635BD4_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) 
{
	{
		HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* L_0 = __this->___U3CAdTypesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdLoaderClientArgs_get_NumberOfAdsToLoad_m16518458445D87FF740EE67FB2117837684591E0_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNumberOfAdsToLoadU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* AdLoaderClientArgs_get_FormatIds_m6731C0FF425BE0CC73D07B3C07A81D5A5C33CF4A_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_0 = __this->___U3CFormatIdsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NativeUtils_get_Version_mB8F63B5B552D940B0351BE63FA0ED6E4B93B04D2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_StaticFields*)il2cpp_codegen_static_fields_for(NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var))->___U3CVersionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeClientEventArgs_set_nativeAdClient_mCEDBB0459BE0B3E308DA85F15E98E31D740B97FA_inline (NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CnativeAdClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnativeAdClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_nativeAdClient_m7C4578E96709771F4B4E26B0EF01FD72C1CF0E75_inline (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CnativeAdClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnativeAdClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_assetName_m0FFF03346E29AB4599BEB94FD9E2CB5BD6D163C4_inline (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CassetNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadAdErrorClientEventArgs_set_LoadAdErrorClient_m6E865CB1B347CEF0B75F55CE43EE3FDBF8353353_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CLoadAdErrorClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_CurrencyCode_mA493466D946C6484F0F20604EF0B013EA0571F71_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCurrencyCodeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrencyCodeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_Value_m7DF76A9D4ED62FE1F5FDBA6FEBBACD4E92115BE9_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValueEventArgs_set_AdValue_mFDB2656F4BDBCC3CE719341385666747D72F357E_inline (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* __this, AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___value0, const RuntimeMethod* method) 
{
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_0 = ___value0;
		__this->___U3CAdValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_Precision_m488B0F9CAEBACDD5013E094660C3DD58B362FD03_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPrecisionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 Enumerator_get_Current_m90E0638FF1812FE1DDE8D13CC607F4CD161D12C1_gshared_inline (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_0 = (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
