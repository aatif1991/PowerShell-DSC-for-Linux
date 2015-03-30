/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _MSFT_nxArchiveResource_h
#define _MSFT_nxArchiveResource_h

#include <MI.h>
#include "OMI_BaseResource.h"
#include "MSFT_nxArchiveResource.h"

/*
**==============================================================================
**
** MSFT_nxArchiveResource [MSFT_nxArchiveResource]
**
** Keys:
**    SourcePath
**    DestinationPath
**
**==============================================================================
*/

typedef struct _MSFT_nxArchiveResource /* extends OMI_BaseResource */
{
    MI_Instance __instance;
    /* OMI_BaseResource properties */
    /* MSFT_nxArchiveResource properties */
    /*KEY*/ MI_ConstStringField SourcePath;
    /*KEY*/ MI_ConstStringField DestinationPath;
    MI_ConstStringField Checksum;
    MI_ConstBooleanField Force;
    MI_ConstStringField Ensure;
}
MSFT_nxArchiveResource;

typedef struct _MSFT_nxArchiveResource_Ref
{
    MSFT_nxArchiveResource* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_nxArchiveResource_Ref;

typedef struct _MSFT_nxArchiveResource_ConstRef
{
    MI_CONST MSFT_nxArchiveResource* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_nxArchiveResource_ConstRef;

typedef struct _MSFT_nxArchiveResource_Array
{
    struct _MSFT_nxArchiveResource** data;
    MI_Uint32 size;
}
MSFT_nxArchiveResource_Array;

typedef struct _MSFT_nxArchiveResource_ConstArray
{
    struct _MSFT_nxArchiveResource MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
MSFT_nxArchiveResource_ConstArray;

typedef struct _MSFT_nxArchiveResource_ArrayRef
{
    MSFT_nxArchiveResource_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_nxArchiveResource_ArrayRef;

typedef struct _MSFT_nxArchiveResource_ConstArrayRef
{
    MSFT_nxArchiveResource_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_nxArchiveResource_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl MSFT_nxArchiveResource_rtti;

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Construct(
    _Out_ MSFT_nxArchiveResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_ConstructInstance(context, &MSFT_nxArchiveResource_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Clone(
    _In_ const MSFT_nxArchiveResource* self,
    _Outptr_ MSFT_nxArchiveResource** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL MSFT_nxArchiveResource_IsA(
    _In_ const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &MSFT_nxArchiveResource_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Destruct(_Inout_ MSFT_nxArchiveResource* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Delete(_Inout_ MSFT_nxArchiveResource* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Post(
    _In_ const MSFT_nxArchiveResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Set_SourcePath(
    _Inout_ MSFT_nxArchiveResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetPtr_SourcePath(
    _Inout_ MSFT_nxArchiveResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Clear_SourcePath(
    _Inout_ MSFT_nxArchiveResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Set_DestinationPath(
    _Inout_ MSFT_nxArchiveResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetPtr_DestinationPath(
    _Inout_ MSFT_nxArchiveResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Clear_DestinationPath(
    _Inout_ MSFT_nxArchiveResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Set_Checksum(
    _Inout_ MSFT_nxArchiveResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetPtr_Checksum(
    _Inout_ MSFT_nxArchiveResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Clear_Checksum(
    _Inout_ MSFT_nxArchiveResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Set_Force(
    _Inout_ MSFT_nxArchiveResource* self,
    _In_ MI_Boolean x)
{
    ((MI_BooleanField*)&self->Force)->value = x;
    ((MI_BooleanField*)&self->Force)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Clear_Force(
    _Inout_ MSFT_nxArchiveResource* self)
{
    memset((void*)&self->Force, 0, sizeof(self->Force));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Set_Ensure(
    _Inout_ MSFT_nxArchiveResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetPtr_Ensure(
    _Inout_ MSFT_nxArchiveResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_Clear_Ensure(
    _Inout_ MSFT_nxArchiveResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

/*
**==============================================================================
**
** MSFT_nxArchiveResource.GetTargetResource()
**
**==============================================================================
*/

typedef struct _MSFT_nxArchiveResource_GetTargetResource
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MSFT_nxArchiveResource_ConstRef InputResource;
    /*IN*/ MI_ConstUint32Field Flags;
    /*OUT*/ MSFT_nxArchiveResource_ConstRef OutputResource;
}
MSFT_nxArchiveResource_GetTargetResource;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_nxArchiveResource_GetTargetResource_rtti;

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_Construct(
    _Out_ MSFT_nxArchiveResource_GetTargetResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_ConstructParameters(context, &MSFT_nxArchiveResource_GetTargetResource_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_Clone(
    _In_ const MSFT_nxArchiveResource_GetTargetResource* self,
    _Outptr_ MSFT_nxArchiveResource_GetTargetResource** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_Destruct(
    _Inout_ MSFT_nxArchiveResource_GetTargetResource* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_Delete(
    _Inout_ MSFT_nxArchiveResource_GetTargetResource* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_Post(
    _In_ const MSFT_nxArchiveResource_GetTargetResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_Set_MIReturn(
    _Inout_ MSFT_nxArchiveResource_GetTargetResource* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_Clear_MIReturn(
    _Inout_ MSFT_nxArchiveResource_GetTargetResource* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_Set_InputResource(
    _Inout_ MSFT_nxArchiveResource_GetTargetResource* self,
    _In_ const MSFT_nxArchiveResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_SetPtr_InputResource(
    _Inout_ MSFT_nxArchiveResource_GetTargetResource* self,
    _In_ const MSFT_nxArchiveResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_Clear_InputResource(
    _Inout_ MSFT_nxArchiveResource_GetTargetResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_Set_Flags(
    _Inout_ MSFT_nxArchiveResource_GetTargetResource* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->Flags)->value = x;
    ((MI_Uint32Field*)&self->Flags)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_Clear_Flags(
    _Inout_ MSFT_nxArchiveResource_GetTargetResource* self)
{
    memset((void*)&self->Flags, 0, sizeof(self->Flags));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_Set_OutputResource(
    _Inout_ MSFT_nxArchiveResource_GetTargetResource* self,
    _In_ const MSFT_nxArchiveResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_SetPtr_OutputResource(
    _Inout_ MSFT_nxArchiveResource_GetTargetResource* self,
    _In_ const MSFT_nxArchiveResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_GetTargetResource_Clear_OutputResource(
    _Inout_ MSFT_nxArchiveResource_GetTargetResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

/*
**==============================================================================
**
** MSFT_nxArchiveResource.TestTargetResource()
**
**==============================================================================
*/

typedef struct _MSFT_nxArchiveResource_TestTargetResource
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MSFT_nxArchiveResource_ConstRef InputResource;
    /*IN*/ MI_ConstUint32Field Flags;
    /*OUT*/ MI_ConstBooleanField Result;
    /*OUT*/ MI_ConstUint64Field ProviderContext;
}
MSFT_nxArchiveResource_TestTargetResource;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_nxArchiveResource_TestTargetResource_rtti;

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Construct(
    _Out_ MSFT_nxArchiveResource_TestTargetResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_ConstructParameters(context, &MSFT_nxArchiveResource_TestTargetResource_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Clone(
    _In_ const MSFT_nxArchiveResource_TestTargetResource* self,
    _Outptr_ MSFT_nxArchiveResource_TestTargetResource** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Destruct(
    _Inout_ MSFT_nxArchiveResource_TestTargetResource* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Delete(
    _Inout_ MSFT_nxArchiveResource_TestTargetResource* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Post(
    _In_ const MSFT_nxArchiveResource_TestTargetResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Set_MIReturn(
    _Inout_ MSFT_nxArchiveResource_TestTargetResource* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Clear_MIReturn(
    _Inout_ MSFT_nxArchiveResource_TestTargetResource* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Set_InputResource(
    _Inout_ MSFT_nxArchiveResource_TestTargetResource* self,
    _In_ const MSFT_nxArchiveResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_SetPtr_InputResource(
    _Inout_ MSFT_nxArchiveResource_TestTargetResource* self,
    _In_ const MSFT_nxArchiveResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Clear_InputResource(
    _Inout_ MSFT_nxArchiveResource_TestTargetResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Set_Flags(
    _Inout_ MSFT_nxArchiveResource_TestTargetResource* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->Flags)->value = x;
    ((MI_Uint32Field*)&self->Flags)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Clear_Flags(
    _Inout_ MSFT_nxArchiveResource_TestTargetResource* self)
{
    memset((void*)&self->Flags, 0, sizeof(self->Flags));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Set_Result(
    _Inout_ MSFT_nxArchiveResource_TestTargetResource* self,
    _In_ MI_Boolean x)
{
    ((MI_BooleanField*)&self->Result)->value = x;
    ((MI_BooleanField*)&self->Result)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Clear_Result(
    _Inout_ MSFT_nxArchiveResource_TestTargetResource* self)
{
    memset((void*)&self->Result, 0, sizeof(self->Result));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Set_ProviderContext(
    _Inout_ MSFT_nxArchiveResource_TestTargetResource* self,
    _In_ MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->ProviderContext)->value = x;
    ((MI_Uint64Field*)&self->ProviderContext)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_TestTargetResource_Clear_ProviderContext(
    _Inout_ MSFT_nxArchiveResource_TestTargetResource* self)
{
    memset((void*)&self->ProviderContext, 0, sizeof(self->ProviderContext));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_nxArchiveResource.SetTargetResource()
**
**==============================================================================
*/

typedef struct _MSFT_nxArchiveResource_SetTargetResource
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MSFT_nxArchiveResource_ConstRef InputResource;
    /*IN*/ MI_ConstUint64Field ProviderContext;
    /*IN*/ MI_ConstUint32Field Flags;
}
MSFT_nxArchiveResource_SetTargetResource;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_nxArchiveResource_SetTargetResource_rtti;

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_Construct(
    _Out_ MSFT_nxArchiveResource_SetTargetResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_ConstructParameters(context, &MSFT_nxArchiveResource_SetTargetResource_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_Clone(
    _In_ const MSFT_nxArchiveResource_SetTargetResource* self,
    _Outptr_ MSFT_nxArchiveResource_SetTargetResource** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_Destruct(
    _Inout_ MSFT_nxArchiveResource_SetTargetResource* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_Delete(
    _Inout_ MSFT_nxArchiveResource_SetTargetResource* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_Post(
    _In_ const MSFT_nxArchiveResource_SetTargetResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_Set_MIReturn(
    _Inout_ MSFT_nxArchiveResource_SetTargetResource* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_Clear_MIReturn(
    _Inout_ MSFT_nxArchiveResource_SetTargetResource* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_Set_InputResource(
    _Inout_ MSFT_nxArchiveResource_SetTargetResource* self,
    _In_ const MSFT_nxArchiveResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_SetPtr_InputResource(
    _Inout_ MSFT_nxArchiveResource_SetTargetResource* self,
    _In_ const MSFT_nxArchiveResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_Clear_InputResource(
    _Inout_ MSFT_nxArchiveResource_SetTargetResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_Set_ProviderContext(
    _Inout_ MSFT_nxArchiveResource_SetTargetResource* self,
    _In_ MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->ProviderContext)->value = x;
    ((MI_Uint64Field*)&self->ProviderContext)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_Clear_ProviderContext(
    _Inout_ MSFT_nxArchiveResource_SetTargetResource* self)
{
    memset((void*)&self->ProviderContext, 0, sizeof(self->ProviderContext));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_Set_Flags(
    _Inout_ MSFT_nxArchiveResource_SetTargetResource* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->Flags)->value = x;
    ((MI_Uint32Field*)&self->Flags)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxArchiveResource_SetTargetResource_Clear_Flags(
    _Inout_ MSFT_nxArchiveResource_SetTargetResource* self)
{
    memset((void*)&self->Flags, 0, sizeof(self->Flags));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_nxArchiveResource provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _MSFT_nxArchiveResource_Self MSFT_nxArchiveResource_Self;

MI_EXTERN_C void MI_CALL MSFT_nxArchiveResource_Load(
    _Outptr_result_maybenull_ MSFT_nxArchiveResource_Self** self,
    _In_opt_ MI_Module_Self* selfModule,
    _In_ MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_nxArchiveResource_Unload(
    _In_opt_ MSFT_nxArchiveResource_Self* self,
    _In_ MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_nxArchiveResource_EnumerateInstances(
    _In_opt_ MSFT_nxArchiveResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_opt_ const MI_PropertySet* propertySet,
    _In_ MI_Boolean keysOnly,
    _In_opt_ const MI_Filter* filter);

MI_EXTERN_C void MI_CALL MSFT_nxArchiveResource_GetInstance(
    _In_opt_ MSFT_nxArchiveResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const MSFT_nxArchiveResource* instanceName,
    _In_opt_ const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_nxArchiveResource_CreateInstance(
    _In_opt_ MSFT_nxArchiveResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const MSFT_nxArchiveResource* newInstance);

MI_EXTERN_C void MI_CALL MSFT_nxArchiveResource_ModifyInstance(
    _In_opt_ MSFT_nxArchiveResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const MSFT_nxArchiveResource* modifiedInstance,
    _In_opt_ const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_nxArchiveResource_DeleteInstance(
    _In_opt_ MSFT_nxArchiveResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const MSFT_nxArchiveResource* instanceName);

MI_EXTERN_C void MI_CALL MSFT_nxArchiveResource_Invoke_GetTargetResource(
    _In_opt_ MSFT_nxArchiveResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_opt_z_ const MI_Char* methodName,
    _In_ const MSFT_nxArchiveResource* instanceName,
    _In_opt_ const MSFT_nxArchiveResource_GetTargetResource* in);

MI_EXTERN_C void MI_CALL MSFT_nxArchiveResource_Invoke_TestTargetResource(
    _In_opt_ MSFT_nxArchiveResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_opt_z_ const MI_Char* methodName,
    _In_ const MSFT_nxArchiveResource* instanceName,
    _In_opt_ const MSFT_nxArchiveResource_TestTargetResource* in);

MI_EXTERN_C void MI_CALL MSFT_nxArchiveResource_Invoke_SetTargetResource(
    _In_opt_ MSFT_nxArchiveResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_opt_z_ const MI_Char* methodName,
    _In_ const MSFT_nxArchiveResource* instanceName,
    _In_opt_ const MSFT_nxArchiveResource_SetTargetResource* in);


#endif /* _MSFT_nxArchiveResource_h */
