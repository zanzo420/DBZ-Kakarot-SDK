
#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Xcmn_Win01_List.Xcmn_Win01_List_C.SetSelectState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXcmn_Win01_List_C::SetSelectState(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_Win01_List.Xcmn_Win01_List_C.SetSelectState");

	UXcmn_Win01_List_C_SetSelectState_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xcmn_Win01_List.Xcmn_Win01_List_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXcmn_Win01_List_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_Win01_List.Xcmn_Win01_List_C.Construct");

	UXcmn_Win01_List_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xcmn_Win01_List.Xcmn_Win01_List_C.ExecuteUbergraph_Xcmn_Win01_List
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXcmn_Win01_List_C::ExecuteUbergraph_Xcmn_Win01_List(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_Win01_List.Xcmn_Win01_List_C.ExecuteUbergraph_Xcmn_Win01_List");

	UXcmn_Win01_List_C_ExecuteUbergraph_Xcmn_Win01_List_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
