#pragma once

#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Sub_Npc032_02.Sub_Npc032_02_C.UserConstructionScript
struct ASub_Npc032_02_C_UserConstructionScript_Params
{
};

// Function Sub_Npc032_02.Sub_Npc032_02_C.PhaseEvent
struct ASub_Npc032_02_C_PhaseEvent_Params
{
};

// Function Sub_Npc032_02.Sub_Npc032_02_C.OnCancelSubQuest
struct ASub_Npc032_02_C_OnCancelSubQuest_Params
{
};

// Function Sub_Npc032_02.Sub_Npc032_02_C.OnCancelSubQuestTransition
struct ASub_Npc032_02_C_OnCancelSubQuestTransition_Params
{
};

// Function Sub_Npc032_02.Sub_Npc032_02_C.OnIngameBegan
struct ASub_Npc032_02_C_OnIngameBegan_Params
{
};

// Function Sub_Npc032_02.Sub_Npc032_02_C.OnOpenSimpleTalk
struct ASub_Npc032_02_C_OnOpenSimpleTalk_Params
{
	struct FName                                       SimpleTalkId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       messageId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sub_Npc032_02.Sub_Npc032_02_C.MiniGameTiming
struct ASub_Npc032_02_C_MiniGameTiming_Params
{
	struct FMinigameTimingArgment                      Argment;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Sub_Npc032_02.Sub_Npc032_02_C.ExecuteUbergraph_Sub_Npc032_02
struct ASub_Npc032_02_C_ExecuteUbergraph_Sub_Npc032_02_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
