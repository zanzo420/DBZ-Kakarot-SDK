
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

// Function Sub_Npc011_00_03.Sub_Npc011_00_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASub_Npc011_00_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc011_00_03.Sub_Npc011_00_03_C.UserConstructionScript");

	ASub_Npc011_00_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc011_00_03.Sub_Npc011_00_03_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void ASub_Npc011_00_03_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc011_00_03.Sub_Npc011_00_03_C.PhaseEvent");

	ASub_Npc011_00_03_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc011_00_03.Sub_Npc011_00_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASub_Npc011_00_03_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc011_00_03.Sub_Npc011_00_03_C.ReceiveBeginPlay");

	ASub_Npc011_00_03_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc011_00_03.Sub_Npc011_00_03_C.ExecuteUbergraph_Sub_Npc011_00_03
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Npc011_00_03_C::ExecuteUbergraph_Sub_Npc011_00_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc011_00_03.Sub_Npc011_00_03_C.ExecuteUbergraph_Sub_Npc011_00_03");

	ASub_Npc011_00_03_C_ExecuteUbergraph_Sub_Npc011_00_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
