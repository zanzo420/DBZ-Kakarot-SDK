
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

// Function Sub_Cpl026_01_04.Sub_Cpl026_01_04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASub_Cpl026_01_04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_04.Sub_Cpl026_01_04_C.UserConstructionScript");

	ASub_Cpl026_01_04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl026_01_04.Sub_Cpl026_01_04_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void ASub_Cpl026_01_04_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_04.Sub_Cpl026_01_04_C.PhaseEvent");

	ASub_Cpl026_01_04_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl026_01_04.Sub_Cpl026_01_04_C.OnIngameBegan
// (Event, Public, BlueprintEvent)

void ASub_Cpl026_01_04_C::OnIngameBegan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_04.Sub_Cpl026_01_04_C.OnIngameBegan");

	ASub_Cpl026_01_04_C_OnIngameBegan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl026_01_04.Sub_Cpl026_01_04_C.ExecuteUbergraph_Sub_Cpl026_01_04
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Cpl026_01_04_C::ExecuteUbergraph_Sub_Cpl026_01_04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_04.Sub_Cpl026_01_04_C.ExecuteUbergraph_Sub_Cpl026_01_04");

	ASub_Cpl026_01_04_C_ExecuteUbergraph_Sub_Cpl026_01_04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
