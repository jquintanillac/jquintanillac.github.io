#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
181,
189,
190,
191,
192,
193,
194,
195,
197,
198,
245,
246,
247,
271,
272,
273,
283,
284,
285,
286,
373,
374,
375,
378,
409,
410,
412,
414,
416,
418,
423,
431,
432,
433,
434,
435,
436,
437,
438,
439,
519,
520,
572,
578,
581,
583,
588,
589,
591,
592,
596,
597,
599,
601,
602,
605,
606,
607,
610,
613,
615,
617,
626,
681,
683,
685,
695,
696,
697,
699,
705,
706,
707,
708,
709,
717,
718,
719,
723,
724,
726,
728,
911,
1059,
1060,
6208,
6209,
6211,
6212,
6213,
6214,
6215,
6217,
6219,
6221,
6229,
6231,
6236,
6238,
6240,
6242,
6293,
6294,
6296,
6297,
6298,
6299,
6300,
6302,
6304,
7159,
7163,
7165,
7166,
7167,
7168,
7362,
7363,
7364,
7365,
7381,
7382,
7383,
7385,
7424,
7491,
7493,
7502,
7503,
7504,
7505,
7884,
7888,
7889,
7915,
7932,
7939,
7946,
7957,
7960,
7980,
8051,
8053,
8062,
8064,
8065,
8072,
8086,
8106,
8107,
8115,
8117,
8124,
8125,
8128,
8130,
8135,
8141,
8142,
8149,
8151,
8163,
8166,
8167,
8168,
8179,
8188,
8194,
8195,
8196,
8198,
8199,
8216,
8218,
8232,
8249,
8276,
8301,
8302,
8721,
8804,
8805,
8949,
8950,
8954,
8957,
9019,
9366,
9367,
9578,
9588,
10142,
10163,
10165,
10167,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 181,
ves_icall_System_Array_InternalCreate,
// token 189,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 190,
ves_icall_System_Array_CanChangePrimitive,
// token 191,
ves_icall_System_Array_FastCopy,
// token 192,
ves_icall_System_Array_GetLengthInternal_raw,
// token 193,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 194,
ves_icall_System_Array_GetGenericValue_icall,
// token 195,
ves_icall_System_Array_GetValueImpl_raw,
// token 197,
ves_icall_System_Array_SetValueImpl_raw,
// token 198,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 245,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 246,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 247,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 271,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 272,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 273,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 283,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 284,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 285,
ves_icall_System_Enum_InternalGetCorElementType,
// token 286,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 373,
ves_icall_System_Environment_get_ProcessorCount,
// token 374,
ves_icall_System_Environment_get_TickCount,
// token 375,
ves_icall_System_Environment_get_TickCount64,
// token 378,
ves_icall_System_Environment_FailFast_raw,
// token 409,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 410,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 412,
ves_icall_System_GC_SuppressFinalize_raw,
// token 414,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 416,
ves_icall_System_GC_GetGCMemoryInfo,
// token 418,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 423,
ves_icall_System_Object_MemberwiseClone_raw,
// token 431,
ves_icall_System_Math_Ceiling,
// token 432,
ves_icall_System_Math_Cos,
// token 433,
ves_icall_System_Math_Floor,
// token 434,
ves_icall_System_Math_Log10,
// token 435,
ves_icall_System_Math_Pow,
// token 436,
ves_icall_System_Math_Sin,
// token 437,
ves_icall_System_Math_Sqrt,
// token 438,
ves_icall_System_Math_Tan,
// token 439,
ves_icall_System_Math_ModF,
// token 519,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 520,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 572,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 578,
ves_icall_RuntimeType_make_array_type_raw,
// token 581,
ves_icall_RuntimeType_make_byref_type_raw,
// token 583,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 588,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 589,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 591,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 592,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 596,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 597,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 599,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 601,
ves_icall_System_RuntimeType_getFullName_raw,
// token 602,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 605,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 606,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 607,
ves_icall_RuntimeType_GetFields_native_raw,
// token 610,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 613,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 615,
ves_icall_RuntimeType_GetName_raw,
// token 617,
ves_icall_RuntimeType_GetNamespace_raw,
// token 626,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 681,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 683,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 685,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 695,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 696,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 697,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 699,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 705,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 706,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 707,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 708,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 709,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 717,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 718,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 719,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 723,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 724,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 726,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 728,
ves_icall_System_String_FastAllocateString_raw,
// token 911,
ves_icall_System_Type_internal_from_handle_raw,
// token 1059,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1060,
ves_icall_System_ValueType_Equals_raw,
// token 6208,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6209,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6211,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6212,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6213,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6214,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6215,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6217,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6219,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6221,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6229,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6231,
mono_monitor_exit_icall_raw,
// token 6236,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6238,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6240,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6242,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6293,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6294,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6296,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6297,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6298,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6299,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6300,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6302,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6304,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7159,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7163,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7165,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7166,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7167,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7168,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7362,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7363,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7364,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7365,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7381,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7382,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7383,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7385,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7424,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7491,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7493,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7502,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7503,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7504,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7505,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 7884,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 7888,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 7889,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 7915,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 7932,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 7939,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 7946,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 7957,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 7960,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7980,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8051,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8053,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8062,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8064,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8065,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8072,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8086,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8106,
ves_icall_reflection_get_token_raw,
// token 8107,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8115,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8117,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8124,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8125,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8128,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8130,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8135,
ves_icall_reflection_get_token_raw,
// token 8141,
ves_icall_get_method_info_raw,
// token 8142,
ves_icall_get_method_attributes,
// token 8149,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8151,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8163,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8166,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8167,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8168,
ves_icall_reflection_get_token_raw,
// token 8179,
ves_icall_InternalInvoke_raw,
// token 8188,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8194,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8195,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8196,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8198,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8199,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8216,
ves_icall_InvokeClassConstructor_raw,
// token 8218,
ves_icall_InternalInvoke_raw,
// token 8232,
ves_icall_reflection_get_token_raw,
// token 8249,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8276,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8301,
ves_icall_reflection_get_token_raw,
// token 8302,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 8721,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8804,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8805,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 8949,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8950,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8954,
ves_icall_ModuleBuilder_getToken_raw,
// token 8957,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9019,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9366,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9367,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9578,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 9588,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10142,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10163,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10165,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10167,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
