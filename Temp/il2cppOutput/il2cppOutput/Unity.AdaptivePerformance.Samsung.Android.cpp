#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor>
struct List_1_tBDCF1E0892E8DA197607E498736F867735A73137;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerProfile[]
struct AdaptivePerformanceScalerProfileU5BU5D_t502F55D3686CAB852984FDB6F92431963616F4B7;
// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor[]
struct AdaptivePerformanceSubsystemDescriptorU5BU5D_tE478BE4CA194FF832B443F6091F40CCF7F1BEA20;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.AdaptivePerformance.AdaptiveFramerate
struct AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexer
struct AdaptivePerformanceIndexer_tE43B4A07AF7944322BA939E2D4F8AE90AD42EF73;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexerSettings
struct AdaptivePerformanceIndexerSettings_t3D9418B7302C8FCA3344719FF10FBADFD2F1CDC6;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper
struct AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettings
struct AdaptivePerformanceScalerSettings_tAF8002CE95F36DE71E945DA73AADB6783EB2FFD8;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettingsBase
struct AdaptivePerformanceScalerSettingsBase_tDF99867134986926CE22505B0B9EE99AD74501AA;
// UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate
struct AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings
struct IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.ISubsystem
struct ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67;
// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate
struct IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader
struct SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings
struct SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC;
// System.String
struct String_t;
// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler
struct VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBDCF1E0892E8DA197607E498736F867735A73137_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4CF9A4312580ADAE7FA331122F314BFA89FDA671;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1268B5EDA43417C2860DC1B9423CC2EB6171CF0E 
{
};

// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor>
struct List_1_tBDCF1E0892E8DA197607E498736F867735A73137  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AdaptivePerformanceSubsystemDescriptorU5BU5D_tE478BE4CA194FF832B443F6091F40CCF7F1BEA20* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBDCF1E0892E8DA197607E498736F867735A73137_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AdaptivePerformanceSubsystemDescriptorU5BU5D_tE478BE4CA194FF832B443F6091F40CCF7F1BEA20* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderConstants
struct SamsungAndroidProviderConstants_t99957262BF70058B6F67A669F6F9A4930FA91484  : public RuntimeObject
{
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

// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate
struct VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D  : public RuntimeObject
{
};

struct VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields
{
	// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;
};

// UnityEngine.AdaptivePerformance.VisualScripting.AdaptivePerformanceScalerEvent
struct AdaptivePerformanceScalerEvent_t4FB8CAC39F9A8788AB10F7B8E579B0A4FB56558D 
{
	// System.String UnityEngine.AdaptivePerformance.VisualScripting.AdaptivePerformanceScalerEvent::Name
	String_t* ___Name_0;
	// System.Int32 UnityEngine.AdaptivePerformance.VisualScripting.AdaptivePerformanceScalerEvent::Level
	int32_t ___Level_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AdaptivePerformance.VisualScripting.AdaptivePerformanceScalerEvent
struct AdaptivePerformanceScalerEvent_t4FB8CAC39F9A8788AB10F7B8E579B0A4FB56558D_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Level_1;
};
// Native definition for COM marshalling of UnityEngine.AdaptivePerformance.VisualScripting.AdaptivePerformanceScalerEvent
struct AdaptivePerformanceScalerEvent_t4FB8CAC39F9A8788AB10F7B8E579B0A4FB56558D_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Level_1;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoader
struct AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
struct AdaptivePerformanceScaler_tB9F76E7E942E332BEF5DC363BE906AD4FD1700BC  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexer UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_Indexer
	AdaptivePerformanceIndexer_tE43B4A07AF7944322BA939E2D4F8AE90AD42EF73* ___m_Indexer_4;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::<CurrentLevel>k__BackingField
	int32_t ___U3CCurrentLevelU3Ek__BackingField_5;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::<GpuImpact>k__BackingField
	int32_t ___U3CGpuImpactU3Ek__BackingField_6;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::<CpuImpact>k__BackingField
	int32_t ___U3CCpuImpactU3Ek__BackingField_7;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_OverrideLevel
	int32_t ___m_OverrideLevel_8;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettingsBase UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_defaultSetting
	AdaptivePerformanceScalerSettingsBase_tDF99867134986926CE22505B0B9EE99AD74501AA* ___m_defaultSetting_9;
	// UnityEngine.AdaptivePerformance.VisualScripting.AdaptivePerformanceScalerEvent UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_ScalerEvent
	AdaptivePerformanceScalerEvent_t4FB8CAC39F9A8788AB10F7B8E579B0A4FB56558D ___m_ScalerEvent_10;
	// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_Settings
	IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8* ___m_Settings_11;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings
struct IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_Logging
	bool ___m_Logging_4;
	// System.Boolean UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_AutomaticPerformanceModeEnabled
	bool ___m_AutomaticPerformanceModeEnabled_5;
	// System.Boolean UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_EnableBoostOnStartup
	bool ___m_EnableBoostOnStartup_6;
	// System.Int32 UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_StatsLoggingFrequencyInFrames
	int32_t ___m_StatsLoggingFrequencyInFrames_7;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexerSettings UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_IndexerSettings
	AdaptivePerformanceIndexerSettings_t3D9418B7302C8FCA3344719FF10FBADFD2F1CDC6* ___m_IndexerSettings_8;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettings UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_ScalerSettings
	AdaptivePerformanceScalerSettings_tAF8002CE95F36DE71E945DA73AADB6783EB2FFD8* ___m_ScalerSettings_9;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerProfile[] UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_scalerProfileList
	AdaptivePerformanceScalerProfileU5BU5D_t502F55D3686CAB852984FDB6F92431963616F4B7* ___m_scalerProfileList_10;
	// System.Int32 UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_DefaultScalerProfilerIndex
	int32_t ___m_DefaultScalerProfilerIndex_11;
};

// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler
struct VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95  : public MulticastDelegate_t
{
};

// UnityEngine.AdaptivePerformance.AdaptiveFramerate
struct AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104  : public AdaptivePerformanceScaler_tB9F76E7E942E332BEF5DC363BE906AD4FD1700BC
{
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptiveFramerate::m_DefaultFPS
	int32_t ___m_DefaultFPS_12;
};

// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper
struct AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F  : public AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};

// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings
struct SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC  : public IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8
{
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::m_SamsungProviderLogging
	bool ___m_SamsungProviderLogging_12;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::m_HighSpeedVRR
	bool ___m_HighSpeedVRR_13;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::m_AutomaticVRR
	bool ___m_AutomaticVRR_14;
};

struct SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields
{
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::s_RuntimeInstance
	SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* ___s_RuntimeInstance_15;
};

// UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate
struct AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4  : public AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104
{
	// System.Boolean UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_AdaptiveVRREnabled
	bool ___m_AdaptiveVRREnabled_13;
	// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_VRR
	RuntimeObject* ___m_VRR_14;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_CurrentRefreshRateIndex
	int32_t ___m_CurrentRefreshRateIndex_15;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_DefaultRefreshRateIndex
	int32_t ___m_DefaultRefreshRateIndex_16;
};

// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader
struct SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293  : public AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F
{
};

struct SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor> UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::s_SamsungGameSDKSubsystemDescriptors
	List_1_tBDCF1E0892E8DA197607E498736F867735A73137* ___s_SamsungGameSDKSubsystemDescriptors_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
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


// System.Int32 System.Array::IndexOf<System.Int32>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_Awake_mEFFD0C457A737B1F637A2BB27E7C468351A7C894 (AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler__ctor_m7A50456A08A0FDE7002210349CE4F2D9BF73EBF7 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Int32>(T[],T)
inline int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_gshared)(___array0, ___value1, method);
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::OnDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_OnDisabled_m6CA3A4174B1E09B31BEFB70E212B7811C2CF9DD0 (AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::OnEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_OnEnabled_m83DA60536ADE76F0E290455BF879835B354BA3BD (AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate__ctor_m4DDA4198D52446513FA0C8CA97BB19FA72C9EBE3 (AdaptiveFramerate_t87F82B3C838B42BFDE5277B446D2A9C4674D6104* __this, const RuntimeMethod* method) ;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::GetSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* SamsungAndroidProviderSettings_GetSettings_mAFADC8F0A6AE54BE4D54AEC67D91019DE82F24C2_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper__ctor_mEEA0DF770A2EAB15E711E6FCC9AE3166FFF30863 (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03 (List_1_tBDCF1E0892E8DA197607E498736F867735A73137* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBDCF1E0892E8DA197607E498736F867735A73137*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAdaptivePerformanceSettings__ctor_mBEEA4933FD88BF7E3C20FAAE1E8BEAF3EBB18379 (IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8* __this, const RuntimeMethod* method) ;
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
// System.String UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdaptiveVariableRefreshRate_get_Name_mF8C08025C2614FAA00F1545EE340DFA951C561C0 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CF9A4312580ADAE7FA331122F314BFA89FDA671);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name  => "Adaptive Variable Refresh Rate";
		return _stringLiteral4CF9A4312580ADAE7FA331122F314BFA89FDA671;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdaptiveVariableRefreshRate_get_Enabled_mD0C3364B0533C355A3A3EB26D552679F71755808 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	{
		// public override bool Enabled { get => m_AdaptiveVRREnabled; set => m_AdaptiveVRREnabled = value; }
		bool L_0 = __this->___m_AdaptiveVRREnabled_13;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_set_Enabled_m65B74C83EF4D8828A61B9EF174EDB36EC542B37D (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public override bool Enabled { get => m_AdaptiveVRREnabled; set => m_AdaptiveVRREnabled = value; }
		bool L_0 = ___value0;
		__this->___m_AdaptiveVRREnabled_13 = L_0;
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_Awake_mFE8680AB2D8A192912C5A96FC14211D2DBB89A22 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		AdaptiveFramerate_Awake_mEFFD0C457A737B1F637A2BB27E7C468351A7C894(__this, NULL);
		// if (m_Settings == null)
		IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8* L_0 = ((AdaptivePerformanceScaler_tB9F76E7E942E332BEF5DC363BE906AD4FD1700BC*)__this)->___m_Settings_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// m_VRR = VariableRefreshRate.Instance;
		RuntimeObject* L_2;
		L_2 = VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9_inline(NULL);
		__this->___m_VRR_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VRR_14), (void*)L_2);
		// if (m_VRR == null)
		RuntimeObject* L_3 = __this->___m_VRR_14;
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Enabled = false;
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::set_Enabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0030:
	{
		// m_VRR.RefreshRateChanged += RefreshRateChanged;
		RuntimeObject* L_4 = __this->___m_VRR_14;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_5 = (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)il2cpp_codegen_object_new(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		VariableRefreshRateEventHandler__ctor_m7A50456A08A0FDE7002210349CE4F2D9BF73EBF7(L_5, __this, (intptr_t)((void*)AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* >::Invoke(3 /* System.Void UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::add_RefreshRateChanged(UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler) */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_4, L_5);
		// m_CurrentRefreshRateIndex = Array.IndexOf(m_VRR.SupportedRefreshRates, m_VRR.CurrentRefreshRate);
		RuntimeObject* L_6 = __this->___m_VRR_14;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_6);
		RuntimeObject* L_8 = __this->___m_VRR_14;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_CurrentRefreshRate() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_8);
		int32_t L_10;
		L_10 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098(L_7, L_9, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		__this->___m_CurrentRefreshRateIndex_15 = L_10;
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnDisabled_m4D920248468848B9B22B226130A74865A7CCE40B (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisabled();
		AdaptiveFramerate_OnDisabled_m6CA3A4174B1E09B31BEFB70E212B7811C2CF9DD0(__this, NULL);
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->___m_VRR_14;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// m_VRR.SetRefreshRateByIndex(m_DefaultRefreshRateIndex);
		RuntimeObject* L_1 = __this->___m_VRR_14;
		int32_t L_2 = __this->___m_DefaultRefreshRateIndex_16;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnEnabled_m22746B6382BB835B71C1762FEF1A392D5A491B80 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnabled();
		AdaptiveFramerate_OnEnabled_m83DA60536ADE76F0E290455BF879835B354BA3BD(__this, NULL);
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->___m_VRR_14;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// m_DefaultRefreshRateIndex = Array.IndexOf(m_VRR.SupportedRefreshRates, m_VRR.CurrentRefreshRate);
		RuntimeObject* L_1 = __this->___m_VRR_14;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = __this->___m_VRR_14;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_CurrentRefreshRate() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_3);
		int32_t L_5;
		L_5 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098(L_2, L_4, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		__this->___m_DefaultRefreshRateIndex_16 = L_5;
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnDestroy_m7B555B16DF7CFECFD01D8C478FB4694155437045 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->___m_VRR_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_VRR.RefreshRateChanged -= RefreshRateChanged;
		RuntimeObject* L_1 = __this->___m_VRR_14;
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* L_2 = (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*)il2cpp_codegen_object_new(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		VariableRefreshRateEventHandler__ctor_m7A50456A08A0FDE7002210349CE4F2D9BF73EBF7(L_2, __this, (intptr_t)((void*)AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* >::Invoke(4 /* System.Void UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::remove_RefreshRateChanged(UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler) */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::RefreshRateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_RefreshRateChanged_mFF8AAB10FAD23ACDB2DFDE115BD96015AE9B5DFC (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->___m_VRR_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_CurrentRefreshRateIndex = Array.IndexOf(m_VRR.SupportedRefreshRates, m_VRR.CurrentRefreshRate);
		RuntimeObject* L_1 = __this->___m_VRR_14;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = __this->___m_VRR_14;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_CurrentRefreshRate() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_3);
		int32_t L_5;
		L_5 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098(L_2, L_4, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E62F70969BF3C677153CD4B51C768B21F466098_RuntimeMethod_var);
		__this->___m_CurrentRefreshRateIndex_15 = L_5;
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnLevelIncrease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnLevelIncrease_m47AE80C1833D7191B6679CBF9AE7099A7EC35078 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->___m_VRR_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (m_CurrentRefreshRateIndex > 0)
		int32_t L_1 = __this->___m_CurrentRefreshRateIndex_15;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// var rateIndex = m_CurrentRefreshRateIndex - 1;
		int32_t L_2 = __this->___m_CurrentRefreshRateIndex_15;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// var fps = m_VRR.SupportedRefreshRates[rateIndex];
		RuntimeObject* L_3 = __this->___m_VRR_14;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		// if (fps < MinBound || fps > MaxBound)
		int32_t L_8 = V_1;
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(16 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MinBound() */, __this);
		if ((((float)((float)L_8)) < ((float)L_9)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_10 = V_1;
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(18 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MaxBound() */, __this);
		if ((!(((float)((float)L_10)) > ((float)L_11))))
		{
			goto IL_003e;
		}
	}

IL_003d:
	{
		// return;
		return;
	}

IL_003e:
	{
		// if (m_VRR.SetRefreshRateByIndex(rateIndex))
		RuntimeObject* L_12 = __this->___m_VRR_14;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		bool L_14;
		L_14 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_12, L_13);
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		// m_CurrentRefreshRateIndex = rateIndex;
		int32_t L_15 = V_0;
		__this->___m_CurrentRefreshRateIndex_15 = L_15;
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnLevelDecrease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnLevelDecrease_mA347DC91AA9491E9451BA5FAA164C39A05DE2983 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->___m_VRR_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (m_CurrentRefreshRateIndex < m_VRR.SupportedRefreshRates.Length - 1)
		int32_t L_1 = __this->___m_CurrentRefreshRateIndex_15;
		RuntimeObject* L_2 = __this->___m_VRR_14;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1)))))
		{
			goto IL_0061;
		}
	}
	{
		// var rateIndex = m_CurrentRefreshRateIndex + 1;
		int32_t L_4 = __this->___m_CurrentRefreshRateIndex_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// var fps = m_VRR.SupportedRefreshRates[rateIndex];
		RuntimeObject* L_5 = __this->___m_VRR_14;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = InterfaceFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		// if (fps < MinBound || fps > MaxBound)
		int32_t L_10 = V_1;
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(16 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MinBound() */, __this);
		if ((((float)((float)L_10)) < ((float)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_12 = V_1;
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(18 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MaxBound() */, __this);
		if ((!(((float)((float)L_12)) > ((float)L_13))))
		{
			goto IL_004c;
		}
	}

IL_004b:
	{
		// return;
		return;
	}

IL_004c:
	{
		// if (m_VRR.SetRefreshRateByIndex(rateIndex))
		RuntimeObject* L_14 = __this->___m_VRR_14;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_t85984F283B615BA6B004DC87C757980AA2452A85_il2cpp_TypeInfo_var, L_14, L_15);
		if (!L_16)
		{
			goto IL_0061;
		}
	}
	{
		// m_CurrentRefreshRateIndex = rateIndex;
		int32_t L_17 = V_0;
		__this->___m_CurrentRefreshRateIndex_15 = L_17;
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate__ctor_m45F992D15709678C75D34B6D5F8FB008674E2C58 (AdaptiveVariableRefreshRate_tAEC009151419AD9BF86B44283692F0C4CD9794A4* __this, const RuntimeMethod* method) 
{
	{
		AdaptiveFramerate__ctor_m4DDA4198D52446513FA0C8CA97BB19FA72C9EBE3(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.ISubsystem UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::GetDefaultSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SamsungAndroidProviderLoader_GetDefaultSubsystem_mD1D0DCFB80C6753B89AC9720C65FE76984B99520 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAdaptivePerformanceSettings_tFB49C60F821F093D3F18E8DC115E7D929E6C86C8* SamsungAndroidProviderLoader_GetSettings_m8A0099932C135CE398515BF7482C43D894F22441 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		// return SamsungAndroidProviderSettings.GetSettings();
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_mAFADC8F0A6AE54BE4D54AEC67D91019DE82F24C2_inline(NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Initialize_m5858C2F5E9FAAEE52409997159AD034C02064991 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Start_m6F124A52212118BBC82F0F5B534661CC348F8CC6 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Stop_m09649590212A34E95BC5C4F709C20D53CE95B66F (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Deinitialize_mC01C17A4795C55BD72DADBDF7115BC90BCBD5BD0 (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderLoader__ctor_m2B6288D900467305274E822344CB000EC7B1420E (SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293* __this, const RuntimeMethod* method) 
{
	{
		AdaptivePerformanceLoaderHelper__ctor_mEEA0DF770A2EAB15E711E6FCC9AE3166FFF30863(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderLoader__cctor_m63E33CBDED0A59936861AFC0D6BCF5A77A7E5C60 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBDCF1E0892E8DA197607E498736F867735A73137_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<AdaptivePerformanceSubsystemDescriptor> s_SamsungGameSDKSubsystemDescriptors =
		//     new List<AdaptivePerformanceSubsystemDescriptor>();
		List_1_tBDCF1E0892E8DA197607E498736F867735A73137* L_0 = (List_1_tBDCF1E0892E8DA197607E498736F867735A73137*)il2cpp_codegen_object_new(List_1_tBDCF1E0892E8DA197607E498736F867735A73137_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03(L_0, List_1__ctor_mDB1225A75BFAF418EF64307D04DBE72CF9246A03_RuntimeMethod_var);
		((SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var))->___s_SamsungGameSDKSubsystemDescriptors_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderLoader_t750DAFC3B980CC2B2FB3F5BC080B536ECAF5D293_il2cpp_TypeInfo_var))->___s_SamsungGameSDKSubsystemDescriptors_5), (void*)L_0);
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
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_samsungProviderLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_samsungProviderLogging_mE70D42A6A1439E3DB2406B298C2AF4F30811DA9C (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_SamsungProviderLogging; }
		bool L_0 = __this->___m_SamsungProviderLogging_12;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_samsungProviderLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_samsungProviderLogging_m799B21694D0AE66CED86A06CCBFB24E4B322F37B (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_SamsungProviderLogging = value; }
		bool L_0 = ___value0;
		__this->___m_SamsungProviderLogging_12 = L_0;
		// set { m_SamsungProviderLogging = value; }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_highSpeedVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_highSpeedVRR_mF7D7A276D6AC87D624429E128A5B36155ABCE4A1 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_HighSpeedVRR; }
		bool L_0 = __this->___m_HighSpeedVRR_13;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_highSpeedVRR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_highSpeedVRR_mEBA299AB5B79E26FA9760EDB5DB357D1F51159F2 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_HighSpeedVRR = value; }
		bool L_0 = ___value0;
		__this->___m_HighSpeedVRR_13 = L_0;
		// set { m_HighSpeedVRR = value; }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_automaticVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_automaticVRR_mA4EC43A6755953623F7A5F1B3C365A3A9CE25C3B (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_AutomaticVRR; }
		bool L_0 = __this->___m_AutomaticVRR_14;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_automaticVRR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_automaticVRR_m10FAA3C18EF7EF58166BB3D9A572B5D249584639 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_AutomaticVRR = value; }
		bool L_0 = ___value0;
		__this->___m_AutomaticVRR_14 = L_0;
		// set { m_AutomaticVRR = value; }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_Awake_mBE88FA41ECD3C5566F2E71A1FA500536653A0220 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_RuntimeInstance = this;
		((SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var))->___s_RuntimeInstance_15 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var))->___s_RuntimeInstance_15), (void*)__this);
		// }
		return;
	}
}
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* SamsungAndroidProviderSettings_GetSettings_mAFADC8F0A6AE54BE4D54AEC67D91019DE82F24C2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = s_RuntimeInstance;
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0 = ((SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var))->___s_RuntimeInstance_15;
		// return settings;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings__ctor_m6BA5E84565C1FB2B7857B12FC7606CC78C1240E5 (SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* __this, const RuntimeMethod* method) 
{
	{
		// bool m_AutomaticVRR = true;
		__this->___m_AutomaticVRR_14 = (bool)1;
		IAdaptivePerformanceSettings__ctor_mBEEA4933FD88BF7E3C20FAAE1E8BEAF3EBB18379(__this, NULL);
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
void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_Multicast(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* currentDelegate = reinterpret_cast<VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_Open(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_OpenStaticInvoker(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_ClosedStaticInvoker(VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler__ctor_m7A50456A08A0FDE7002210349CE4F2D9BF73EBF7 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC_Multicast;
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_Invoke_mA665080591D6EA72C7EC12CFC0CAFAC8E5FF37EC (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRateEventHandler_BeginInvoke_m96B39CC25E1EA9D1C5BD5CD00D817CFBDC29C5A4 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_EndInvoke_mA9620AD3877A7CAF092C68D0A97BFE556627B348 (VariableRefreshRateEventHandler_tD8795E551E080C52C1A7AFDB0BF044F17749EB95* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::set_Instance(UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRate_set_Instance_mF83BCC9BEA5164D10F5BAF3A5856AFF6C352A7CC (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ___value0;
		((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_mB72B4AF9C0C464513D27FCD7D81C5AB089675BB9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ((VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_tEA02E83F092552EB0AECAB3F133EF281D66EEA4D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* SamsungAndroidProviderSettings_GetSettings_mAFADC8F0A6AE54BE4D54AEC67D91019DE82F24C2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = s_RuntimeInstance;
		SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC* L_0 = ((SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tB080FCD43F6D764EE547C8748FA7DAFC02505FBC_il2cpp_TypeInfo_var))->___s_RuntimeInstance_15;
		// return settings;
		return L_0;
	}
}
