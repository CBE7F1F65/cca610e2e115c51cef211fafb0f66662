#ifndef _CONSTRESOURCE_H
#define _CONSTRESOURCE_H

#include "Const.h"

//consts

#define LOG_STR_FILENAME		"TH_DES.log"

#define DATA_DEFAULTSTR_WIDE	"������������"
#define DATA_DEFAULTSTR			"????"

#define CONFIG_STR_FILENAME				"TH_CONFIG.ini"
#define CONFIG_STR_DEFAULTFILENAME		"hge.ini"

#define RESDEFAULT_FONTFILE				"Graphic/font.fnt"
#define RESDEFAULT_FONTFONT				"MS Gothic"

#define RESDEFAULT_DATARESOURCE			"TH_RESOURCE.res"
#define RESDEFAULT_DATABIN				"TH_BIN.databin"
//#define RESDEFAULT_DATASPELLACCESS		"TH_SPELLACCESS.databin"
//#define RESDEFAULT_DATASCRIPT			"TH_SCRIPT.databin"
#define RESDEFAULT_DATACUSTOMCONST		"TH_CUSTOMCONST.table"
#define RESDEFAULT_DATASPELLDEFINE		"TH_SPELLDEFINE.table"
#define RESDEFAULT_DATAMUSICDEFINE		"TH_MUSICDEFINE.table"
#define RESDEFAULT_DATASCENEDEFINE		"TH_SCENEDEFINE.table"
#define RESDEFAULT_DATABULLETDEFINE		"TH_BULLETDEFINE.table"
#define RESDEFAULT_ENEMYDEFINE			"TH_ENEMYDEFINE.table"
#define RESDEFAULT_DATAPLAYERDEFINE		"TH_PLAYERDEFINE.table"
#define RESDEFAULT_DATASPRITEDEFINE		"TH_SPRITEDEFINE.table"
#define RESDEFAULT_DATAPLAYERBULLETDEFINE	"TH_PLAYERBULLETDEFINE.table"
#define RESDEFAULT_DATAPLAYERSHOOTDEFINE	"TH_PLAYERSHOOTDEFINE.table"
#define RESDEFAULT_DATAPLAYERGHOSTDEFINE	"TH_PLAYERGHOSTDEFINE.table"
#define RESDEFAULT_DATADATADEFINE		"TH_DataTable.table"
#define RESDEFAULT_DATAPACKAGEDEFINE	"TH_PackageTable.table"
#define RESDEFAULT_DATATEXTUREDEFINE	"TH_TextureTable.table"
#define RESDEFAULT_DATAEFFECTDEFINE		"TH_EffectTable.table"
#define RESDEFAULT_DATASEDEFINE			"TH_SETable.table"

//#define RESDEFAULT_SCRIPTFOLDER		"Script/"
#define RESDEFAULT_SNAPSHOTFOLDER	"SnapShot/"
#define RESDEFAULT_REPLAYFOLDER		"Replay/"
#define RESDEFAULT_DATAFOLDER		"Data/"

#define RESDEFAULT_SCRIPTEXT7		"script"
#define RESDEFAULT_REPLAYEXT7		"rpy"

#define RESDEFAULT_RPYSIGNATURE11		"DES_TH_09X"
#define RESDEFAULT_RPYTEMPSIGN3			"rpy"
#define RESDEFAULT_RPYCOMPLETESIGN3		"RPY"
#define RESDEFAULT_RPYTAG3				"09X"

//CONFIG
#define RESCONFIGS_RESOURCE				"Resource"
#define RESCONFIGN_RESOURCEFILE			"ResourceFile"
#define RESCONFIGDEFAULT_RESOURCEFILE		""
#define RESCONFIGN_RESBINNAME			"ResourceBinName"
#define RESCONFIGDEFAULT_RESBINNAME			RESDEFAULT_DATAFOLDER RESDEFAULT_DATARESOURCE
#define RESCONFIGN_PASSWORD				"Password"
#define RESCONFIGDEFAULT_PASSWORD			"h5nc"

#ifdef __WIN32
#define RESCONFIGS_KEYSETTING_1	"KeySetting_1"
#define RESCONFIGS_KEYSETTING_2	"KeySetting_2"
#else
#define RESCONFIGS_KEYSETTING_1	"KeySetting_PSP_1"
#define RESCONFIGS_KEYSETTING_2	"KeySetting_PSP_2"
#endif // __WIN32

#define RESCONFIGN_JOYFIRE		"JoyFire"
#define RESCONFIGDEFAULT_JOYFIRE	3
#define RESCONFIGN_JOYQUICK		"JoyQuick"
#define RESCONFIGDEFAULT_JOYQUICK	2
#define RESCONFIGN_JOYSLOW		"JoySlow"
#define RESCONFIGDEFAULT_JOYSLOW	7
#define RESCONFIGN_JOYDRAIN		"JoyDrain"
#define RESCONFIGDEFAULT_JOYDRAIN	6
#define RESCONFIGN_JOYPAUSE		"JoyPause"
#define RESCONFIGDEFAULT_JOYPAUSE	1
#define RESCONFIGN_DEBUG_JOYSPEEDUP	"Debug_JoySpeedUp"
#define RESCONFIGDEFAULT_DEBUG_JOYSPEEDUP	5
#define RESCONFIGN_JOYCOMBINESLOWDRAIN	"JoyCombineSlowDrain"

#define RESCONFIGDEFAULT_JOYCOMBINESLOWDRAIN	1

#define RESCONFIGN_KEYUP		"KeyUp"
#define RESCONFIGN_KEYDOWN		"KeyDown"
#define RESCONFIGN_KEYLEFT		"KeyLeft"
#define RESCONFIGN_KEYRIGHT		"KeyRight"
#define RESCONFIGN_KEYFIRE		"KeyFire"
#define RESCONFIGN_KEYQUICK		"KeyQuick"
#define RESCONFIGN_KEYSLOW		"KeySlow"
#define RESCONFIGN_KEYDRAIN		"KeyDrain"
#define RESCONFIGN_KEYPAUSE		"KeyPause"
#define RESCONFIGN_KEYSKIP		"KeySkip"
#define RESCONFIGN_KEYENTER		"KeyEnter"
#define RESCONFIGN_KEYESCAPE	"KeyEscape"
#define RESCONFIGN_KEYCAPTURE	"KeyCapture"
#define RESCONFIGN_KEYCOMBINESLOWDRAIN	"KeyCombineSlowDrain"

#ifdef __WIN32

#define RESCONFIGDEFAULT_KEYUP_1		DIK_UP
#define RESCONFIGDEFAULT_KEYDOWN_1		DIK_DOWN
#define RESCONFIGDEFAULT_KEYLEFT_1		DIK_LEFT
#define RESCONFIGDEFAULT_KEYRIGHT_1		DIK_RIGHT
#define RESCONFIGDEFAULT_KEYFIRE_1		DIK_Z
#define RESCONFIGDEFAULT_KEYQUICK_1		DIK_X
#define RESCONFIGDEFAULT_KEYSLOW_1		DIK_LSHIFT
#define RESCONFIGDEFAULT_KEYDRAIN_1		DIK_C
#define RESCONFIGDEFAULT_KEYUP_2		DIK_W
#define RESCONFIGDEFAULT_KEYDOWN_2		DIK_S
#define RESCONFIGDEFAULT_KEYLEFT_2		DIK_A
#define RESCONFIGDEFAULT_KEYRIGHT_2		DIK_D
#define RESCONFIGDEFAULT_KEYFIRE_2		DIK_J
#define RESCONFIGDEFAULT_KEYQUICK_2		DIK_K
#define RESCONFIGDEFAULT_KEYSLOW_2		DIK_L
#define RESCONFIGDEFAULT_KEYDRAIN_2		DIK_I

#define RESCONFIGDEFAULT_KEYPAUSE	DIK_SPACE
#define RESCONFIGDEFAULT_KEYSKIP	DIK_LCONTROL
#define RESCONFIGDEFAULT_KEYENTER	DIK_RETURN
#define RESCONFIGDEFAULT_KEYESCAPE	DIK_F4
#define RESCONFIGDEFAULT_KEYCAPTURE	DIK_HOME

#else // __WIN32

#ifdef __PSP

#define         _PSP_CTRL_SELECT    0
#define         _PSP_CTRL_START     3
#define         _PSP_CTRL_UP        4
#define         _PSP_CTRL_RIGHT     5
#define         _PSP_CTRL_DOWN      6
#define         _PSP_CTRL_LEFT      7
#define         _PSP_CTRL_LTRIGGER  8
#define         _PSP_CTRL_RTRIGGER  9
#define         _PSP_CTRL_TRIANGLE  12
#define         _PSP_CTRL_CIRCLE    13
#define         _PSP_CTRL_CROSS     14
#define         _PSP_CTRL_SQUARE    15
#define         _PSP_CTRL_HOME      16
#define         _PSP_CTRL_HOLD      17
#define         _PSP_CTRL_NOTE      23
#define			_PSP_CTRL_SCREEN	22
#define			_PSP_CTRL_VOLUP		20
#define			_PSP_CTRL_VOLDOWN	21
#define			_PSP_CTRL_WLAN_UP	18
#define			_PSP_CTRL_REMOTE	19
#define			_PSP_CTRL_DISC		24
#define			_PSP_CTRL_MS		25

#define			_PSP_CTRL_NULL		31
#define			_PSP_CTRL_NULL_QUIT	28

#define RESCONFIGDEFAULT_KEYUP_1		_PSP_CTRL_UP
#define RESCONFIGDEFAULT_KEYDOWN_1		_PSP_CTRL_DOWN
#define RESCONFIGDEFAULT_KEYLEFT_1		_PSP_CTRL_LEFT
#define RESCONFIGDEFAULT_KEYRIGHT_1		_PSP_CTRL_RIGHT
#define RESCONFIGDEFAULT_KEYFIRE_1		_PSP_CTRL_SQUARE
#define RESCONFIGDEFAULT_KEYQUICK_1		_PSP_CTRL_CROSS
#define RESCONFIGDEFAULT_KEYSLOW_1		_PSP_CTRL_RTRIGGER
#define RESCONFIGDEFAULT_KEYDRAIN_1		_PSP_CTRL_LTRIGGER
#define RESCONFIGDEFAULT_KEYUP_2		_PSP_CTRL_NULL
#define RESCONFIGDEFAULT_KEYDOWN_2		_PSP_CTRL_NULL
#define RESCONFIGDEFAULT_KEYLEFT_2		_PSP_CTRL_NULL
#define RESCONFIGDEFAULT_KEYRIGHT_2		_PSP_CTRL_NULL
#define RESCONFIGDEFAULT_KEYFIRE_2		_PSP_CTRL_NULL
#define RESCONFIGDEFAULT_KEYQUICK_2		_PSP_CTRL_NULL
#define RESCONFIGDEFAULT_KEYSLOW_2		_PSP_CTRL_NULL
#define RESCONFIGDEFAULT_KEYDRAIN_2		_PSP_CTRL_NULL

#define RESCONFIGDEFAULT_KEYPAUSE	_PSP_CTRL_CIRCLE
#define RESCONFIGDEFAULT_KEYSKIP	_PSP_CTRL_TRIANGLE
#define RESCONFIGDEFAULT_KEYENTER	_PSP_CTRL_SQUARE
#define RESCONFIGDEFAULT_KEYESCAPE	_PSP_CTRL_NULL_QUIT
#define RESCONFIGDEFAULT_KEYCAPTURE	_PSP_CTRL_NULL

#endif	// __PSP

#endif	// __WIN32


#define RESCONFIGDEFAULT_KEYCOMBINESLOWDRAIN	1

#define RESCONFIGS_VOLUME		"Volume"
#define RESCONFIGN_VOLMUSIC		"Music"
#define RESCONFIGDEFAULT_VOLMUSIC	100
#define RESCONFIGN_VOLSE		"SE"
#define RESCONFIGDEFAULT_VOLSE		100

#define RESCONFIGS_CUSTOM		"Custom"
#define RESCONFIGN_SCREENMODE	"ScreenMode"
#define RESCONFIGDEFAULT_SCREENMODE	0
#define RESCONFIGN_USERNAME		"UserName"
#define RESCONFIGDEFAULT_USERNAME	"NoName"
#define RESCONFIGN_RENDERSKIP	"RenderSkip"
#define RESCONFIGDEFAULT_RENDERSKIP	0
#define RESCONFIGN_LASTMATCHCHARA_1_1	"LastMatchChara_1_1"
#define RESCONFIGDEFAULT_LASTMATCHCHARA_1_1	0
#define RESCONFIGN_LASTMATCHCHARA_1_2	"LastMatchChara_1_2"
#define RESCONFIGDEFAULT_LASTMATCHCHARA_1_2	0xffff
#define RESCONFIGN_LASTMATCHCHARA_1_3	"LastMatchChara_1_3"
#define RESCONFIGDEFAULT_LASTMATCHCHARA_1_3	0xffff
#define RESCONFIGN_LASTMATCHCHARA_2_1	"LastMatchChara_2_1"
#define RESCONFIGDEFAULT_LASTMATCHCHARA_2_1	1
#define RESCONFIGN_LASTMATCHCHARA_2_2	"LastMatchChara_2_2"
#define RESCONFIGDEFAULT_LASTMATCHCHARA_2_2	0xffff
#define RESCONFIGN_LASTMATCHCHARA_2_3	"LastMatchChara_2_3"
#define RESCONFIGDEFAULT_LASTMATCHCHARA_2_3	0xffff

#define RESCONFIGS_CONNECT		"Connect"
#define RESCONFIGN_LASTIPX		"LastIPx"
#define RESCONFIGN_LASTIPPORT	"LastIPPort"

#define RESCONFIGS_CUSTOMWINDOW		"CustomWindow"
#define RESCONFIGN_DEFAULTWINDOW	"DefaultWindow"
#define RESCONFIGDEFAULT_DEFAULTWINDOW	1
#define RESCONFIGN_WINDOWLEFT		"WindowLeft"
#define RESCONFIGDEFAULT_WINDOWLEFT		0
#define RESCONFIGN_WINDOWTOP		"WindowTop"
#define RESCONFIGDEFAULT_WINDOWTOP		0
#define RESCONFIGN_WINDOWWIDTH		"WindowWidth"
#define RESCONFIGDEFAULT_WINDOWWIDTH	640
#define RESCONFIGN_WINDOWHEIGHT		"WindowHeight"
#define RESCONFIGDEFAULT_WINDOWHEIGHT	480
#define RESCONFIGN_WINDOWTOPMOST	"WindowTopMost"
#define RESCONFIGDEFAULT_WINDOWTOPMOST	0

#define RESCONFIGS_SYSTEM			"System"
#define RESCONFIGN_USE3DMODE		"Use3DMode"
#define RESCONFIGDEFAULT_USE3DMODE		0

#define RESLOADING_PCK	"Loading.pck"
#define RESLOADING_TEX	"Loading/Loading.tex"

#define RESDEFAULT_UISTR_FILENAME		"File"
#define RESDEFAULT_UISTR_USERNAME		"Name"
#define RESDEFAULT_UISTR_SCORE			"Score"
#define RESDEFAULT_UISTR_POINT			"Point Item"
#define RESDEFAULT_UISTR_FAITH			"Faith"
#define RESDEFAULT_UISTR_ALLTIME		"Play Time"
#define RESDEFAULT_UISTR_DATE			"Date"
#define RESDEFAULT_UISTR_LOST			"Lost Rate"
#define RESDEFAULT_UISTR_BORDERRATE		"Border Rate"
#define RESDEFAULT_UISTR_FASTRATE		"Fast Rate"
#define RESDEFAULT_UISTR_MODEFLAG		"Mode"
#define RESDEFAULT_UISTR_MODE_NONE		"Normal"
#define RESDEFAULT_UISTR_MODE_PRACTICE	"Stage Practice"
#define RESDEFAULT_UISTR_MODE_SPELL		"SpellCard Practice"
#define RESDEFAULT_UISTR_USINGCHARA		"Charactors"
//#define RESDEFAULT_UISTR_MAXPLAYER		"Max Player"
#define RESDEFAULT_UISTR_MISSTIME		"Miss"
#define RESDEFAULT_UISTR_BORDERTIME		"Border"
#define RESDEFAULT_UISTR_CONTINUETIME	"Continue"
#define RESDEFAULT_UISTR_GETTIME		"SpellCard Get"
#define RESDEFAULT_UISTR_PAUSETIME		"Pause"
#define RESDEFAULT_UISTR_DIFFLV			"Level"
#define RESDEFAULT_UISTR_LASTSTAGE		"Last Stage"
#define RESDEFAULT_UISTR_GRAZE			"Graze"
#define RESDEFAULT_UISTR_CONFIRM		"OK"

#define SNAPSHOT_PRIFIX		"SnapShot"
#define SNAPSHOT_EXTENSION	"bmp"

#endif