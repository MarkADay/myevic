#ifndef __SCREENS__
#define __SCREENS__

//==============================================================================

#define BLINKITEM(i) ((EditModeTimer)&&(!gFlags.draw_edited_item)&&(EditItemIndex==(i)))

//==============================================================================

extern uint8_t	Screen;
extern uint16_t	ScreenDuration;
extern uint16_t	ScreenRefreshTimer;

extern uint16_t	HideLogo;
extern uint8_t	ShowWeakBatFlag;
extern uint8_t	BatAnimLevel;
extern uint8_t	ShowProfNum;

extern uint8_t	EditItemIndex;
extern uint16_t	EditModeTimer;

extern const uint8_t ScrSaveTimes[8];
extern const uint8_t ScrMainTimes[6];

extern void DrawClock();
extern void DrawDigitClock();

enum {
	SSAVER_NONE = 0,
	SSAVER_CLOCK,
	SSAVER_3D,
	SSAVER_LOGO,
	SSAVER_QIX,
	SSAVER_SNOW,
	SSAVER_MAX
};

//==============================================================================

extern void DrawScreen();
extern void ShowMainView();
extern void ShowBattery();
extern void ShowBatCharging();
extern void ShowBattVolts();
extern void ShowBoardTemp();
extern void ShowVersion();
extern void ShowNewCoil();
extern void ShowTCRSet();
extern void ShowStealthMode();
extern void ShowDevTooHot();
extern void ShowAtoLow();
extern void ShowAtoShort();
extern void ShowBatLow();
extern void ShowBatLowLock();
extern void ShowKeyLock();
extern void ShowKeyUnLock();
extern void ShowNoAtoFound();
extern void Show10sProtec();
extern void ShowWeakBat();
extern void ShowInfos();
extern void ShowContrast();
extern void ShowMenus();
extern void ShowRTCSpeed();
extern void ShowRTCAdjust();
extern void ShowScreenSaver();
extern void ShowSetTime();
extern void ShowSetDate();
extern void ShowCheckBattery();
extern void ShowCheckUSB();
extern void ShowChargeError();
extern void ShowImbBatts();

extern void ShowFireDuration( int line );

extern uint16_t GetScreenProtection();
extern uint16_t GetMainScreenDuration();
extern void SetScreen( int screen, int duration );

//==============================================================================

extern void MainView();
extern void ChargeView();
extern void AnimateScreenSaver();
extern int IsClockOnScreen();
extern int IsMenuScreen();


//==============================================================================
// Strings

extern const uint16_t String_ON[];
extern const uint16_t String_No[];
extern const uint16_t String_On[];
extern const uint16_t String_Key[];
extern const uint16_t String_OFF[];
extern const uint16_t String_Low[];
extern const uint16_t String_Off[];
extern const uint16_t String_Lock[];
extern const uint16_t String_UnLock[];
extern const uint16_t String_Protection[];
extern const uint16_t String_Version[];
extern const uint16_t String_Device[];
extern const uint16_t String_TooHot[];
extern const uint16_t String_Stealth[];
extern const uint16_t String_Temp[];
extern const uint16_t String_Battery[];
extern const uint16_t String_Atomizer[];
extern const uint16_t String_Found[];
extern const uint16_t String_Short[];
extern const uint16_t String_LongFire[];
extern const uint16_t String_NewCoil[];
extern const uint16_t String_SameCoil[];
extern const uint16_t String_Right[];
extern const uint16_t String_Left[];
extern const uint16_t String_Logo[];
extern const uint16_t String_Game[];
extern const uint16_t String_Easy[];
extern const uint16_t String_Normal[];
extern const uint16_t String_Hard[];
extern const uint16_t String_Exit[];
extern const uint16_t String_NI[];
extern const uint16_t String_TI[];
extern const uint16_t String_SS[];
extern const uint16_t String_BF_s[];
extern const uint16_t String_TCR[];
extern const uint16_t String_PWR_s[];
extern const uint16_t String_AMP_s[];
extern const uint16_t String_MAX_s[];
extern const uint16_t String_MIN_s[];
extern const uint16_t String_Weak[];
extern const uint16_t String_TEMP[];
extern const uint16_t String_TCRSet[];
extern const uint16_t String_POWER[];
extern const uint16_t String_BYPASS[];
extern const uint16_t String_VOLT_s[];
extern const uint16_t String_COIL_s[];
extern const uint16_t String_TIME_s[];
extern const uint16_t String_PUFF_s[];
extern const uint16_t String_SMART[];
extern const uint16_t String_End[];

//-------------------------------------------------------------------------

// from mainview.c
extern const uint16_t String_BATT_s[];
extern const uint16_t String_VOUT_s[];
extern const uint16_t String_TEMP_s[];
extern const uint16_t String_BOARD_s[];
extern const uint16_t String_RES_s[];
extern const uint16_t String_LIQ_s[];

// from screens.c
extern const uint16_t String_Contrast[];
extern const uint16_t String_Fireto[];
extern const uint16_t String_Edit[];
extern const uint16_t String_ClkSpeed[];
extern const uint16_t String_ClkAdjust[];
extern const uint16_t String_myevic[];
extern const uint16_t String_Build[];
extern const uint16_t String_mld[];
extern const uint16_t String_ml[];
extern const uint16_t String_Check[];
extern const uint16_t String_Adapter[];
extern const uint16_t String_Charge[];
extern const uint16_t String_Error[];
extern const uint16_t String_Imbalanced[];
extern const uint16_t String_Batteries[];
extern const uint16_t String_BALANCE_s[];
extern const uint16_t String_BAL_s[];

// from menus.c
extern const uint16_t String_Menus[];
extern const uint16_t String_Modes[];
extern const uint16_t String_TEMP_NI_s[];
extern const uint16_t String_TEMP_TI_s[];
extern const uint16_t String_TEMP_SS_s[];
extern const uint16_t String_TCR_s[];
extern const uint16_t String_POWER_s[];
extern const uint16_t String_BYPASS_s[]; 
extern const uint16_t String_SMART_s[];
extern const uint16_t String_Coils[];
extern const uint16_t String_Zero_All[];
extern const uint16_t String_Miscs[];
extern const uint16_t String_DateTime[];
extern const uint16_t String_Cancel[];
extern const uint16_t String_Save[];
extern const uint16_t String_Clock[];
extern const uint16_t String_3D[];
extern const uint16_t String_Cube[];
extern const uint16_t String_Qix[];
extern const uint16_t String_None[];
extern const uint16_t String_Screen[];
extern const uint16_t String_Min[];
extern const uint16_t String_VCOM[];
extern const uint16_t String_Expert[];
extern const uint16_t String_USB[];
extern const uint16_t String_HID[];
extern const uint16_t String_COM[];
extern const uint16_t String_DSK[];
extern const uint16_t String_DBG[];
extern const uint16_t String_X32[];
extern const uint16_t String_NFE[];
extern const uint16_t String_Saver[];
extern const uint16_t String_Preheat[];
extern const uint16_t String_Time[];
extern const uint16_t String_Pwr[];
extern const uint16_t String_Manage[];
extern const uint16_t String_Unit[];
extern const uint16_t String_Main[];
extern const uint16_t String_Interface[];
extern const uint16_t String_BattPC[];
extern const uint16_t String_1Watt[];
extern const uint16_t String_1C5F[];
extern const uint16_t String_Font[];
extern const uint16_t String_Date[];
extern const uint16_t String_SetTime[];
extern const uint16_t String_SetDate[];
extern const uint16_t String_WakeMP[];
extern const uint16_t String_2[];
extern const uint16_t String_3[];
extern const uint16_t String_4[];
extern const uint16_t String_OnOff[];
extern const uint16_t String_ModePlus[];
extern const uint16_t String_PPwr[];
extern const uint16_t String_Clicks[];
extern const uint16_t String_BAT[];
extern const uint16_t String_GEN[];
extern const uint16_t String_25R[];
extern const uint16_t String_HG2[];
extern const uint16_t String_HE4[];
extern const uint16_t String_30Q[];
extern const uint16_t String_VT4[];
extern const uint16_t String_VT5[];
extern const uint16_t String_VT6[];
extern const uint16_t String_CUS[];
extern const uint16_t String_Vaping[];
extern const uint16_t String_Prot[];
extern const uint16_t String_Snow[];
extern const uint16_t String_Fmt[];
extern const uint16_t String_DMY1[];
extern const uint16_t String_DMY2[];
extern const uint16_t String_MDY[];
extern const uint16_t String_YMD[];
extern const uint16_t String_Dial[];
extern const uint16_t String_Invert[];
extern const uint16_t String_SHR[];
extern const uint16_t String_Tetra[];
extern const uint16_t String_Vaped[];
extern const uint16_t String_BVO[];
extern const uint16_t String_mlkJ[];
extern const uint16_t String_LSL[];
extern const uint16_t String_Show[];
extern const uint16_t String_Where[];
extern const uint16_t String_Top[];
extern const uint16_t String_Mid[];
extern const uint16_t String_Size[];
extern const uint16_t String_hms[];
extern const uint16_t String_HM[];
extern const uint16_t String_Octa[];
extern const uint16_t String_Dodeca[];
extern const uint16_t String_Isoca[];
extern const uint16_t String_B1[];
extern const uint16_t String_B2[];
extern const uint16_t String_B3[];
extern const uint16_t String_M1[];
extern const uint16_t String_M2[];
extern const uint16_t String_M3[];
extern const uint16_t String_DEF[];
extern const uint16_t String_UCH[];
extern const uint16_t String_Algo[];
extern const uint16_t String_Auto[];
extern const uint16_t String_Sweet[];
extern const uint16_t String_Boost[];
extern const uint16_t String_PID[];
extern const uint16_t String_P[];
extern const uint16_t String_I[];
extern const uint16_t String_D[];
extern const uint16_t String_Yes[];
extern const uint16_t String_Led[];
extern const uint16_t String_Red[];
extern const uint16_t String_Green[];
extern const uint16_t String_Blue[];
extern const uint16_t String_Delay[];
extern const uint16_t String_Profile[];
extern const uint16_t String_TC[];
extern const uint16_t String_PW[];
extern const uint16_t String_BY[];
extern const uint16_t String_SM[];
extern const uint16_t String_ProfPlus[];


//==============================================================================

#endif
