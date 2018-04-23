// Fill out your copyright notice in the Description page of Project Settings.

#include "NPCController_base.h"



int ANPCController_base::GetTeam()
{
	return GetGenericTeamId().GetId();
}

void ANPCController_base::SetTeam(int t)
{
	SetGenericTeamId(FGenericTeamId(t));
}
