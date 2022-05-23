#pragma once

extern u16 gSomethingRelatedToAnimAndDistance; //! FE8U = 0x203E120

void StartFadeOutBlackMedium(ProcPtr);
int ContinueUntilSomeTransistion6CExists(); // WaitForFade
// int NewFadeOut(ProcPtr);
int FadeOutExists();



void DeletePlayerPhaseInterface6Cs(); // EndPlayerPhaseSideWindows