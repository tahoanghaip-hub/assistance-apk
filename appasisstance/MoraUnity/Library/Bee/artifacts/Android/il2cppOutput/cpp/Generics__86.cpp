#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};

struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
struct Func_2_t2CE9CF6B6D656400D4AE5F9CC8F51C20AC58C01E;
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E;
struct Func_2_t73A73AA4A0829DB21A794620CC6C7EB8C599FF58;
struct Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9;
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E;
struct Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9;
struct Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A;
struct Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F;
struct Func_2_t00786BFD69673C3C27527226B00C613391D00E99;
struct Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C;
struct Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F;
struct Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E;
struct Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F;
struct Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6;
struct Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456;
struct Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8;
struct Func_2_tFED808C0C6F1FAC716A3FD86869676A6CD7CC61F;
struct IEnumerable_1_t7E13FCC61B2DB26146CA569CB146A0200C4618D1;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
struct IEnumerable_1_t66693F4DBB0D041E98F3E5B512646DB3DDA16165;
struct IEnumerable_1_t6C47A8FE62321E6AD75C312B8549AFD2B13F0591;
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
struct IEnumerable_1_tD5C0FD17E45BB16A64310D831E29C350A184590F;
struct IEnumerable_1_t610F187425D60221CA339A5EEFEA3D2F094C1977;
struct IEnumerable_1_t944A02BD290549583B3B5FCE1ACCCD95B6B6DA76;
struct IEnumerator_1_t9EBA015A0670545A091B6BE5A51191A69DD0F5EB;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t736E9F8BD2FD38A5E9EA2E8A510AFED788D05010;
struct IEnumerator_1_tF11FFC07A7812C75277D92E50730157B3FA8A66A;
struct IEnumerator_1_tC0C08C9659581E6A592DEEC8CEE4A412A400B773;
struct IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E;
struct IEnumerator_1_t1DC9BF0C441509977AE52846CAE10D10A21C5FE0;
struct IEnumerator_1_t4D160F5614E249A0DFF732968FCD0B57F6281120;
struct IEnumerator_1_t3ED3DAF423C46B10B12EBF803A1CD567F6CABF6F;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79;
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
struct Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E;
struct Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC;
struct Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC;
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E;
struct Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E;
struct Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7;
struct Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1;
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227;
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
struct WhereEnumerableIterator_1_t61CCD2765BBB4FACFBAAE707CB7797DE09B60FAA;
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4;
struct WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C;
struct WhereEnumerableIterator_1_tA27B9CCED290F403981541DD2C3641FAE3615593;
struct WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75;
struct WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E;
struct WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9;
struct WhereEnumerableIterator_1_tE1F2D0943F001D193CBD66EC03EE49EF1F74C238;
struct WhereEnumerableIterator_1_tFFD009E2C8FC5C33F98782D5F007158567054CFA;
struct WhereSelectListIterator_2_tB98A8C768D1975BA2C6C8F23D08934366EBF9A20;
struct WhereSelectListIterator_2_tA17D598A202473642F20E18465D57849B0E9C245;
struct WhereSelectListIterator_2_t55DE1A9ADD0D66F254DC79712CF8A80BDED6D603;
struct WhereSelectListIterator_2_t18E223AD78F1682B0FD97ACD62F09975BC7ADF30;
struct WhereSelectListIterator_2_t389B303AF396D91ED883A9A6198C3585B10177AA;
struct WhereSelectListIterator_2_t28CD76B23A23B8276CDA52D7581055898929DA96;
struct WhereSelectListIterator_2_t7039631002CB164ABA3C969FC2A3A38B047BD3E6;
struct WhereSelectListIterator_2_t694BAF750EC9DBB0B39A032E5FAB637B0C393847;
struct WhereSelectListIterator_2_t72ADC3642311784807D9D2152A7216D570D04907;
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50;
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C;
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108;
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95;
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539;
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388;
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A;
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD;
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
struct RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668;
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys;
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values;
	RuntimeObject* ____syncRoot;
};
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	RuntimeObject* ___current;
};
struct Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	float ___current;
};
struct List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227  : public RuntimeObject
{
	RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer;
};
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	RuntimeObject* ____value;
};
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	RuntimeObject* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	RuntimeObject* ___source;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate;
	RuntimeObject* ___enumerator;
};
typedef Il2CppFullySharedGenericStruct fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	bool ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors;
	String_t* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors;
	char* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors;
	Il2CppChar* ___VersionString;
	Type_t* ___ModelType;
};
struct Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___current;
};
struct Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current;
};
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current;
};
struct Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___current;
};
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A 
{
	bool ____hasValue;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____value;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FirstPersonFlag_tA3F69A61BD7FBAF3A2E0B32289BA11E3A9B05ED0 
{
	int32_t ___value__;
};
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction;
};
struct Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Origin;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Direction;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 
{
	String_t* ___name;
	String_t* ___parentName;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale;
};
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke
{
	char* ___name;
	char* ___parentName;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale;
};
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___parentName;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale;
};
struct fsDataType_t4DDBD7DB585B530CF852D23D5FF4D9801DDE4A16 
{
	int32_t ___value__;
};
struct Collider_t528FDC569C44FB8AD2200EF050B7793EB00C6187 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____offsetInWorld;
	float ____radiusMultLossyScale;
};
struct Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 ___current;
};
struct Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Collider_t528FDC569C44FB8AD2200EF050B7793EB00C6187 ___current;
};
struct WhereEnumerableIterator_1_t61CCD2765BBB4FACFBAAE707CB7797DE09B60FAA  : public Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79
{
	RuntimeObject* ___source;
	Func_2_t2CE9CF6B6D656400D4AE5F9CC8F51C20AC58C01E* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75  : public Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC
{
	RuntimeObject* ___source;
	Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	RuntimeObject* ___source;
	Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9  : public Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E
{
	RuntimeObject* ___source;
	Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate;
	RuntimeObject* ___enumerator;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___Renderer;
	int32_t ___FirstPersonFlag;
};
struct RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2_marshaled_pinvoke
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___Renderer;
	int32_t ___FirstPersonFlag;
};
struct RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2_marshaled_com
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___Renderer;
	int32_t ___FirstPersonFlag;
};
struct Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 
{
	List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ____list;
	int32_t ____index;
	int32_t ____version;
	RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ____current;
};
struct Func_2_t2CE9CF6B6D656400D4AE5F9CC8F51C20AC58C01E  : public MulticastDelegate_t
{
};
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E  : public MulticastDelegate_t
{
};
struct Func_2_t73A73AA4A0829DB21A794620CC6C7EB8C599FF58  : public MulticastDelegate_t
{
};
struct Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9  : public MulticastDelegate_t
{
};
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E  : public MulticastDelegate_t
{
};
struct Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9  : public MulticastDelegate_t
{
};
struct Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A  : public MulticastDelegate_t
{
};
struct Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F  : public MulticastDelegate_t
{
};
struct Func_2_t00786BFD69673C3C27527226B00C613391D00E99  : public MulticastDelegate_t
{
};
struct Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C  : public MulticastDelegate_t
{
};
struct Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F  : public MulticastDelegate_t
{
};
struct Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E  : public MulticastDelegate_t
{
};
struct Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F  : public MulticastDelegate_t
{
};
struct Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6  : public MulticastDelegate_t
{
};
struct Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456  : public MulticastDelegate_t
{
};
struct Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8  : public MulticastDelegate_t
{
};
struct Func_2_tFED808C0C6F1FAC716A3FD86869676A6CD7CC61F  : public MulticastDelegate_t
{
};
struct Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___current;
};
struct WhereEnumerableIterator_1_tA27B9CCED290F403981541DD2C3641FAE3615593  : public Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC
{
	RuntimeObject* ___source;
	Func_2_t73A73AA4A0829DB21A794620CC6C7EB8C599FF58* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_tFFD009E2C8FC5C33F98782D5F007158567054CFA  : public Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1
{
	RuntimeObject* ___source;
	Func_2_tFED808C0C6F1FAC716A3FD86869676A6CD7CC61F* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234  : public MulticastDelegate_t
{
};
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1  : public MulticastDelegate_t
{
};
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D  : public MulticastDelegate_t
{
};
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7  : public MulticastDelegate_t
{
};
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789  : public MulticastDelegate_t
{
};
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0  : public MulticastDelegate_t
{
};
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8  : public MulticastDelegate_t
{
};
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct WhereEnumerableIterator_1_tE1F2D0943F001D193CBD66EC03EE49EF1F74C238  : public Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7
{
	RuntimeObject* ___source;
	Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereSelectListIterator_2_tB98A8C768D1975BA2C6C8F23D08934366EBF9A20  : public Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79
{
	List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___source;
	Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___predicate;
	Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F* ___selector;
	Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 ___enumerator;
};
struct WhereSelectListIterator_2_tA17D598A202473642F20E18465D57849B0E9C245  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___source;
	Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___predicate;
	Func_2_t00786BFD69673C3C27527226B00C613391D00E99* ___selector;
	Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 ___enumerator;
};
struct WhereSelectListIterator_2_t55DE1A9ADD0D66F254DC79712CF8A80BDED6D603  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___source;
	Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___predicate;
	Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C* ___selector;
	Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 ___enumerator;
};
struct WhereSelectListIterator_2_t18E223AD78F1682B0FD97ACD62F09975BC7ADF30  : public Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC
{
	List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___source;
	Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___predicate;
	Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F* ___selector;
	Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 ___enumerator;
};
struct WhereSelectListIterator_2_t389B303AF396D91ED883A9A6198C3585B10177AA  : public Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC
{
	List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___source;
	Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___predicate;
	Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E* ___selector;
	Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 ___enumerator;
};
struct WhereSelectListIterator_2_t28CD76B23A23B8276CDA52D7581055898929DA96  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___source;
	Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___predicate;
	Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F* ___selector;
	Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 ___enumerator;
};
struct WhereSelectListIterator_2_t7039631002CB164ABA3C969FC2A3A38B047BD3E6  : public Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E
{
	List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___source;
	Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___predicate;
	Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6* ___selector;
	Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 ___enumerator;
};
struct WhereSelectListIterator_2_t694BAF750EC9DBB0B39A032E5FAB637B0C393847  : public Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7
{
	List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___source;
	Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___predicate;
	Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456* ___selector;
	Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 ___enumerator;
};
struct WhereSelectListIterator_2_t72ADC3642311784807D9D2152A7216D570D04907  : public Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1
{
	List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___source;
	Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___predicate;
	Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8* ___selector;
	Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 ___enumerator;
};
struct List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227_StaticFields
{
	RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success;
};
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_StaticFields
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___Empty;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mD3E2B12ABDBA5E18509C271AD17E6D34AD8B6D27_gshared (Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF6F9F1439DBCD57A4C5ACAC454620558D0516417_gshared (WhereSelectListIterator_2_tB98A8C768D1975BA2C6C8F23D08934366EBF9A20* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 List_1_GetEnumerator_m674552D45E8C805A704D9870F5771DA3C846965A_gshared (List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 Enumerator_get_Current_mB96D99A5E50ACA0BBA98019D7B3F63DF436E6C76_gshared_inline (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mF178D0B153B1E5E19B02F26CB9553B03042014BC_gshared_inline (Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Func_2_Invoke_mBD93CA50FC0E27592E4105BF5DCD64AD71BBE964_gshared_inline (Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D048AF0D27A25DA77E20F7346D3D52AE3FD8B49_gshared (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mDAC8400E4B6D6E0D003B587494C8C8E503C6725C_gshared (WhereEnumerableIterator_1_t61CCD2765BBB4FACFBAAE707CB7797DE09B60FAA* __this, RuntimeObject* ___0_source, Func_2_t2CE9CF6B6D656400D4AE5F9CC8F51C20AC58C01E* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mC168E9657E3C82C2EC70797677CF6E6CBDE08EF9_gshared (WhereSelectListIterator_2_tA17D598A202473642F20E18465D57849B0E9C245* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t00786BFD69673C3C27527226B00C613391D00E99* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mF5CFF21A242251CC15F6B72BAD7B5992B152ACAC_gshared_inline (Func_2_t00786BFD69673C3C27527226B00C613391D00E99* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF_gshared (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m805AC50C067B5903068828D3F1C542C5EEE005EE_gshared (WhereSelectListIterator_2_t55DE1A9ADD0D66F254DC79712CF8A80BDED6D603* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_mD6C90F869A03C9C8E44E04A9C59676876DA4C015_gshared_inline (Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984_gshared (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* __this, RuntimeObject* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m4245AE51B46A4B30C2599F58B1C8A36A579E1966_gshared (Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m511ECB9458C03D4B3F203E47CCDCCE35B544D450_gshared (WhereSelectListIterator_2_t18E223AD78F1682B0FD97ACD62F09975BC7ADF30* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 Func_2_Invoke_m86CCB0333A1B7B9E5BD193F2A6A1EB0CA882B539_gshared_inline (Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m599214A24AA9F6FAD3FD9D88FBB6A91B376C5762_gshared (WhereEnumerableIterator_1_tA27B9CCED290F403981541DD2C3641FAE3615593* __this, RuntimeObject* ___0_source, Func_2_t73A73AA4A0829DB21A794620CC6C7EB8C599FF58* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD_gshared (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8EBC7B79A5C4EF9A572DE639B49A72258DD1B278_gshared (WhereSelectListIterator_2_t389B303AF396D91ED883A9A6198C3585B10177AA* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_m20B724FD05CDC0D492394DF25AA0E9AE39781098_gshared_inline (Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A_gshared (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75* __this, RuntimeObject* ___0_source, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF_gshared (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2D5DA8039C2D9FEE4553AA4289DAB5BE77829C0C_gshared (WhereSelectListIterator_2_t28CD76B23A23B8276CDA52D7581055898929DA96* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m0B5DDB1D600FBB9F16994F45692B0B7A6CD22C98_gshared_inline (Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023_gshared (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* __this, RuntimeObject* ___0_source, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D_gshared (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mBC80BA7B932D27AC8090A408602DB6ECFDE09122_gshared (WhereSelectListIterator_2_t7039631002CB164ABA3C969FC2A3A38B047BD3E6* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m0B1EAE6A50232923AF6B9F2A4D80D4A9654A6125_gshared_inline (Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB_gshared (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* __this, RuntimeObject* ___0_source, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m2A1DADD2EABFC792646FACEFCFFE750203037C55_gshared (Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m3F6779C508E2959C4F3AAFB4599F6F2536740E95_gshared (WhereSelectListIterator_2_t694BAF750EC9DBB0B39A032E5FAB637B0C393847* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 Func_2_Invoke_m62CF226E58C712255CFE6A8D2ABC9A5E74B2A427_gshared_inline (Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m3E3B9AEFBC06A412E0A204E2EE25DBC769F92FBE_gshared (WhereEnumerableIterator_1_tE1F2D0943F001D193CBD66EC03EE49EF1F74C238* __this, RuntimeObject* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mF02E0565E5AEB9FEBE7985ED7A60920C59FF2DCD_gshared (Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m164A221B02A2F9343A24F56C83EDD495BAB55941_gshared (WhereSelectListIterator_2_t72ADC3642311784807D9D2152A7216D570D04907* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collider_t528FDC569C44FB8AD2200EF050B7793EB00C6187 Func_2_Invoke_m4EC177E1EF5DD9138DA087022BC62C5E48BABA9E_gshared_inline (Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mFB14237E541A6979504F2AAE0ECC76086D5610A1_gshared (WhereEnumerableIterator_1_tFFD009E2C8FC5C33F98782D5F007158567054CFA* __this, RuntimeObject* ___0_source, Func_2_tFED808C0C6F1FAC716A3FD86869676A6CD7CC61F* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) ;

inline void Iterator_1__ctor_mD3E2B12ABDBA5E18509C271AD17E6D34AD8B6D27 (Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79*, const RuntimeMethod*))Iterator_1__ctor_mD3E2B12ABDBA5E18509C271AD17E6D34AD8B6D27_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mF6F9F1439DBCD57A4C5ACAC454620558D0516417 (WhereSelectListIterator_2_tB98A8C768D1975BA2C6C8F23D08934366EBF9A20* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB98A8C768D1975BA2C6C8F23D08934366EBF9A20*, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227*, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A*, Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mF6F9F1439DBCD57A4C5ACAC454620558D0516417_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 List_1_GetEnumerator_m674552D45E8C805A704D9870F5771DA3C846965A (List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 (*) (List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227*, const RuntimeMethod*))List_1_GetEnumerator_m674552D45E8C805A704D9870F5771DA3C846965A_gshared)(__this, method);
}
inline RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 Enumerator_get_Current_mB96D99A5E50ACA0BBA98019D7B3F63DF436E6C76_inline (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* __this, const RuntimeMethod* method)
{
	return ((  RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 (*) (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*, const RuntimeMethod*))Enumerator_get_Current_mB96D99A5E50ACA0BBA98019D7B3F63DF436E6C76_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_mF178D0B153B1E5E19B02F26CB9553B03042014BC_inline (Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*))Func_2_Invoke_mF178D0B153B1E5E19B02F26CB9553B03042014BC_gshared_inline)(__this, ___0_arg, method);
}
inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Func_2_Invoke_mBD93CA50FC0E27592E4105BF5DCD64AD71BBE964_inline (Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 (*) (Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*))Func_2_Invoke_mBD93CA50FC0E27592E4105BF5DCD64AD71BBE964_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m8D048AF0D27A25DA77E20F7346D3D52AE3FD8B49 (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*, const RuntimeMethod*))Enumerator_MoveNext_m8D048AF0D27A25DA77E20F7346D3D52AE3FD8B49_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_mDAC8400E4B6D6E0D003B587494C8C8E503C6725C (WhereEnumerableIterator_1_t61CCD2765BBB4FACFBAAE707CB7797DE09B60FAA* __this, RuntimeObject* ___0_source, Func_2_t2CE9CF6B6D656400D4AE5F9CC8F51C20AC58C01E* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t61CCD2765BBB4FACFBAAE707CB7797DE09B60FAA*, RuntimeObject*, Func_2_t2CE9CF6B6D656400D4AE5F9CC8F51C20AC58C01E*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mDAC8400E4B6D6E0D003B587494C8C8E503C6725C_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63 (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mC168E9657E3C82C2EC70797677CF6E6CBDE08EF9 (WhereSelectListIterator_2_tA17D598A202473642F20E18465D57849B0E9C245* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t00786BFD69673C3C27527226B00C613391D00E99* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tA17D598A202473642F20E18465D57849B0E9C245*, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227*, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A*, Func_2_t00786BFD69673C3C27527226B00C613391D00E99*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mC168E9657E3C82C2EC70797677CF6E6CBDE08EF9_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mF5CFF21A242251CC15F6B72BAD7B5992B152ACAC_inline (Func_2_t00786BFD69673C3C27527226B00C613391D00E99* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t00786BFD69673C3C27527226B00C613391D00E99*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*))Func_2_Invoke_mF5CFF21A242251CC15F6B72BAD7B5992B152ACAC_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01 (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m805AC50C067B5903068828D3F1C542C5EEE005EE (WhereSelectListIterator_2_t55DE1A9ADD0D66F254DC79712CF8A80BDED6D603* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t55DE1A9ADD0D66F254DC79712CF8A80BDED6D603*, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227*, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A*, Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m805AC50C067B5903068828D3F1C542C5EEE005EE_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline float Func_2_Invoke_mD6C90F869A03C9C8E44E04A9C59676876DA4C015_inline (Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  float (*) (Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*))Func_2_Invoke_mD6C90F869A03C9C8E44E04A9C59676876DA4C015_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984 (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* __this, RuntimeObject* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*, RuntimeObject*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m4245AE51B46A4B30C2599F58B1C8A36A579E1966 (Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC*, const RuntimeMethod*))Iterator_1__ctor_m4245AE51B46A4B30C2599F58B1C8A36A579E1966_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m511ECB9458C03D4B3F203E47CCDCCE35B544D450 (WhereSelectListIterator_2_t18E223AD78F1682B0FD97ACD62F09975BC7ADF30* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t18E223AD78F1682B0FD97ACD62F09975BC7ADF30*, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227*, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A*, Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m511ECB9458C03D4B3F203E47CCDCCE35B544D450_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 Func_2_Invoke_m86CCB0333A1B7B9E5BD193F2A6A1EB0CA882B539_inline (Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 (*) (Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*))Func_2_Invoke_m86CCB0333A1B7B9E5BD193F2A6A1EB0CA882B539_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m599214A24AA9F6FAD3FD9D88FBB6A91B376C5762 (WhereEnumerableIterator_1_tA27B9CCED290F403981541DD2C3641FAE3615593* __this, RuntimeObject* ___0_source, Func_2_t73A73AA4A0829DB21A794620CC6C7EB8C599FF58* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tA27B9CCED290F403981541DD2C3641FAE3615593*, RuntimeObject*, Func_2_t73A73AA4A0829DB21A794620CC6C7EB8C599FF58*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m599214A24AA9F6FAD3FD9D88FBB6A91B376C5762_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*, const RuntimeMethod*))Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m8EBC7B79A5C4EF9A572DE639B49A72258DD1B278 (WhereSelectListIterator_2_t389B303AF396D91ED883A9A6198C3585B10177AA* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t389B303AF396D91ED883A9A6198C3585B10177AA*, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227*, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A*, Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m8EBC7B79A5C4EF9A572DE639B49A72258DD1B278_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_m20B724FD05CDC0D492394DF25AA0E9AE39781098_inline (Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*))Func_2_Invoke_m20B724FD05CDC0D492394DF25AA0E9AE39781098_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75* __this, RuntimeObject* ___0_source, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75*, RuntimeObject*, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*, const RuntimeMethod*))Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m2D5DA8039C2D9FEE4553AA4289DAB5BE77829C0C (WhereSelectListIterator_2_t28CD76B23A23B8276CDA52D7581055898929DA96* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t28CD76B23A23B8276CDA52D7581055898929DA96*, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227*, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A*, Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2D5DA8039C2D9FEE4553AA4289DAB5BE77829C0C_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m0B5DDB1D600FBB9F16994F45692B0B7A6CD22C98_inline (Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*))Func_2_Invoke_m0B5DDB1D600FBB9F16994F45692B0B7A6CD22C98_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023 (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* __this, RuntimeObject* ___0_source, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*, RuntimeObject*, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*, const RuntimeMethod*))Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mBC80BA7B932D27AC8090A408602DB6ECFDE09122 (WhereSelectListIterator_2_t7039631002CB164ABA3C969FC2A3A38B047BD3E6* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t7039631002CB164ABA3C969FC2A3A38B047BD3E6*, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227*, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A*, Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mBC80BA7B932D27AC8090A408602DB6ECFDE09122_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m0B1EAE6A50232923AF6B9F2A4D80D4A9654A6125_inline (Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*))Func_2_Invoke_m0B1EAE6A50232923AF6B9F2A4D80D4A9654A6125_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* __this, RuntimeObject* ___0_source, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9*, RuntimeObject*, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m2A1DADD2EABFC792646FACEFCFFE750203037C55 (Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7*, const RuntimeMethod*))Iterator_1__ctor_m2A1DADD2EABFC792646FACEFCFFE750203037C55_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m3F6779C508E2959C4F3AAFB4599F6F2536740E95 (WhereSelectListIterator_2_t694BAF750EC9DBB0B39A032E5FAB637B0C393847* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t694BAF750EC9DBB0B39A032E5FAB637B0C393847*, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227*, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A*, Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m3F6779C508E2959C4F3AAFB4599F6F2536740E95_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 Func_2_Invoke_m62CF226E58C712255CFE6A8D2ABC9A5E74B2A427_inline (Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 (*) (Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*))Func_2_Invoke_m62CF226E58C712255CFE6A8D2ABC9A5E74B2A427_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m3E3B9AEFBC06A412E0A204E2EE25DBC769F92FBE (WhereEnumerableIterator_1_tE1F2D0943F001D193CBD66EC03EE49EF1F74C238* __this, RuntimeObject* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tE1F2D0943F001D193CBD66EC03EE49EF1F74C238*, RuntimeObject*, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m3E3B9AEFBC06A412E0A204E2EE25DBC769F92FBE_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_mF02E0565E5AEB9FEBE7985ED7A60920C59FF2DCD (Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1*, const RuntimeMethod*))Iterator_1__ctor_mF02E0565E5AEB9FEBE7985ED7A60920C59FF2DCD_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m164A221B02A2F9343A24F56C83EDD495BAB55941 (WhereSelectListIterator_2_t72ADC3642311784807D9D2152A7216D570D04907* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t72ADC3642311784807D9D2152A7216D570D04907*, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227*, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A*, Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m164A221B02A2F9343A24F56C83EDD495BAB55941_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Collider_t528FDC569C44FB8AD2200EF050B7793EB00C6187 Func_2_Invoke_m4EC177E1EF5DD9138DA087022BC62C5E48BABA9E_inline (Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  Collider_t528FDC569C44FB8AD2200EF050B7793EB00C6187 (*) (Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*))Func_2_Invoke_m4EC177E1EF5DD9138DA087022BC62C5E48BABA9E_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_mFB14237E541A6979504F2AAE0ECC76086D5610A1 (WhereEnumerableIterator_1_tFFD009E2C8FC5C33F98782D5F007158567054CFA* __this, RuntimeObject* ___0_source, Func_2_tFED808C0C6F1FAC716A3FD86869676A6CD7CC61F* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tFFD009E2C8FC5C33F98782D5F007158567054CFA*, RuntimeObject*, Func_2_tFED808C0C6F1FAC716A3FD86869676A6CD7CC61F*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mFB14237E541A6979504F2AAE0ECC76086D5610A1_gshared)(__this, ___0_source, ___1_predicate, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___0_dict, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32 (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___0_a, fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1 (fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668* __this, const RuntimeMethod* method) ;
inline bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline)(__this, method);
}
inline bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, il2cppRetVal, method);
}
inline void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, Il2CppFullySharedGenericAny, const RuntimeMethod*))fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, ___0_value, method);
}
inline bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline)(__this, method);
}
inline bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared)(__this, method);
}
inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared)(__this, method);
}
inline void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared)(__this, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF6F9F1439DBCD57A4C5ACAC454620558D0516417_gshared (WhereSelectListIterator_2_tB98A8C768D1975BA2C6C8F23D08934366EBF9A20* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mD3E2B12ABDBA5E18509C271AD17E6D34AD8B6D27((Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79* WhereSelectListIterator_2_Clone_mBD5AEA054713CB7D9D015899894C67BA8C70F47F_gshared (WhereSelectListIterator_2_tB98A8C768D1975BA2C6C8F23D08934366EBF9A20* __this, const RuntimeMethod* method) 
{
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = __this->___source;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = __this->___predicate;
		Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F* L_2 = __this->___selector;
		WhereSelectListIterator_2_tB98A8C768D1975BA2C6C8F23D08934366EBF9A20* L_3 = (WhereSelectListIterator_2_tB98A8C768D1975BA2C6C8F23D08934366EBF9A20*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mF6F9F1439DBCD57A4C5ACAC454620558D0516417(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m351F8813346D2FA5CAA28AD495AA464ACCBE4293_gshared (WhereSelectListIterator_2_tB98A8C768D1975BA2C6C8F23D08934366EBF9A20* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 L_4;
		L_4 = List_1_GetEnumerator_m674552D45E8C805A704D9870F5771DA3C846965A(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___Renderer), (void*)NULL);
		#endif
		((Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_5 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_6;
		L_6 = Enumerator_get_Current_mB96D99A5E50ACA0BBA98019D7B3F63DF436E6C76_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_8 = __this->___predicate;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mF178D0B153B1E5E19B02F26CB9553B03042014BC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F* L_11 = __this->___selector;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_12 = V_1;
		NullCheck(L_11);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13;
		L_13 = Func_2_Invoke_mBD93CA50FC0E27592E4105BF5DCD64AD71BBE964_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_14 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8D048AF0D27A25DA77E20F7346D3D52AE3FD8B49(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0DCB49F4EF4F7A73B3E796C1EB698D39AB33BE79*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m7DEB250388CD429BFBD359EEDF4186F87C544CB8_gshared (WhereSelectListIterator_2_tB98A8C768D1975BA2C6C8F23D08934366EBF9A20* __this, Func_2_t2CE9CF6B6D656400D4AE5F9CC8F51C20AC58C01E* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t2CE9CF6B6D656400D4AE5F9CC8F51C20AC58C01E* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t61CCD2765BBB4FACFBAAE707CB7797DE09B60FAA* L_1 = (WhereEnumerableIterator_1_t61CCD2765BBB4FACFBAAE707CB7797DE09B60FAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mDAC8400E4B6D6E0D003B587494C8C8E503C6725C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mC168E9657E3C82C2EC70797677CF6E6CBDE08EF9_gshared (WhereSelectListIterator_2_tA17D598A202473642F20E18465D57849B0E9C245* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t00786BFD69673C3C27527226B00C613391D00E99* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t00786BFD69673C3C27527226B00C613391D00E99* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m63AE258ED0B05C72BDCA17049B5284A00C666016_gshared (WhereSelectListIterator_2_tA17D598A202473642F20E18465D57849B0E9C245* __this, const RuntimeMethod* method) 
{
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = __this->___source;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = __this->___predicate;
		Func_2_t00786BFD69673C3C27527226B00C613391D00E99* L_2 = __this->___selector;
		WhereSelectListIterator_2_tA17D598A202473642F20E18465D57849B0E9C245* L_3 = (WhereSelectListIterator_2_tA17D598A202473642F20E18465D57849B0E9C245*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mC168E9657E3C82C2EC70797677CF6E6CBDE08EF9(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m52B71A8DDCA6254A4507305F5CED58A5728B1DC6_gshared (WhereSelectListIterator_2_tA17D598A202473642F20E18465D57849B0E9C245* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 L_4;
		L_4 = List_1_GetEnumerator_m674552D45E8C805A704D9870F5771DA3C846965A(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___Renderer), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_5 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_6;
		L_6 = Enumerator_get_Current_mB96D99A5E50ACA0BBA98019D7B3F63DF436E6C76_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_8 = __this->___predicate;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mF178D0B153B1E5E19B02F26CB9553B03042014BC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t00786BFD69673C3C27527226B00C613391D00E99* L_11 = __this->___selector;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mF5CFF21A242251CC15F6B72BAD7B5992B152ACAC_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_14 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8D048AF0D27A25DA77E20F7346D3D52AE3FD8B49(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2EB5B04B7EB7B58B7948A0626361CE30FB5CD176_gshared (WhereSelectListIterator_2_tA17D598A202473642F20E18465D57849B0E9C245* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m805AC50C067B5903068828D3F1C542C5EEE005EE_gshared (WhereSelectListIterator_2_t55DE1A9ADD0D66F254DC79712CF8A80BDED6D603* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectListIterator_2_Clone_m5B43C91142E091B5B4949DB1A8CFEAD341A90C28_gshared (WhereSelectListIterator_2_t55DE1A9ADD0D66F254DC79712CF8A80BDED6D603* __this, const RuntimeMethod* method) 
{
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = __this->___source;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = __this->___predicate;
		Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C* L_2 = __this->___selector;
		WhereSelectListIterator_2_t55DE1A9ADD0D66F254DC79712CF8A80BDED6D603* L_3 = (WhereSelectListIterator_2_t55DE1A9ADD0D66F254DC79712CF8A80BDED6D603*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m805AC50C067B5903068828D3F1C542C5EEE005EE(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m003C9E1ABC1575CB3D9D814C9C5EBB6AEE59C866_gshared (WhereSelectListIterator_2_t55DE1A9ADD0D66F254DC79712CF8A80BDED6D603* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 L_4;
		L_4 = List_1_GetEnumerator_m674552D45E8C805A704D9870F5771DA3C846965A(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___Renderer), (void*)NULL);
		#endif
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_5 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_6;
		L_6 = Enumerator_get_Current_mB96D99A5E50ACA0BBA98019D7B3F63DF436E6C76_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_8 = __this->___predicate;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mF178D0B153B1E5E19B02F26CB9553B03042014BC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C* L_11 = __this->___selector;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = Func_2_Invoke_mD6C90F869A03C9C8E44E04A9C59676876DA4C015_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_14 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8D048AF0D27A25DA77E20F7346D3D52AE3FD8B49(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m8A4B497AF4A576CC94C68B1CE67F85EA3DEA5363_gshared (WhereSelectListIterator_2_t55DE1A9ADD0D66F254DC79712CF8A80BDED6D603* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m511ECB9458C03D4B3F203E47CCDCCE35B544D450_gshared (WhereSelectListIterator_2_t18E223AD78F1682B0FD97ACD62F09975BC7ADF30* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m4245AE51B46A4B30C2599F58B1C8A36A579E1966((Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC* WhereSelectListIterator_2_Clone_mDDF2B7DE56BE75AE3AA2A74BF5B7A8B517D74D7C_gshared (WhereSelectListIterator_2_t18E223AD78F1682B0FD97ACD62F09975BC7ADF30* __this, const RuntimeMethod* method) 
{
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = __this->___source;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = __this->___predicate;
		Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F* L_2 = __this->___selector;
		WhereSelectListIterator_2_t18E223AD78F1682B0FD97ACD62F09975BC7ADF30* L_3 = (WhereSelectListIterator_2_t18E223AD78F1682B0FD97ACD62F09975BC7ADF30*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m511ECB9458C03D4B3F203E47CCDCCE35B544D450(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m95A74AF930A084A0D1843C471340BF0664F95F1E_gshared (WhereSelectListIterator_2_t18E223AD78F1682B0FD97ACD62F09975BC7ADF30* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 L_4;
		L_4 = List_1_GetEnumerator_m674552D45E8C805A704D9870F5771DA3C846965A(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___Renderer), (void*)NULL);
		#endif
		((Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_5 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_6;
		L_6 = Enumerator_get_Current_mB96D99A5E50ACA0BBA98019D7B3F63DF436E6C76_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_8 = __this->___predicate;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mF178D0B153B1E5E19B02F26CB9553B03042014BC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F* L_11 = __this->___selector;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_12 = V_1;
		NullCheck(L_11);
		SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 L_13;
		L_13 = Func_2_Invoke_m86CCB0333A1B7B9E5BD193F2A6A1EB0CA882B539_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC*)__this)->___current))->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC*)__this)->___current))->___parentName), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_14 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8D048AF0D27A25DA77E20F7346D3D52AE3FD8B49(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tB1A5C67AB186AFADD5EAF432C5BAD67A7E5CF2CC*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m6CC2380F301CEBD4EB942BCCCC812B61E56F787F_gshared (WhereSelectListIterator_2_t18E223AD78F1682B0FD97ACD62F09975BC7ADF30* __this, Func_2_t73A73AA4A0829DB21A794620CC6C7EB8C599FF58* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t73A73AA4A0829DB21A794620CC6C7EB8C599FF58* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tA27B9CCED290F403981541DD2C3641FAE3615593* L_1 = (WhereEnumerableIterator_1_tA27B9CCED290F403981541DD2C3641FAE3615593*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m599214A24AA9F6FAD3FD9D88FBB6A91B376C5762(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8EBC7B79A5C4EF9A572DE639B49A72258DD1B278_gshared (WhereSelectListIterator_2_t389B303AF396D91ED883A9A6198C3585B10177AA* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC* WhereSelectListIterator_2_Clone_m250F6FF8F53E61B2B1D38927E4614890D1C8CE67_gshared (WhereSelectListIterator_2_t389B303AF396D91ED883A9A6198C3585B10177AA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = __this->___source;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = __this->___predicate;
		Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E* L_2 = __this->___selector;
		WhereSelectListIterator_2_t389B303AF396D91ED883A9A6198C3585B10177AA* L_3 = (WhereSelectListIterator_2_t389B303AF396D91ED883A9A6198C3585B10177AA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m8EBC7B79A5C4EF9A572DE639B49A72258DD1B278(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7E0C22D133CA744EE65772D274117E4FA0947C88_gshared (WhereSelectListIterator_2_t389B303AF396D91ED883A9A6198C3585B10177AA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 L_4;
		L_4 = List_1_GetEnumerator_m674552D45E8C805A704D9870F5771DA3C846965A(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___Renderer), (void*)NULL);
		#endif
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_5 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_6;
		L_6 = Enumerator_get_Current_mB96D99A5E50ACA0BBA98019D7B3F63DF436E6C76_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_8 = __this->___predicate;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mF178D0B153B1E5E19B02F26CB9553B03042014BC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E* L_11 = __this->___selector;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_12 = V_1;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Func_2_Invoke_m20B724FD05CDC0D492394DF25AA0E9AE39781098_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_14 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8D048AF0D27A25DA77E20F7346D3D52AE3FD8B49(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m95D6C114E9574F457BB0B07DBBCDFAA14DBC4405_gshared (WhereSelectListIterator_2_t389B303AF396D91ED883A9A6198C3585B10177AA* __this, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75* L_1 = (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2D5DA8039C2D9FEE4553AA4289DAB5BE77829C0C_gshared (WhereSelectListIterator_2_t28CD76B23A23B8276CDA52D7581055898929DA96* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* WhereSelectListIterator_2_Clone_m8115252F5DDDF2CED82A2AE8734C3CD10D343865_gshared (WhereSelectListIterator_2_t28CD76B23A23B8276CDA52D7581055898929DA96* __this, const RuntimeMethod* method) 
{
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = __this->___source;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = __this->___predicate;
		Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F* L_2 = __this->___selector;
		WhereSelectListIterator_2_t28CD76B23A23B8276CDA52D7581055898929DA96* L_3 = (WhereSelectListIterator_2_t28CD76B23A23B8276CDA52D7581055898929DA96*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m2D5DA8039C2D9FEE4553AA4289DAB5BE77829C0C(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mFCBDA5B607DE06D2B0C7162DC6994B03AE9CC57D_gshared (WhereSelectListIterator_2_t28CD76B23A23B8276CDA52D7581055898929DA96* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 L_4;
		L_4 = List_1_GetEnumerator_m674552D45E8C805A704D9870F5771DA3C846965A(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___Renderer), (void*)NULL);
		#endif
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_5 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_6;
		L_6 = Enumerator_get_Current_mB96D99A5E50ACA0BBA98019D7B3F63DF436E6C76_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_8 = __this->___predicate;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mF178D0B153B1E5E19B02F26CB9553B03042014BC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F* L_11 = __this->___selector;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Func_2_Invoke_m0B5DDB1D600FBB9F16994F45692B0B7A6CD22C98_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_14 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8D048AF0D27A25DA77E20F7346D3D52AE3FD8B49(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m7D6E17D780E29AD2E5A36DADE65CFFF2D48DFA03_gshared (WhereSelectListIterator_2_t28CD76B23A23B8276CDA52D7581055898929DA96* __this, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* L_1 = (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mBC80BA7B932D27AC8090A408602DB6ECFDE09122_gshared (WhereSelectListIterator_2_t7039631002CB164ABA3C969FC2A3A38B047BD3E6* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* WhereSelectListIterator_2_Clone_m269C82D4FC54ED7B85BE75485163D34D6E311EB2_gshared (WhereSelectListIterator_2_t7039631002CB164ABA3C969FC2A3A38B047BD3E6* __this, const RuntimeMethod* method) 
{
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = __this->___source;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = __this->___predicate;
		Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6* L_2 = __this->___selector;
		WhereSelectListIterator_2_t7039631002CB164ABA3C969FC2A3A38B047BD3E6* L_3 = (WhereSelectListIterator_2_t7039631002CB164ABA3C969FC2A3A38B047BD3E6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mBC80BA7B932D27AC8090A408602DB6ECFDE09122(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m1DAA5CAAFD751CBA6F98EE66C5FBB440B6E150F3_gshared (WhereSelectListIterator_2_t7039631002CB164ABA3C969FC2A3A38B047BD3E6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 L_4;
		L_4 = List_1_GetEnumerator_m674552D45E8C805A704D9870F5771DA3C846965A(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___Renderer), (void*)NULL);
		#endif
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_5 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_6;
		L_6 = Enumerator_get_Current_mB96D99A5E50ACA0BBA98019D7B3F63DF436E6C76_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_8 = __this->___predicate;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mF178D0B153B1E5E19B02F26CB9553B03042014BC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6* L_11 = __this->___selector;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_12 = V_1;
		NullCheck(L_11);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Func_2_Invoke_m0B1EAE6A50232923AF6B9F2A4D80D4A9654A6125_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_14 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8D048AF0D27A25DA77E20F7346D3D52AE3FD8B49(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m74D9BCF913057501195C673395BC8975E9A7D920_gshared (WhereSelectListIterator_2_t7039631002CB164ABA3C969FC2A3A38B047BD3E6* __this, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* L_1 = (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m3F6779C508E2959C4F3AAFB4599F6F2536740E95_gshared (WhereSelectListIterator_2_t694BAF750EC9DBB0B39A032E5FAB637B0C393847* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m2A1DADD2EABFC792646FACEFCFFE750203037C55((Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7* WhereSelectListIterator_2_Clone_m5F93A973F97521E95B3F8B176E8215DFDE035C19_gshared (WhereSelectListIterator_2_t694BAF750EC9DBB0B39A032E5FAB637B0C393847* __this, const RuntimeMethod* method) 
{
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = __this->___source;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = __this->___predicate;
		Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456* L_2 = __this->___selector;
		WhereSelectListIterator_2_t694BAF750EC9DBB0B39A032E5FAB637B0C393847* L_3 = (WhereSelectListIterator_2_t694BAF750EC9DBB0B39A032E5FAB637B0C393847*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m3F6779C508E2959C4F3AAFB4599F6F2536740E95(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m8F233FC116C175072D2BB0BCB5DB11279BCF6B97_gshared (WhereSelectListIterator_2_t694BAF750EC9DBB0B39A032E5FAB637B0C393847* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 L_4;
		L_4 = List_1_GetEnumerator_m674552D45E8C805A704D9870F5771DA3C846965A(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___Renderer), (void*)NULL);
		#endif
		((Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_5 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_6;
		L_6 = Enumerator_get_Current_mB96D99A5E50ACA0BBA98019D7B3F63DF436E6C76_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_8 = __this->___predicate;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mF178D0B153B1E5E19B02F26CB9553B03042014BC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456* L_11 = __this->___selector;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_12 = V_1;
		NullCheck(L_11);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_13;
		L_13 = Func_2_Invoke_m62CF226E58C712255CFE6A8D2ABC9A5E74B2A427_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7*)__this)->___current))->___Renderer), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_14 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8D048AF0D27A25DA77E20F7346D3D52AE3FD8B49(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t05E2C10D6844CA215A1070B3CA3240721C50E2A7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1DF61D7C257548D59AC82C28A08585BBC3E64444_gshared (WhereSelectListIterator_2_t694BAF750EC9DBB0B39A032E5FAB637B0C393847* __this, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tE1F2D0943F001D193CBD66EC03EE49EF1F74C238* L_1 = (WhereEnumerableIterator_1_tE1F2D0943F001D193CBD66EC03EE49EF1F74C238*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m3E3B9AEFBC06A412E0A204E2EE25DBC769F92FBE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m164A221B02A2F9343A24F56C83EDD495BAB55941_gshared (WhereSelectListIterator_2_t72ADC3642311784807D9D2152A7216D570D04907* __this, List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* ___0_source, Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* ___1_predicate, Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mF02E0565E5AEB9FEBE7985ED7A60920C59FF2DCD((Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1* WhereSelectListIterator_2_Clone_m8D19A5E58985C28AF712CB4EBD65289E832F82CA_gshared (WhereSelectListIterator_2_t72ADC3642311784807D9D2152A7216D570D04907* __this, const RuntimeMethod* method) 
{
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_0 = __this->___source;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_1 = __this->___predicate;
		Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8* L_2 = __this->___selector;
		WhereSelectListIterator_2_t72ADC3642311784807D9D2152A7216D570D04907* L_3 = (WhereSelectListIterator_2_t72ADC3642311784807D9D2152A7216D570D04907*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m164A221B02A2F9343A24F56C83EDD495BAB55941(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC8FC5320E84A5D97C4C68D679C89CA4C2C852B40_gshared (WhereSelectListIterator_2_t72ADC3642311784807D9D2152A7216D570D04907* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t03820F0E7B46342642DAA04D5DDB12B67FC0A227* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52 L_4;
		L_4 = List_1_GetEnumerator_m674552D45E8C805A704D9870F5771DA3C846965A(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___Renderer), (void*)NULL);
		#endif
		((Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_5 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_6;
		L_6 = Enumerator_get_Current_mB96D99A5E50ACA0BBA98019D7B3F63DF436E6C76_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* L_8 = __this->___predicate;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mF178D0B153B1E5E19B02F26CB9553B03042014BC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8* L_11 = __this->___selector;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_12 = V_1;
		NullCheck(L_11);
		Collider_t528FDC569C44FB8AD2200EF050B7793EB00C6187 L_13;
		L_13 = Func_2_Invoke_m4EC177E1EF5DD9138DA087022BC62C5E48BABA9E_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* L_14 = (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8D048AF0D27A25DA77E20F7346D3D52AE3FD8B49(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tF32841A3E271B3D23F8801F06D4E1E01230914C1*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m4DAF834FA3F90E05CE7F4496B11667A26065BABE_gshared (WhereSelectListIterator_2_t72ADC3642311784807D9D2152A7216D570D04907* __this, Func_2_tFED808C0C6F1FAC716A3FD86869676A6CD7CC61F* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tFED808C0C6F1FAC716A3FD86869676A6CD7CC61F* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tFFD009E2C8FC5C33F98782D5F007158567054CFA* L_1 = (WhereEnumerableIterator_1_tFFD009E2C8FC5C33F98782D5F007158567054CFA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mFB14237E541A6979504F2AAE0ECC76086D5610A1(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* currentDelegate = reinterpret_cast<WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m630834333CB7AE51AB01F7713157EE57991D03D7_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* currentDelegate = reinterpret_cast<WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m2AA9BE88F67A2DA68720D6B5F2AFFA89E23BB597_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* currentDelegate = reinterpret_cast<WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m4F33ED7C62B9E61B33CC81A7B5C739D0396BC209_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* currentDelegate = reinterpret_cast<WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m1067E857FEE330354C23F3DB8C7B30143BCA679D_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* currentDelegate = reinterpret_cast<WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mC9073752A9F993A89037EB0FCF8968BCB14AE3A3_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* currentDelegate = reinterpret_cast<WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mAA1CB4066F7346F24DA38ED5A1240309F0C4BC60_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* currentDelegate = reinterpret_cast<WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m6165AFE856EC0CC9CDE8A145B404312481261696_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	NullCheck(___0_val);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_val, ___1_fieldValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m66614734A851F69863F28F36CAE8C109DFE633A0_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mD7FB6CCCB39160CC4D1837430E55165CA2686FE6_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DC7A75C5043D26A8B0F27C1EBF6414DB1F38947_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_16 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m469B29DA8E93A109CE1A84DEF411C216C2E91B3C_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3B1D5B68B9A2AB907D286BB041E68825E23D338B_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m228B3D61FB850893564D237F0F16E30BBD9B6B04_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)((Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mDDCD92619631E9ED6DE40EDE7B2E4E0A586513DA_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)((Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_16 = V_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m67B64763A70B6CFF7BC8E207844892AFCCFA9B72_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m9F76A8BA82C3043DFB71DA4C07A250F84CDB0184_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m641FFE348BDF3531BF6BDBDD22704DE53ED14F4A_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)((LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mFFB6258A349189C4019C5E3C202AAFC7230C1BF9_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)((LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_16 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m8386B8479295E3AC361DE4EBBFC2C3CCB11BB908_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m434ECAC51B09FD530A6DD456388A8B3B39F71DE1_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m012F8AADBFF962499339189E5EABB41B2F51D491_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, RuntimeObject*, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DA1D304ED129B105B65D30686CE2CE0BFACBBD0_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, RuntimeObject** >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		RuntimeObject* L_16 = V_1;
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mC4D982EAE127626844AA2FF8D98F3CEA570A1A10_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_mC32E7553583DD793467D6FB5CE24747854A070E4_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m8B301BF0E4624082448AC261F66E55A9069C9F2B_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mB57F1FED13B2F213B3A9C45337315BC8E5E3F6A6_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_16 = V_1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m644F4C264CCF8F165037066D5AC2034B6D176110_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m58E406781ACEFCFD3F1526A502D26109CE14F8DF_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mBF17673DDC9A3AF571B07DA5640AA0BFE06B3FB4_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)((Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m6DC3716E17198067B467187A41C5F378F9C2753F_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)((Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_16 = V_1;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mBFCA0DE0165FE7459AEBC89AC73731BBCF7F64E6_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3FD4D633636A5AF98D07BE76673F55CC9262FB13_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mA6F80C2C119177F6A02BE2DCE8B17803F98E0A2A_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m055ADA15BC7796EDA3848DBC9F9B51BB2562A886_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m74EBB5195DD5F746EE58C2B7FE7E20A93E44DFE8_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m7BFCBE6128959F6AAA08BB9FB82C5E3DA07FB3AD_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mAB417033757D14765392C802374EE82941F7E430_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_4 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = VirtualFuncInvoker2Invoker< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Il2CppFullySharedGenericAny, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)))), L_4);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_6 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_7 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_8 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_8, L_7, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m68AEEE5C3FB70E702E364D7B0C537966E0B079CF_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	memset(V_1, 0, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		void* L_11 = UnBox_Any(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_10);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_11))), SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_12 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_13 = ___0_data;
		NullCheck(L_13);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_14;
		L_14 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_13, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Il2CppFullySharedGenericAny* >::Invoke(11, __this, L_14, (Il2CppFullySharedGenericAny*)V_1);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16;
		L_16 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_12, L_15, NULL);
		V_0 = L_16;
		RuntimeObject** L_17 = ___1_instance;
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_18);
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_19);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mA219A5FF100DBCB35147606E9E4E9C565D2F8D50_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		bool L_0;
		L_0 = ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), (bool)1);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? ___0_value : &___0_value), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1), L_0, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____hasValue;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____hasValue;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_2 = __this->____value;
		return L_2;
	}
}
IL2CPP_EXTERN_C  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 _returnValue;
	_returnValue = fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) 
{
	{
		__this->____hasValue = (bool)1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___0_value;
		__this->____value = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___Ancestors), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___VersionString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___ModelType), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_AdjustorThunk (RuntimeObject* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 Enumerator_get_Current_mB96D99A5E50ACA0BBA98019D7B3F63DF436E6C76_gshared_inline (Enumerator_t4F181F112E3AC7BC997407994ACEA4FE1395EF52* __this, const RuntimeMethod* method) 
{
	{
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mF178D0B153B1E5E19B02F26CB9553B03042014BC_gshared_inline (Func_2_t1034CF44DADA5F2443889CD17FA47CE4230AE82A* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Func_2_Invoke_mBD93CA50FC0E27592E4105BF5DCD64AD71BBE964_gshared_inline (Func_2_tDEB262287CE08731FCB6A3C22C31D915A464E49F* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 (*FunctionPointerType) (RuntimeObject*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mF5CFF21A242251CC15F6B72BAD7B5992B152ACAC_gshared_inline (Func_2_t00786BFD69673C3C27527226B00C613391D00E99* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_mD6C90F869A03C9C8E44E04A9C59676876DA4C015_gshared_inline (Func_2_t4112A267C3053E0B54587E99D338710EB3EBF54C* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 Func_2_Invoke_m86CCB0333A1B7B9E5BD193F2A6A1EB0CA882B539_gshared_inline (Func_2_t86DCF4C6602EB2997CB8D0A6FE0013907B8A590F* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 (*FunctionPointerType) (RuntimeObject*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_m20B724FD05CDC0D492394DF25AA0E9AE39781098_gshared_inline (Func_2_t592E45D7262269C17E6E7633697ED3B2F2CE3F6E* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m0B5DDB1D600FBB9F16994F45692B0B7A6CD22C98_gshared_inline (Func_2_t7E81CA824786293B674B2BE70C2B1DF6D5D0A34F* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m0B1EAE6A50232923AF6B9F2A4D80D4A9654A6125_gshared_inline (Func_2_tF6DD22FA1AD8E8EF83B4DE59F665E11C5C04B0D6* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*FunctionPointerType) (RuntimeObject*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 Func_2_Invoke_m62CF226E58C712255CFE6A8D2ABC9A5E74B2A427_gshared_inline (Func_2_tB2FA71C92EC299B3B21E5516531B91D1ED584456* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 (*FunctionPointerType) (RuntimeObject*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collider_t528FDC569C44FB8AD2200EF050B7793EB00C6187 Func_2_Invoke_m4EC177E1EF5DD9138DA087022BC62C5E48BABA9E_gshared_inline (Func_2_t94035D18AE6007B70B36DEEA8FC299E16F32F0F8* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_arg, const RuntimeMethod* method) 
{
	typedef Collider_t528FDC569C44FB8AD2200EF050B7793EB00C6187 (*FunctionPointerType) (RuntimeObject*, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____hasValue;
		return L_0;
	}
}
