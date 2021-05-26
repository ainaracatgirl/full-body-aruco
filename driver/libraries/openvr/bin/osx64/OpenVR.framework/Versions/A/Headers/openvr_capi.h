//======= Copyright (c) Valve Corporation, All rights reserved. ===============
//
// Purpose: Header for flatted SteamAPI. Use this for binding to other languages.
// This file is auto-generated, do not edit it.
//
//=============================================================================

#ifndef __OPENVR_API_FLAT_H__
#define __OPENVR_API_FLAT_H__
#if defined( _WIN32 ) || defined( __clang__ )
#pragma once
#endif

#ifdef __cplusplus
#define EXTERN_C extern "C"
#else
#define EXTERN_C
#endif

#if defined( _WIN32 )
#define OPENVR_FNTABLE_CALLTYPE __stdcall
#else
#define OPENVR_FNTABLE_CALLTYPE 
#endif

// OPENVR API export macro
#if defined( _WIN32 ) && !defined( _X360 )
	#if defined( OPENVR_API_EXPORTS )
	#define S_API EXTERN_C __declspec( dllexport )
	#elif defined( OPENVR_API_NODLL )
	#define S_API EXTERN_C
	#else
	#define S_API extern "C" __declspec( dllimport ) 
	#endif // OPENVR_API_EXPORTS
#elif defined( __GNUC__ )
	#if defined( OPENVR_API_EXPORTS )
	#define S_API EXTERN_C __attribute__ ((visibility("default")))
	#else
	#define S_API EXTERN_C
	#endif // OPENVR_API_EXPORTS
#else // !WIN32
	#if defined( OPENVR_API_EXPORTS )
	#define S_API EXTERN_C
	#else
	#define S_API EXTERN_C
	#endif // OPENVR_API_EXPORTS
#endif

#include <stdint.h>

#if defined( __WIN32 )
typedef char bool;
#else
#include <stdbool.h>
#endif

typedef uint64_t PropertyContainerHandle_t;
typedef uint32_t PropertyTypeTag_t;
typedef uint64_t VRActionHandle_t;
typedef uint64_t VRActionSetHandle_t;
typedef uint64_t VRInputOriginHandle_t;


// OpenVR Constants

static const unsigned int k_nDriverNone = 4294967295;
static const unsigned int k_unMaxDriverDebugResponseSize = 32768;
static const unsigned int k_unTrackedDeviceIndex_Hmd = 0;
static const unsigned int k_unMaxTrackedDeviceCount = 16;
static const unsigned int k_unTrackedDeviceIndexOther = 4294967294;
static const unsigned int k_unTrackedDeviceIndexInvalid = 4294967295;
static const unsigned long k_ulInvalidPropertyContainer = 0;
static const unsigned int k_unInvalidPropertyTag = 0;
static const unsigned int k_unFloatPropertyTag = 1;
static const unsigned int k_unInt32PropertyTag = 2;
static const unsigned int k_unUint64PropertyTag = 3;
static const unsigned int k_unBoolPropertyTag = 4;
static const unsigned int k_unStringPropertyTag = 5;
static const unsigned int k_unHmdMatrix34PropertyTag = 20;
static const unsigned int k_unHmdMatrix44PropertyTag = 21;
static const unsigned int k_unHmdVector3PropertyTag = 22;
static const unsigned int k_unHmdVector4PropertyTag = 23;
static const unsigned int k_unHiddenAreaPropertyTag = 30;
static const unsigned int k_unOpenVRInternalReserved_Start = 1000;
static const unsigned int k_unOpenVRInternalReserved_End = 10000;
static const unsigned int k_unMaxPropertyStringSize = 32768;
static const unsigned int k_unControllerStateAxisCount = 5;
static const unsigned long k_ulOverlayHandleInvalid = 0;
static const unsigned int k_unScreenshotHandleInvalid = 0;
static const char * IVRSystem_Version = "IVRSystem_017";
static const char * IVRExtendedDisplay_Version = "IVRExtendedDisplay_001";
static const char * IVRTrackedCamera_Version = "IVRTrackedCamera_003";
static const unsigned int k_unMaxApplicationKeyLength = 128;
static const char * k_pch_MimeType_HomeApp = "vr/home";
static const char * k_pch_MimeType_GameTheater = "vr/game_theater";
static const char * IVRApplications_Version = "IVRApplications_006";
static const char * IVRChaperone_Version = "IVRChaperone_003";
static const char * IVRChaperoneSetup_Version = "IVRChaperoneSetup_005";
static const char * IVRCompositor_Version = "IVRCompositor_021";
static const unsigned int k_unVROverlayMaxKeyLength = 128;
static const unsigned int k_unVROverlayMaxNameLength = 128;
static const unsigned int k_unMaxOverlayCount = 64;
static const unsigned int k_unMaxOverlayIntersectionMaskPrimitivesCount = 32;
static const char * IVROverlay_Version = "IVROverlay_016";
static const char * k_pch_Controller_Component_GDC2015 = "gdc2015";
static const char * k_pch_Controller_Component_Base = "base";
static const char * k_pch_Controller_Component_Tip = "tip";
static const char * k_pch_Controller_Component_HandGrip = "handgrip";
static const char * k_pch_Controller_Component_Status = "status";
static const char * IVRRenderModels_Version = "IVRRenderModels_005";
static const unsigned int k_unNotificationTextMaxSize = 256;
static const char * IVRNotifications_Version = "IVRNotifications_002";
static const unsigned int k_unMaxSettingsKeyLength = 128;
static const char * IVRSettings_Version = "IVRSettings_002";
static const char * k_pch_SteamVR_Section = "steamvr";
static const char * k_pch_SteamVR_RequireHmd_String = "requireHmd";
static const char * k_pch_SteamVR_ForcedDriverKey_String = "forcedDriver";
static const char * k_pch_SteamVR_ForcedHmdKey_String = "forcedHmd";
static const char * k_pch_SteamVR_DisplayDebug_Bool = "displayDebug";
static const char * k_pch_SteamVR_DebugProcessPipe_String = "debugProcessPipe";
static const char * k_pch_SteamVR_DisplayDebugX_Int32 = "displayDebugX";
static const char * k_pch_SteamVR_DisplayDebugY_Int32 = "displayDebugY";
static const char * k_pch_SteamVR_SendSystemButtonToAllApps_Bool = "sendSystemButtonToAllApps";
static const char * k_pch_SteamVR_LogLevel_Int32 = "loglevel";
static const char * k_pch_SteamVR_IPD_Float = "ipd";
static const char * k_pch_SteamVR_Background_String = "background";
static const char * k_pch_SteamVR_BackgroundUseDomeProjection_Bool = "backgroundUseDomeProjection";
static const char * k_pch_SteamVR_BackgroundCameraHeight_Float = "backgroundCameraHeight";
static const char * k_pch_SteamVR_BackgroundDomeRadius_Float = "backgroundDomeRadius";
static const char * k_pch_SteamVR_GridColor_String = "gridColor";
static const char * k_pch_SteamVR_PlayAreaColor_String = "playAreaColor";
static const char * k_pch_SteamVR_ShowStage_Bool = "showStage";
static const char * k_pch_SteamVR_ActivateMultipleDrivers_Bool = "activateMultipleDrivers";
static const char * k_pch_SteamVR_DirectMode_Bool = "directMode";
static const char * k_pch_SteamVR_DirectModeEdidVid_Int32 = "directModeEdidVid";
static const char * k_pch_SteamVR_DirectModeEdidPid_Int32 = "directModeEdidPid";
static const char * k_pch_SteamVR_UsingSpeakers_Bool = "usingSpeakers";
static const char * k_pch_SteamVR_SpeakersForwardYawOffsetDegrees_Float = "speakersForwardYawOffsetDegrees";
static const char * k_pch_SteamVR_BaseStationPowerManagement_Bool = "basestationPowerManagement";
static const char * k_pch_SteamVR_NeverKillProcesses_Bool = "neverKillProcesses";
static const char * k_pch_SteamVR_SupersampleScale_Float = "supersampleScale";
static const char * k_pch_SteamVR_AllowAsyncReprojection_Bool = "allowAsyncReprojection";
static const char * k_pch_SteamVR_AllowReprojection_Bool = "allowInterleavedReprojection";
static const char * k_pch_SteamVR_ForceReprojection_Bool = "forceReprojection";
static const char * k_pch_SteamVR_ForceFadeOnBadTracking_Bool = "forceFadeOnBadTracking";
static const char * k_pch_SteamVR_DefaultMirrorView_Int32 = "defaultMirrorView";
static const char * k_pch_SteamVR_ShowMirrorView_Bool = "showMirrorView";
static const char * k_pch_SteamVR_MirrorViewGeometry_String = "mirrorViewGeometry";
static const char * k_pch_SteamVR_StartMonitorFromAppLaunch = "startMonitorFromAppLaunch";
static const char * k_pch_SteamVR_StartCompositorFromAppLaunch_Bool = "startCompositorFromAppLaunch";
static const char * k_pch_SteamVR_StartDashboardFromAppLaunch_Bool = "startDashboardFromAppLaunch";
static const char * k_pch_SteamVR_StartOverlayAppsFromDashboard_Bool = "startOverlayAppsFromDashboard";
static const char * k_pch_SteamVR_EnableHomeApp = "enableHomeApp";
static const char * k_pch_SteamVR_CycleBackgroundImageTimeSec_Int32 = "CycleBackgroundImageTimeSec";
static const char * k_pch_SteamVR_RetailDemo_Bool = "retailDemo";
static const char * k_pch_SteamVR_IpdOffset_Float = "ipdOffset";
static const char * k_pch_SteamVR_AllowSupersampleFiltering_Bool = "allowSupersampleRIFFì> WEBPVP8X
      ? ³  ANIM   ÿÿÿÿ  ANMF¨        ? ³  }  VP8   Ðq *@´ >‘@›J¥£¢"%Õ;˜°	eàét'p¹ôÌ4Ï¶¸Iõ3þyŸ;vgE‡­%~Ÿë:p½•ì¶‚ÿÌÿ~§ü¶¯î|àùoó?ô¿™Þ{ƒÀ'èÓáýÇü+üÏìª?h¿Ý{€~«ÿ¸ö#ýÿ†Þ?Ø{ ÿ%þÁÿGüŸæÉWüŸæ4=¯ý;ÿ‹ýÀGó?ì?ôÃ{UzóýÎÿïîgúãÿ„Ü0üé±+¯&;}yk£ÈÖ™ì ãe®¯Õº˜zHâ[Î©µÙÖúpúâ3+È‰ewÕ‘žðO‡cæ²x¡°äå°¼±Sá•Ç)âÚæo>ÚÜÌlþ‹Õòùû¡ .¬WßÇ/ÏËá+ÓvBÖ¶Í”v5ºGþ›lÐed¦ÔÅð4zãžâíó[òìéJ2òˆD´Àj°'s—x
|d¿¢,Ð©¢´ýê‘'àsÛÉLiËE¤²sWfV_ò:Ï4|»jt”¦ËpõËgHx½äé«_°^¬ºfôÉ×¬h²‹Jbž€öZrÜ«ý»/Ok!%KqÜ²’Œ®ílÁ×©Î¥g˜H¥Óz0v;P]g¹{[žŒÉ>­c¤çå_Â=3`)gÆŽ p‚!ÿC÷ÿîÛÝrYo…NJ]¡d>â¢žrzZ['”X| ø#ìÒ¦N÷bâá¸æª‘@×+¨Êg÷W¬…H• ^§§{/ÀnÀ
i /f–y«ÛâNüi÷êûGô?TQ)LcFÒM«¡ðžCÎyîeÐùÜ	>˜”åA#Xt[\¹9,áÕÙ¢0i¨Ï·oýöd>èbû)qO|Ì¯w1Ñ"V»Û>^ÅGNt½³|üžF}Eí´ÎÌá)"hÄ=Ý÷Ót€÷–Ãvtëˆl¿ÃT@ÙíÒ ©ôÈ«¨þ·ï>Uå˜+Ï@ðKW‡”ÕbWüh”B,´‚wŠò¡ü/ ¨2Çª˜³ÍLþäò/²>4‰­yq§©æ=ÚåIC¦>Únuµû¿÷ Ú$®6Ÿ†ÊøaÄŸP52v…À	ÚmåÃŒí#a	öFôt«+ãês´|ª)7flæ˜RèÖ¾“…'$ÙEüQVMuC'²5ƒÕ3¹†Ž¡æÄôn’:ãm[F<›ÄÔ&lzû$ÛÉÞeaåÛéª[36Ž/€ þðˆJÒt
_f£`ûÝ»¥Ô•Dá=äBùéÙPgx`®§îVÕçãkÓsoÚ¢ƒ¤DR­T®é’V5”¶kR‘\*çAè‚xïhvã¤#ò=¦˜:ê.oí&]K×	µÜ·´ìüàÎ¬Å]*pl[˜Y#8Âv"w6Lc³Yö*æ}F^DnÌ
•ÌÀsã*‹”±}y‰~
“`nCí˜¬-‘,HÄrŒVR/Šc<yåI4Ä– À+¼ŸÉƒZöø1`Ý\á.‚Aõ?ŠîÐýPñÌQÇÃ%¨7GTý7ÍÑôÄ6:½ åÏ´|zX`kãA[‹&Ž÷c †…NY°qwîp´_¹Õ†pÙîôË„Ê—¥) K5–!_¬{zˆbøOØ¾ý;ßOFÁ<f€fž÷Cr¯	Ãÿ¸‘¢dÙU'õCTpÖ¦¼ôiUR1Ê³Ý]…n¯M¸zPhH}—x‹ Z‡xÝÐS`yB¼
™“J)s¼	ùïƒ=‡rŽ·óB§éÖË"ä‘”‹]†°¤†ÎozÞç¾lRï.˜‘ÛW„²…qŸºFŸ£­ô±®i Võ5ìRÕ£"\ù"Ú<˜§êò¦£q"‘åG7›~²Í‹ÿžÀÊÅM$ó,eúwÛåª´DÚƒóÎ&¤¢?W\2ïþ-îED²ìá@µ^ßTÐ6;k]¥ 
®6D“1ŸI5³:?s0ñù(¯Üô%Ìç	æ­$Âš®´ªËK¨\ÛtØI“7Œtb+¥.…m_±øËó9„Ûe±‰åÍÂPµJEn–a	ÈÔÃFq¬~¯I”-NYÁ£ðƒvÍHÆUè! "ÎÁbh§O`dé˜«jåK0 TåM|^T%mÿˆ]ºöw'Sº×¹ñ˜`ýÎ]ÓÝ¹Üw­Í¤­]õÌ™•y˜…¦IŸ<ˆÖ5H"®y/ ÁñÈÕa¡Ê,/äøF˜Ã:¿×zá5>¥×† ž•FŸ£…uÀKM¥¸*ú GHR—,‚ZgTîJ-!pÑûWf™È™æîÅ,Ä‡!ˆ!Wð)µx‹zud™"¬Êý‚&_ñ„˜Ïfíh'`Q
@€Â‹¦ÃHU¬®P™íÛb|e%$’ñ8ÛGu5^Ôè%{wÀRÍ°ŒcëÌÝdZ¤Ãó½ñU}ðÞ“›•)þ FpuqHÚ¼¾¯mÕ.‚ãrBüj¨“ŽÛiWE|Žûl’3<Œœwq…–3”xg% Ëigr½!g"š¡WU“1tE&m-²ˆÏ`_oE¯¬ãtØéUtänÊDoå”ÛS¹ŠÊBzGš*dyë} <0€iþ}#ôÈ…ô<ßHj×çZÓQ…‹Ç¨šUª–›Á$SKsÈíì!J//ìBnß«ÚB¾ÖÈD•¤|
žÙˆ]Ÿæ žÍCÌÄ1'À„
n²ö*z`ô4žlpŸM{íw¤•³Ñ°§[ ïâ7Yü¹û˜¿‡“áA.ÿbŸ$¹¡#¼äVx?x	—b¦îT«†i2*½¯UEO¹W·Kóù)ª q+Z1#Ðía^uƒÙ:à‚7¡ºYëÒƒ=”J0¨€+RØÒ ~³oŠ@óµ:Ûgë]µmî7/Ý`O;–EŽiN–À„§·hí–!dÆN=6ÐYÇ²øâ¦xr 0âÙ„ÏùµêŸ[®W•mÿÄml3,Ñu€6Ùn×±¶}[ðÐè{®©vm†¬…yu¥vî6ØËKÝ€Ò
‘ÂL3+Åö9çÛLÈ=&¸¸IÄÌŒ5¿Ç•b¼ù°­úÞZ ëä–×òz¾Ê¼9¥<)CJFhCsùñ{:[§Œ˜„g5˜íŸW	Q› ?‘òªèdô1PB!xjVð˜/×PAÉÁ6V!†Hÿv.·[©€ÕrCYËõ1 Ó×Ï6R&²ŸWíÓ<¯\<o^DËv\G ë0!‡C‘öx¯PYAQ·¦XsXkUC/K„ˆèäy";»Ÿ\^&²Y²{µ•“Õ&·÷‰ß„Aü´ü·¥z¯‡'#t®¶$Øã‚¨ãànoˆû ­z'Ÿ`§ÕÉ„à‹+°tx©$	O½þ(_*Å‚ÎenÝ’{ÿàpSÞpã*õ öX“/&/~†jŒÉ–l%¼–Ot³b’³TšMP+‡®bN_&=µ¸àÅ “âj…ÕöÒ	3ê¶xQôÛ/'‰á¯Ý•´R€£d”¨°qý!²“ýp5µRŠ©,P’QYàï;ð_F½“§Òf…ê ]–»Ç`¼<N@ø%ý#L!²#{Þ¹^ê/Ù–ÅÆøqëŠ|þª?ÌÖÝ x’°IwoCE;àW\®ŒEh¥“w¤’+kÛÈ[²zÆXÎPö¼¬ƒãöåþÄMŸ¼H}ð1$ Hýü”TŒhW‘Óp/—*ìqëäÌ^4ÀuÃZOÃÁ¹³ÄßÆ©Q˜¹½|MÓ.eò\Åø¸)rãd¥Än;—žÒNžÐ)Kv²FzÈM='wö=±m™¥ÂIh(ú<‹‡ÖÞ8NóL´:º5ÉH`¸Þ‘‹ª­K_¦¼q6VD°•s&6KcÿÍ’—´9#õÈT‘ÜŸ.œÕòñ‹²ñÏ,aKoN0ÿ'|š7uLáa ž3¶ƒû*§%HÓ¹Èbµ¿l¹Û©ÕïÖ1Š^UÜó#ú`øëøRWè#âƒDCuƒÃ_i´Èn™–Yº$êjŸWÎ¼]ó ³Ab6Ã]Ï1tjãh¹`©ÜÃÈ«]0o±‚$ü\²G(v{mjPÏq“@éØ!ý½6í†L75EÆ;5À¹!{¾f˜ÆÊ\¹y“ûÓ=èz§9¬B; ^~¬ü¸Ìèê_¸MëPñtm²è}6äÖ>(]Ñ—!¹…2x“0ž á†oŒÄGØ¯ZÜÖ/Öðÿ¦mscÆ¬’âü­¤lL½BÄŠôWŸYœ	Êäéÿö//é—®Vÿô|Šü©ß™Å*ŒÓRÉ|`Ø;\lºÂÄciáöAZƒwòD~ŸÒÛ@¿
!M#’OÇ@Í‡w¸¶u¶ïoI½É„#³Ž3~ˆ9 ù3€qò«‹" Êsñx¾äŸ'}ŒRäna¿ªÂuæa>Û±—®(µúð þÎ^¿°ÅðŽœXkQ°A@Zô6ïv¬Ó[™'µ•#$,’ã(Pk5ŽU¦²V¿ó	$Õ÷Ÿéˆ?ÀÃdœïRàÉi¶Êi//õjxi,yþñê´®?m2ö8Ö™Åã
®"\ª/JXË‚­¬¿Œš’rðÞ}$I–5¸®˜ü}Bö°Iì?BÉ%ü¦\Hq`’E-õîPGð,ódÝ‘«n½÷Päc¥}QÕ›Ù teOñL±‚á¢lù±¡ÆOËìpb"ùÛú»µ˜h©DX‹]p¸0Ç“;y	Çý°þ¯¾¿"yµd®•Û·Í{»ÔZô›¼Î»QÞº`-N'ÁÕ;›¦C<°ßrÒ‰OŠWdoYøtƒ}/pÎÓBH8è*d˜ÁâýeY¦Ò~'Åˆì^ ñÝÌÔ‹"ÔØ¿¼‹@FR¿§‹Y9¦ßØšEZ¥E%î4N¨ÝÕ"m»ƒíMFÛ*U:+šÚÄ5¼Ê·ÌöÔNb…¶®P}ÕÍÒŽ/	—¦ò´¶0é|/–XhŠÁEÅÍØ±±Ïúˆ‹Á¿aV‘~[ŽF•Øßå­Œ±6º±¨8Å	¬jbÅoŽuÅëÏ]û_1~Å²ÒP±‰™	â·ËÚ4%x±h9:ÒÎ†>^Ó#øjì;dH4•XÏÚBŠÊÞ©0:xÄ‰#+õQM¢Þ]ì¤+¼šòzº'm€ÁÚ³½ô¦¦žmPcDì5õ;u±Í·8×#`°Xþ¾‘Í×°1W*¾°DÂ‹œÏŽÏÎÔËZÖã»³2Þ$CˆQƒ´ïìžå)Új¾“[”Lž:A`+G5æ0ï|%à¦\·yfypi® ©çÆÉeÖ‚€¹ Lf¤™Áó&íÆ¥rN!!þ]Ž0•N:…ŠÁ2 c¥ß£¯ù‡ì†õ#úÑàÄLõ¹TÂe
÷-^léaàÄÝþæ•»¨ð/Pªk)”¯ÚµÕ_mReŠCâÆŠO“Ê°ý+ÉL¢e®}s%Ó:DÄçSÈ:°C»ÈHÞZ³P3ú[xEm£¢A:³Ô%å)pÖr7Ë¡ÿœáÿ©Øñ!ü3:‚ã¡}Ërža¡WhlÄšY×©AaåP?u›ÇY<òïpØ^Éx§‚—‹¸¾ãè[e×$ðº ±M„‰‘Ë¦ª0ÂK7½ó¦˜h¤Ø0å3dbga¢ MY'*g%¿PŒ%#Qâ)®ìéµÓg±¡$ÛéH‚zI¥Á¯mOÚŒÁÐ+ò3R6q•72dŠŽ>?XÊï×vøJ¾é»ÜÐÊê2ë+o¨Ô %Ñ¿Ö´e¨(1³¼ößÙ«p. X~:ƒ.°qïÕ½‡ÊVr„1…ëçýêûF­¤ðOeÿ«£dšpû–l°É|w†¶›oúÞü¥_4Œ”-üý$c¾4.W™ß®ç…	Oã ‚õn–ýFšOIé8„ßZJºã•¹3bOþq×ôEøs8™TËv½/Àáÿ¦J8á&(aK–‰P”`….dô-¼„ð§„f|&îw8_Å0ËŸÎÂAùÏîªCôyIðûìƒüt{ä|+òØÞM'OY\
+—¼cÎÔ¡‚~ÁxžYŽæ²6yÆ®æZd¢ú~h²ùjG ÄKE7·#ŒA¡"É$%n7-§«Çàå§Ô­V”ñÌO¡jÐv¬Å[Ô¼¦‰Hàw\Ð«héx—6Z§«ïÍ½ºöÝ\êÉ%-… dá}ôç½/GÁùtÏ½ÿÖƒ’&5—ÏªŸ­ÿªr‰%×ÚOe€æ‡pü¸†dr?¼gd¢MXqÙ¤vó_HàgŠAçMµ0¿ð"+¥;!EÝµÅ¬ƒàª¦|qšÚÌÈ“)
KjÄUÀ/eh÷Ÿ4ß¹‘#*[žwäG‚P¿#^Xž&»^îF(2ghé˜î?^&E!¨úh‹½¸g|ò<6SÚ£öÿÙ±þYi]ŠÀKJÝÈ³…ÀÃ‡T¬Æ¢Æ·} w¢GWftY*Á`”gR>D/kñ
Üûlèc8,ãþˆ:ŸE¸o¯Ð#±%À“ËÙÈ"bÒºÖË?‰“â]ãpÌˆª¿ÚíDË/í¼²@Zïær ,tYÄ˜\UÝÈÜiÛ[‰‘HIÁY¨)ÅèQZ%¬ìäº³Û÷†¨¿ø×ó/¨5nåÂbÉËCzgD?}Ô¼ŽüSµ>9pùÂ\0Æg!èûRëkz@5vÔ4ƒù{öÅ{Kn¬OLËÞ±õÜÔ÷Nm†ñ´íÌæ¨Œšb|Ïñ“0fØH²å)­¥»8Eîôé Ã+%ÿF"¨AªbApÝ¦0Ê,¶ŠÊðððÊ5%[x÷	NÄàÙ0RúgÛœQ¶Ïp79KÔZ;Ð¦âËëÆ~;ì¥z¹ØáÕdâ/‚;òæÐ¬¨žìGŠÞ#c¯q¬¾ZsëÍV‡÷×-yôiçAcÚI“èä~7oðÉòÕ‡˜iå<îÁzMeªŽnÈb7Š'‹£ÞI;6ÃéÙÄø<<i"¶ÕkúVs¯˜Ñš»êX#¯²îl,Q§)k)µ~äÃ¨ «› 8ÊtšàTÁ¥>¸2Ó­2Ê€ÒøÇæØˆv&ý‰¢7’/¼ô}¿Að'„ÒäöÏ¢Ÿ±£•ƒ˜~^$« ¡NO9×ø$†Š2±H]ßË:Eý¥$[w[	95žÒó‡,+A^q·èºÆõ#‹ÔÚ*¦!|sE¯øÆDEÔý. '˜DNc'6h‰±ß}bf+‘]c~Ô6s;È^ç‹TÖŽÝëÇ¯œ$˜ëe%ˆ[üª`<_ò)HìÖ¦¾™Í¶jüÐÅ)[³™É¾² ÈL—Àú²èLÔøCqöì'dÐ–¯}2‰|µÅÎˆÅc“ŽÂ}Ò7ˆ7E©xM–Èÿ÷ZÔò†j»7€ôµôÈ@©IŽ47mÂ÷9Ú’o‘E´™#¿ãÆ’ÇZ	±YÅ8»v‚>rÎÐ…é±ŽÅ ûáÏ§çøº 7?·‹mq¾AÃXØT¶4ÚÇ¹"åæä6@RGRà˜K\X¹x›_NfÚÁÃ¿w‰‘ É¼¸yþÀ·1ïëw¨`æ|¹¿W¨>q„c]ì}J(u¼î+®:êû€gòKÜûeEv´ìE\À!Lõ‘¦/X-ïtÎ½h·ÁÞ>PÇ˜íMÜZ{d×]°ˆ`Ò©=i‚ö-·äZ»SÅkDÕÿ‰³98áúÄ3É¨U31¯S=‘ûâ4¹&	_Ð]GÚ±2ìßa‹ÐA L#úAÜø_Ž¬sbœ§è7s¸¢ç£{ÿ¾ó>«‡žLªÛû”ÌêÛ½â0¸LÌ¯B¡Þ*Åpzn`B¸e'D%>^×~ãr¬Ol?ÀßLõå^c!ø_)+9ùá°à]…óœ%t»ŸZXD¶!”p±¼‰1°®-ÄPµaK5#{pÏ£Ãà^]Ñ+aér&ˆÃ!QvRe	…"´Gßœû’åÌp§ôžõ(E	¨Sõ„©2¹Ý ¼óÜ~CÓ°òKXã]cïo:¬+ºˆ`jŸU­tq-@>'¿´ í°õûÞX5­âÉÝ¨ü
ÀéTpýò6ÞÖ/ìO‹Y²FFt2¡ï²R|¥€[Ó vµIR·¡(¤"EñvÙ*:|b#ð‡M÷PB#è—ýw K·EÆ§ý«`“={.üUWf¡^3±Jà’ú®9¸RÃé’Q¤ëzß‡¡%4ŽãÙÓckLpÝPšxï«+û'E„
nLÞ¢6mÊ’ñç&¶`4ëý-ÎäØ÷Ž³ïå”øgPÀ½zŒ‘gl
]¯xí(Yô€ó…Ë]K”2/Ørwèæ¶n`"S=3Ö]§ôjgªÈ¯Ãó‹FÅÑ æ‘–¬x°Hn¡a\‰*Jví"ºf†F¤²TŠÏùDÛ¦JÁ@’‡Ý£É¥íÄe'GZ˜Ë¹ õÔ´“oÝŸ~²Zr€¦ìÕ~ù–'zæüA*'Òri&»«ÆZhæ°òõ£g˜039^+é“Häd'7£ýBÉÑU†ŸÊœ´öï“‡0n©&¥ºö™VšœYFî wñvÎàè}LŠµØ!¨ž;q€„²Þì‚ëç¦ÜZ:aç‘Í+@£5~;‘!Çþ+ö“Qås\˜1éôn)óH	«’ÚlÆ};z­ØÐêaïÿ|/JôõK~uÅª8ì©–; A?#pgZwøžZÚ›¹wnÊ0JvÉå™èà½’ÝÍÔÑµ=ëY¯¾°º›ƒ’èT¡F_TÃûõÎ²dcé¹ò
qqß;<1‚·Ÿ>ZüxˆûÕ3Ú¿«ªWÙG~J2z¬WHp“¼çmÕÓ<³}P¸£Ly„œœv‡û’¡džÂ“ŒûÆŽ,]½52°7¬HeÊ<0»Êæn‡yØÖƒ÷¡zcˆèšKn00†H™òÁoyu}oA¸qŽdpy{ò¥|ÇÆ|gŽ¿µ Õ»ìõFœ2oÍ¬¢(àÌ™?Ô
¥§úÐ®öë¦×Á1¿Ý¸˜ãN! ºvsŽ@âvŠÄì?üˆá&À*”>Ör÷<z…ŽÛ¡ù`Î‚E„5=@¼hxP……-±ÎÈVþÔÔR›]á ÊpÕ¾Œ8xÃp3l«†Æ}Ëlnó×Û”%jIÖá	Ê0/9rX[JG·s>*º—©Î
¥YßS¬_âÙ6‡’À‰ž>}°Dÿ,q¥!´V–}-ïQ{xï*r‘¥È`a&ü.–¶
ŒJµwömýÿ1ÂåÜ›ñu¹‡{÷ä`ûÆnB-ãÏ[Ð
5¤±Ö@|Ù$T‘“a ²î¤É>Ës(-ÿj×…pÂuÏHmŽlßÈŠÏôw~+»/ Räºß¶ÎÌ8(ê­e0>"5ÓéF$§°/«`tøSí9;ÑEµîq± wƒ:Iö!+Šµó)c°÷Ö Ž% ß£Ÿ/MøT•×Dvy½÷ŠúšdG‘Þ«Uôû=÷§Ä€®Ó°;"@¬EÈÉÏòÇˆ»=çŸCNœ‡i@qš°tèC¤i5ØxÚ‹«L¶¡*c@Ë~ŒðêíŽ0œTîl	}îq.–„[ÀËç-2õoF¤=Žö1òI%hÖ(¼/³uÜþ8=Íî­E½©W¼{0U@ó¶bNI…èLBlwúJ¬¯pQ¨ýùO&0ÿ^ôãå
?øü¾ñ‚}_Ì¢ÃÎÆ—ùÀm0ÐVSXÜj2RYrÞú)[ÚFç´ñü¡à»’º?A&tï[äÿÞ©-^W„§ù÷3½¥RÇ¬f”qî6×’L{ªÞ2¸])Ðä`le"²ÔÃkq~g¡F1Ùï(^B,JI ºÈjYIVó,a¹õñ¹â	Vj?íM/©Óný‰´Ó€    ANMF„        ? ³  }  VP8 l  ô[ *@´ >‘DœKAM¨€ –p=€ÓDG­2F‚^u9}èñ•É:[½kìîs?¼¦þûíÛúßþSjêô»î ó_éßðÂúÑ|¯üÏF¾Åû ,þÿ+×/õ!?gÿgìüÃú÷þï>Â_ð™ÿ)ûíÓôoò_ø¿Éü/þ¹ÿü¶§®/ÛoýÞæ?«òÉgÿ§a¨RˆŸ?õ÷ËhÃ»°x‰QÝ}g·ëËß:9ãÅ.‰q—}ç?Ÿ¨Hz®z® 	È÷Mg?ô{G%EZ­ÔXq.DÿÅÚ®ñ0ºÑ²ÒØžÿYD—ns1öï.ö‰?‰Â¯>·ükYKlÙß]$4‘Vëq´‚å>ŠTª—t0­€ë»à4¶[ûZpŠ(@^EpšsþWn‹¯O¿Ï2Ôó.uŽb¥*f§©7¨WG”¦#7ØŠ‚ûË¬½ìtêŸÔ&í‘ã$e«Õ•=™ûˆr`:—h$UKÉIûíp82Á¬"S]†=³>oìÎ5?=îÆ=X#²+^Ál÷à“ÕÊK5oÍ“À¤_äp„·?Ýÿï‰cÓ5?Æ	æÑz„E<óÝÐ™¤$$GþÍ«g¸fKÎeŠé-=™ñî/Ì½à/›BJàÄƒ†i¸ÃíèEñÍÙàÀ/ÃIM&)h‘ U66Bb¶áLPZ1¯KŒð"AO¹uxo±¢h£zY>?1”9Ñ¶—]p¸ñÑþD¸Þž:½~ù²,üãÁ¸Æõ9í‚»…T¬|ƒÓ2õ™åÙÄ€šü#qßt~_“èðý?É¼‘‡Eë«ï†£r-ÝA)êœúæp¾;ŸÅAË=Õä¯sy•>¶ë½`&j’ŒÌž@LIN¿È$ÿíöØ¿U'ÍŸøk»÷Sa‰n(®ÃHMù³.Ç}/uþW¯¥äX`{nžBô  þûxçßñ÷ßÔ“…£¦1¡è¸*õc„fÔÝ9¬íŽFã²Å,TÉ@| xÑÇŽýFâU›Ô³Ö™÷ŒÄÂ³çœÜŒráiqÍÄûs¥Ú=r9¥ò	ž‰õuï–=ËI³•z6<=¤ûÚÅÅr¦D5—XTm!œrïÑÊ¬Üýñ\}Õ87Ñç Î•î.‡ÀJ€ÙÖãTóœ§B¬˜ ¹³ˆ)õ½XÇLú	r¨
`Æ_Ñ™¾áLp Iô[ \„©ïWZÐ`yÒh‰ÁDÒÐ
æ´ËuîP½€¤ð†Æ}œèîo”Ì×ÈdÐ8’áGÝìT˜Á9„Iµ…)_èRŽ{Ì¨RoL%;_Ï°Ê½T—š÷ –<c|C³×ÍB\f§ÃÂãÅ»¿«°ËÙÙL¼/ñZ‰Èiã»}›¸ ;ì`ÖEôé)yjn„åS1“)"“rý#“|fûK5~Ù|ºÇßä«™¯'+~CâEF»âµæãvRyñÉöPÐV	u);ç {øqÎYá*P¹…;h?Ð ÜY~ôACéäeráÛø¶cÍû	ï¤ÀRïïºeIÛrá¼\–¦¼u¯ëR‡ƒ U|ByÜç€_NáuXË‚™^Ê˜«Ô‚j–³#-á¸Z½Ð‚¦ãh5PÉaª& èN½â¦ƒñ<|êÖRûdVpW€á÷@ö³^;Æ)Nêoe¡}«ŽŠïgö‘Â»Í9X¼2Td iÊ¾ñ³•C,,üÞ)oOSq–EKÔ	Î>qCÓ¢¯Úã<Â|ùÑà0·TºwÍ¨›IÔ«ßaYcáÚ¼#*Ì·Ì?È¨š:y:mÚ"ÖåM|{ÎîXìÕºiÖúX6[ÖÈ†s‰E0†|ç|Y‰¨¤
¼<Áhþ¶ 6Sþ(qbÇ$pý¡égâÑéÆrüøC~§…'¾ðlòéSØX‚ æ$èuÚjð1©\kö¶@{P÷ö¼g§=“ÍîÎ“ka J$ çoþ¥óËÂÂGþ;À ÝÒè&fŽU%[ñƒ‡h5e2JEy6³-(þ[Ã&6ÆÂµiùe<ÿÊ‰‘ßœ9P÷&?Puý¿Š,Z=’ÿ&7Q÷çVÕg–§b¹×Î Ê˜í_î•w¬¾Ï)nXôK²Z@}œ»žžCü­0o¼âQ±í“ãî¨®ððøüM@vVM0W²C^üÒíg_y¥Úóõ·H3Ï˜@Oy¹æãFÔ|ý"2V¾$ ¯íÂäèråR¤ºä^ÃIQ×æ²ýZ5ÿR÷-…¡“ÄSFðYµ¥ÇeÅmI=–gåÔ
²Â=Y7$~1Vz\tÓ‚Õƒ¾°ûÞ]MJù®¬ÝÉc=Ü±³~™£„œj£%œ*9É*y^	ñÌjŠ ™ŠÒ¦	uØüs êÜ‡íß”P-_D=sx¿‹Ä¹Î9…ù0ë·21”4î?GøÍ+ïó32LÉß„;¹GÄÏ.G	úÚå/“æ‡N`ds}”ù ã©ÞZÔRó•ƒy£mVjû›Kw¿ï”=YG­^Bâ]J´t ½³rãIßö÷µÅ'Í´¾@0¨å¥¢»’&uW4DÞtí®l3)Ú•£yP…\ŸFu*qÿ‹7dZôÞ±û4WÖ‚££Î`qáÿ úç£ÁßîP¬ºƒŒ»Ú1<78ò3âÝ”bdŒdE,ÅÔ† ¾p¼Ì§9ÂšÖ¹žPÊß1\ïªœC×Äf€I_ažÂ@y8Àmí¶Ú²ßÓ‚ëÐQ©ì¿#5oL’†3TÇ½7ÛåâPÀí•gçŠÌyvS:¦ax Žu¸á2]jpnŸIwC½tèbí™b>Ê!õoÑ4‡BƒhëÌŸfRlT(Ô9ë˜±k¬|&?|ôæ}Ý„ÇK»u‰°Ðçîp€c«qÐó&wÞ@%¨j!ŒIÊZl]Çëð»)p´ +_Ua~:|už[:zŠ-)#B«—4aZëÙm„zƒ.O<ŠèzÞ81©j¦¯ß©ðËújj ôk
;zÖgvPà^Ô?‚$ù+Ì0çfH!Åy„¸ô>wzKR‘fäôœæ¸ý°ñ®ùðGÔ
óénó¦}=³È¤5×	¨ÊÐ`	ð2™ØoýzÖççÐ!À‘íÕÌáŒñPlÏˆw•ðÍF€  P^%¡øõàSè¹™îãqä¯haÂ{a»¡KXç@½ð…É¡äwR	ÉIŠ‡Ÿ¡ÒVÉ°*¹5ãt7KÃª*ïi‡É¶<Ù”K´Q:ù’Ø’9]ðlñp¸‰ 17-D¿ÆŸ‡Ç®;„ˆ¯;ŒÞ*pß¡ÍV,ÊÈž+øõuc2¬Œ—7¦Ï¶—a\Æ9ía·PºþíZÇx–ÊF»°hš¦Ç›éwO§Š–Ê]Ô›ñué³f€!få¦›–<‚„!¨6/á?ÍÏzÁêÑP©>ž0þ{;FP™˜)ƒÅ±Vèc¯¦³4_ë]ö»W÷ûþPÁúlþíúöÊCD“6Í
þç-GµXhi•ØÆ0$µAèÈ(çk?À/gú°Â—%ø•v„Y¹ÒÒmÓò÷Óöp=RïFšì4å3^”Š2åíÈÚ°4ËôäüZØø¶$SúÍ¶I×>±yu)¹¹H|WL—ZìèÀA0Žfö}´÷h~í£ç-ªÎx*¡ZH›v»‹È1ÝÉ¨ý—ÙÅ—m:û¤OË¯à2BÄ´§ëg0½8_ov–¨c¶hêo)žû" |Tô’=ÜC>ºR¨)ýGúÊëós7<•MJäö6pùkEb¹9°D5@0Ü±:M¨Ø'Ë0x)B *”:ç— <l¢ž'ÍÓkƒ¶²á[ëø]5Â®C!˜ßÿ-Ö—feg; ±ÿ’é&ÏÂ÷÷0åÿõGãEt<Ú¶ªB!†îlÓ‘zþÃ€rq
Ú{‡C:œ|ØŒ§CÍ8F5«®<¡J™JS-<ˆ"d(jvNÙäbWyºùGqÓ&rí‡hË÷šÈSþ@»2F³æˆžt•‰%Ìùçî°"MUirÒ”e²ô‰Çµs#{Á£‹0Í6ïÜ’}S pÀ‰F§º^P¸š ¡`´~Ý©¹h #l]SG×EþJŽ,gwLµ·
Ê'Ü	D¦Â ´¸[¶–r9Ìò°¤/Çx‚<ðÊÒŠ[³ŒÂ6’kåÄø‰Èìxu‹ö	v”e_ú@çD¥ìwË¾&écÆïäˆßj4Þ—\ŽÇÅŠtÿõ ¿Ó°Çé¹2Ä·ûyúá#®~õÄÞIæ&Û)ËMvkó·Y¸ÝÈÞÜ÷cõc·3+‰¹xûcQ»Ö,WJŽ•Àæ2ï ™ÿwQêºMÀÌÆâ¦uIf¡¨ÒŽMnßLfö#Ûn'¯}”o Ð{Õ!-íÀS4´E{±êx²(	Ÿ<Ø±WY2j£Œ(ºƒä_BixÖÅi9“Æk{Ñœ¶&äË~í	¬$|/4„—†C:52'ÃÀT#iy–zŸå‘}Û1:§Âõð­qg®§?Õ`â– œÕ˜cšI'¥B"[ÊZäY}—’Z‹ä¢m¤[ˆQŠgåh4JCÛSÏ	C›¯ð¦ÓŠþ•×n„º+Àÿ9iÛDÐ_ãÖ½êöiæRÄ9ÌÙ_;QïXéDˆÅ~¡Û¨k‡].´ ]«ž¦¾×-èÂ¯J"š©o$éÄç±Ò‘^"FÑ?gç)º¿—¦¹@“tt«ð1ÜK|2mSu³P7RŸ&¼¢ào³=Gv¯ADqnÓPÞ÷^­í\3]­Øy%Rì'Ç®rMgÕl,ííõz¤¸Ì¥¬Uù››TO*/5Ž¼r Á[ÝÇÌÃ*I#1ýõ?%W˜«Ö`Ù$ý0v­uÄ@8Xç~—åSÜ×aÜ¢â“tnÿç—v¾º›Ïžp9xÅ±{J^	…hTPŸ=ÓÈò¹ÐèªÒ½lœx¥þ4k—*•0ôjÖÜ=5‹wgÉ˜
~×;}(™‚DI”ZOcÙ¡©Ðpn.zjH¯ã{Xè·+¶Ÿœ…)Z}ïW´’;Q3¢óXáQcÞ£	°…¹îoê¿¿ê«ZöŸÞAˆð2«ËÅ¸ƒ«ÿ%>ËáŸ©¶üÃ¥ îŸ|ÉiKs©~ÌxÆÕX.°ÁÕò”ZræiV›	7?+šùyQ> 'Í«M‘;Þ>Û ºzzŒ"ŠÕ’XQkböÿVàE(frdçþ´, ƒÚ!Ea¥ÓEÂEÚó>§žé4õS2Nðtîx`£‹jl‰0ôeí¼ÝS}î ¥þ˜':µ·æ„•¤°„_ÉÃÛ‹ô¸Î 7c6e RöÙÓÒ«$XnÄÉ%‚vâ£Õ`Xš™…ê,ÕilÚædˆ½nk@ÊŒÇR®&f7+Wah¼¹IÝÂþñ-Ã¦ºïiÒðMîÈÀ÷Ãk~¶*~
šIýÌzÅbßr'g±©IÃ7üWVGL3ç`µÅ6ÑÖºx,½ÛeÝL•„ároåÄcÕp©a Ô–×Ø.õh;k‰akÑ¼|!SuZòþó¿HE\íRÖ)N}¡\•ô¬èÆVuê\É?éÁCƒäa[ê%/o%hÿ t Ré}”l{±”Ý}ì¶6­FÐä~·~.pþañóÇøâzqb«¿ˆ<«‘ÈÙ^‹£–âh®s¿Ì+êHúµtq53I~µ&õ·hƒ>ü¿›Yº8OÖÊº% ZßÚIpÕžè"fÍ¢¹„©xm”ìo¤Ð@<N,<âü®pá‘ââ¶vM›óìÂ6ªÍÈ6Q[úÜ ¶ãÒÜîá8ÙjªyßD´ &YF_ÛàÓÍÊPµÕn.î;j"ë+xˆ¬’!´ÞÖ{ZÇæê¨¥F±'?bú7¡æ°+}$Ðbœ·çµÜ±C¨‚ƒo6¶ÙÑ7Ç.Tõ6ÃþÌ:7?/§Öó2?SuÏÅrdQ·JW11‹fÄÒ_§¬šE‹`8ØŽ
§ö[°æ—\Ë†â†Ö2KðŠaªÑŒ§;°qÞP¯ÝÎí½Ac=µ' =¿À7Â-Äýµÿ¹Ûáé E‹8XØ€°óeùÄþEêçÅ,~	•gˆàªØßÛÏ²²šØ^ÚƒpKfps¸§„ÔO®cŸAˆÚxVYøô òwIýáÏ“-$'pý¼é—Ü]
pWŽ+ì„Çw‚ó&æ“yKé±®Þ:œˆùOÆu‹Ï„X^(9òY¼*spq¤^úA¼÷å1Ÿv IœpXŽï.²ÛÝšSï³:¦%âÄÑï§§>{h@J¡ÔÎ!µ æÔs‡¥®ÑhPW¡ñL:7¤«Ëtñw÷Ä äSQÿQëÎÜ=¢ÅŒÙ¶¿xªLs5ð,êjÏBÃxÇÍª´8Ûš`—ö„,?‰Ç¿»W‹±[’ü‹5 .»9¸¤Î0.zbF@Ÿ3g÷mpËÊd³¾åä©ÚâÊSÈßý¯e×Ž>è@Ê'Èê¢_ÝmË1ãzÂŒEeÞ¡¹Hšçë…ý¶>Ägûß~a&²%m,H´ø?\¾:fâ@ùºÉÜ™šjšbé½&aƒÀ»—Q]îþ‘@µÊË–Ñ2ðÞ— /Wª0a`ò¬—$síoXp±])NÇï0#°%û'úÃJ|Iƒ±èJ‹¢OFâkF’ô]YÉ™²ˆÎšNRv>D_±qîÂG[Àßí˜[ÃxÓ³¬Î“½Ý‘j6‹ù
:o»îK;ÿÆùc‰œ< IÒ}¹	ìm{Nc¸"ÅÌï‚ô›s-à¾á­Šÿ,¤ÙÌ£	Uï„ä/åèV ¥ÇXÍ® ü²½º¿Â:V¶1†žÛèu]‘òš@€éÐ<kL¤.¶¢¾°îï]|;ÛÏ&£]zo¸rèrm†Á°”|øVDÜ+ú,xê pÌ—¥“xiØ]Kd­H—™vE Ñ¶À]ð 2}ÂMÍÛ¼Ì$&IaOp;*}
V*8*pË$«ÊªªpQ2ë,¨ëõ‰cóÊR'}SyÍ,ÞÏ“)éœë¤Äö,
×er†)ÀE§’Î-”Œ„„C¤­ì`…mDd«eà/:t1ç=/2u'y6ýsñµå†vYHVa÷ò‚Áuæ‰‘
œ„Êé,Ôº %4zTôötZàDž:_Ö€<13 U¹Ã%×$¶|7š„i²Ó¼±Õ[úz¯s,(‰¯éØ|t;ûeVæ'("Ã—_ÃAwÉtUAz¿½Ž8#Õy¯oÁ‹ÎÊîoµ÷e‰[1?ñóò‰­ªhüÇeÇ¥ Ù{Pï©y!A Ø¥î°’Ÿ_µcœÊ¶c‹¹$þè‘tA<HŽ¶ÖàIåãSöª2HþØs€·=íâ7šGHúŽWg­åŒàº<7RgU”tÊ_õEhÓ€/äÉ1ÄHr¼ì [œÍoþÚ\¸ßSF¬8v?aÇï1çacC1å‡d~ûí/¦ù½á—)¤¹k}x*£îQÆ¢gó4)ß$ÛþìwÉ‰J?$@pžyS´N–æƒâ+’ºÉaSa_Êm—SÓb<x`ùkÕ­ÂJ6)ØæXL_¤êÌJrüÖåM•fÎ;Ê¾i¼EÑg5X[‹ŸíÇÑhð¤_Ô™<Àþ¢Dî€å?£Ó¦e+Ú^µ‹”°üß@Å‰@ÅÏ³…¥¼ÐçIŠ¯£Øn  ANMF:        ? ³  }  VP8 "  ”z *@´ >‘B›J‚_n²  –VÚS–ÇLàl‡­ÁÙ›NB9äg¡~~¾î<þ¶óWê£îÀûiþóÃ~Áÿ]âã¸h~ƒýKþ?ÜÃ_ÖùŸõ÷þ¸ó?ëŸñ}…ÿá÷ö¿÷_²ÿ ?Ê¿«ÿßÿþ;öä'þ/ó_ë¿t}´}3ÿ‹ý/ÀGóoì¿ô¿Àœ÷ÆÿÙí¿öÿØŸõ³þYRÉpÛ³×ZËÖ	ÎQS×&Lk¢¡.ÆäbP&m¢3|6ÝŠ*µßLêKÐ
2w¾•‚©)QE>ÈÄÝéï£è°/È)W¶;ÂQHÌZw™+¥gP´r@©½õô˜ “ãõR2¦j0ag¼Ôýâàóà{žZÉ=yßõ`¬m_í5£“GtñÍz0	†6ÝÑr°_ÞÓŸqíõ‹ƒ­l€‹8³ëdÃ-š$"ß/÷Á•m+ ;u÷˜FÎTBãÿ`4²*˜¦I@ ‚>aŽuÑ•‹Wz>kàš¼¦ ,Ž>\¿™å\ã³ê¡!=<Ü=ãåòÏ÷­v©ó-¿*UqqØ%dª»ÿùz× Lœ+¼‘4?j”áëäJQ£ýº8›ž`O=LÃ–<Ì@Ê>Øì¼j8M.©Iéø0]Ðåè‹2øÝæÚÞ¦Õœ[·˜Ý"—žãþq¶:#|¼p)&²Ÿ™ÇF™eS^û¡ØÝßPuch´~B*ÖZ”špÝ©[…r—`2ËãÈù7L\Ý”ÙÊ%þÉ…5+Ñ.8>¬Aª]Až$3$`Ý­ŠX°‰Èa
S´ŒCYÊL‚ô‰mP4(A²bÊÉ0Â´¬5oi•Z¬°”Ù>Ïfùe-tÞóØÞMìIB½üØ¸Ðjø™WbÄÌˆ†ëÍ@4é/®
hHI‚Cu´»½1iQ••Ÿn|Œ°ùìcøw3ñ/Ø>ZOž°ý‰g½Ú-–åo/ç²’Siþ‹«úƒy5*ÉîRÖ;·à_‘uÂ[éO:À½éît­ˆZr…‘~|GÙncz¾Y€zä^ñVþÙÝ3(TÆj‚(`Ì¦áßÎ”Ä´¾ôÕt¿)õ]¢.¼ÞšâÂF7—›Þ*°þzU,¿ÙAV»÷˜ ¦2„öŽáÈž™ÅR'Ô]aÈâGç! øY¤|'Ä?59¿ã²W‡‘äc‰ëÖ˜²Hvë2†½¼ÄÇs'þÃÙb¸åW5Îj1Tp­žÓ7e—oUÿ°2V‡*/²)Ó]ÍÙÝ£EðN}U,<×p™1›>  þõüÜY¬‹þ¬K¦W2\ÜT²`Âžî õž›®'ù>Ø^×ë4Ò;Þm<ØŠÆÞ‰‹‹h¶†»…‹5)÷Ïq'TçÕIEÐ°³lEš©o\ˆè"Ž¸2^/õ}oÔl'åVÜRƒÊ†~YÖ‹‰!­âWÇ3à>Dû\%-m²ö'Þ°4¶Ý`ÅÁÇ’çšj!å•\¨aí“•ÇêzAÄÏõ&­£ûò\Ö²¥n±TÐÇ¡,9s|™zã*tøÉD1Uè7›jz#›w×Ÿê8…Ó‚C„^	Ir¯Q,Çoš)s+{ÊÆEÌ”È˜1<Äêq¡ê+ž,Uþràª •'èºOD~'Ñ ´cá­¢º_Xžý–Š¢© &ƒš§É?$SQ­‚L ´jZ_–ë¢‰œt¦ÀZÑ€S’>ü->õE b`.,Ñp÷ª¥h'['ûÁ´€júìÄäÓFÑÉùÙ'¸Â–Ý°ÝJ˜¨8oõÖØF®ƒ§¿PVÃ@WÈh°ÔéáûÅêñtAg®fQ¾¿­«Nf¬%±þB=yŸ*wËÄ?Ï=ü©¥b!|’Å!Ô’oðpDj²ÒF[ 2tÛ€€X^Â’&<Ÿ+úzvzý‚}Ë¬L\ÕÎ×5×¬’q>ŽküYÁ¸÷ÒLIý±k|éGA,Ìqôœv.YDÁåú9¸ºêÌ	’:ªÙëªôô¯Ýæeÿ>¿yäE¡¾<¬HËÆQ–<ñ¡_=d÷¶ÊO¹éßPm¬³
ˆV¯~Óz&VøL˜Áéxaéy* Bw§#.1Ãá¡yz2„á"ÿ½k«ß¨wCD Â,§ö"ÈDÙ÷	2+sUÅZ´éá¤@¶æÿb¹±ÍÙX‹þ¾YôÆýÏ·ôø?£šÖþ(D}ýdZ½æ0'šU¸Âjyjv§ãøÍe¼Sñ€66Ök2Î#UÔ­š¾îÞ'côÆ³Us‘§ön\­èÒGÆV–¬hÓU™ø¥5ŸÖø6ÎûÃHà!y6oŽ©dqââ+ŽEßF\‚÷¾P¡‚¼¡îE÷›Ý—žé×bcQØ–iUÀ½A€#‹(æà¥œ¦çŠo
N.¬-ÿ˜¯G"Ø™›#6ò¼êËäæ›øà9sÏ+`Áì:XêÞ&Ñ®rb+äw×–IÜF—ªÂòv_º?|£†3Å<[h¼ŠóûÐ°ó{ºMXg+k¨|n¨pŒ½©½gR1D0Áqf”Í'Å³;˜çšhçÂæÕÉÉÍ¿—{J”¶äí1åýYãøãc7îçiŠð”haªÁJ…DYÚÓá÷_µ"Ü]È‰ÑŽ¹OÓxÚ«	ÈƒM
p¥æ¡XeØ_;{Ô—ö6'H1ÇâUd+ÑmÀûsŠHÇ¸èàˆ|]h««D>b¤NÖzz1ÓŠ	„Ä”ö´÷l'<d<‘å¥¢¸6ée¤(
-Œ×JˆL¹à}aƒˆ÷çöaœGÀpªDº6Ç¼º†¬
1g{°Ð×e5;êI€mâÔÀìØNügYrüP;˜"q1EˆdRúÊÕÝ’ §Tv§þ¯@lÆ<¥­³:C $´_U´íJY%,’qR¨®‡ìÊFfZÀ˜¥™7ç´²þ	ô©hz“ï]µ\Ñüê¶ò¶EtfëŠÎpÙìÚý"ò $¶ˆÐ’ÒÒð‰^ |û7´IY_ûÃyRÑìátñåÐó—õGU kÃÚP+PRk	'Gf%ÎHûÎ{×N¯ëÒ|¼.o[›]Æ¹ƒŽ)ºœT%³Û£i¢˜&±ÝÜ£iõ´#«œµ‚›	§:ª­ã¸#QÞrÙ¶/Êµ½Xäo%q=6ŽfÎHNP„¨iuÎKFàHÀ»²“œaD”¿›ÒuûƒÿêVÞ«+yí{¾¯ëM CX¨‘Y	ÝÝµusè¸2»}ß;%ˆEîU¤mve+éÿ6ôknüt„:±V¢0}hÇ¡„jy>AÁÌoÙå1 &lj1þÄê{.Y½­£zËêº1“#¾a½vfÃÛ>€k¯Ç‘À]2¨-lŸ]EsÌÚæoáPtŒÙ0ºw„/RîpÖƒ9¢ò¼?‰Á€QÞ‘òHMëR˜¾š¾™°çû_	ÚˆV ÁtY4IÙiy¤.ušÔ=»Ì¾)pú$ÎÎaS‹¯°Ÿ_¦mp[÷RÅ±E\nSª)/â¸c4§Ë(Õ-1Žo&B‡±¹èeá<€Sî*ºrp
ˆBÚlÕ@•-ÕöéÚWVZ7éþxÚìà´t¤ÀWÒ âCÙŽîŸ¦uàwãóÜôÒ=Æ><Ñ5Dûn ¥æ6YEMM
9®xHHháÙ¶ÅãŠ…ŽdŒ"¯!‘q lç÷Üß™b¢¢nsQ}Ÿï|ÆËåâ«ÉÏE£žõIÓ*ÆWoíhý¸_NÌö'ÎnJ~<qhM½ýVØ¦š]QlÎ¥þº×¹À3Èd!¼˜!ÈtÙÝY.ÅÁoðLÈC%´oìêy¶ïO°×ËlüÉ9×hªÇÙ”Ô ¬é»Y	àÒ’`kï”ºg­´Ïúëh_bïï+šFXŠ?Ï:M†zõ.¡”tò°ûÂ4dúfŒç^œ3åÐš¨¬Ë‚6Ë=D©‡ëJ{«´¿.W7Õ'DŠìØà¾pÊÜùŠ¬ÀL®¡…€àótŒ‡è@Qþ¡kAØ¡Œ¾‡ÐF>`=ÄÑnya™çÞõ­h:à	wü42ÜŠ_:ŒhÍ2Rý#¾7‡-1c’ÎíË¿!ù“|š¿[äñ£IÉvîîPýÖUV;"ñm%
	w…UƒL)?ó¯5ëÙyoPG@ç/ÞÍ`ÞÁTPwÄ$MÚýèÃ®y³K¶NÛy–`¤€fôrK ÐU¹ú•À÷O¡ûg=ÐqÑ¥«+Jìc5x25ÄSËKº:]F´rþÏ›ùÉº)iîÆ³	Ö!¸X<ü‰ñÃ±C×ÏÌí0ýàÀ‘´GÓâ¦Jgß
S˜#M¥MÒJƒ‰ÉP\íFÃ±Aÿ’ÑES?öÚ‡¦`oó~êe¯Ûpy3›¼>v¾àŒ´52f'ï˜’øzB‘.Š;ˆ+Nz–T¨^`á3í7¾½Q³fÈ÷´&Öˆ¶S\)&ÜCQø®¤–JìiÜ< 'š Æ9uÑ%ñô¶xÏ>;wp¥÷GfÿÒÚ{0 ý@Elñ%®­»×ñx
µ¨D1ÐY£wÕ2¬%C±Ä‰Am ppàf7QÏ}¼X^¸“8*J#À¯ Ž\Áû™üpZV%výoÇpÒ~ƒ“‘ÐðÓÂÞKŸ€õÍ‘ý0Ê•Z!ªï³ý6©Š‚œ‘»ÅK{Cµa2Ü÷^ óÌMÎ×Ç{»ŒñÊúzí!…ÓÒ÷>«î…U¿yœA6|Y<»§Œ±Hºi€šóËžƒ=çu…“õ™Ü!m˜3á‰Åä "v]—åªgyýŸƒ`Äˆ®&qÐ7‡Œ1Ý'ôËgNVÈ“è°_!Œâ—ºq0Ã®úð ÖEWßåw!>o,)aÿ€Èoœê›þ
™&ã¯_å]éVÂõ4Åü"X‘#*3ƒ§3³c‹[ñd¿0€“Ô~îÁön.Í
vnÿ#À	†,Bæ(Ç¯gÈ†äJ¼e'Ä~ò§$Ð¹~qæk—djRÆÀ¾º <ûÅE$6ñ´Kë,¯‰ç)vz¯ºk¾%“”N W#Æ³êñÐdµÜ`cÉ…•8RbÝÊ^]7ó¸*E%ÆIa5ª*¿þŽ€ÿÕ'‡´?
ÛŒðtÞl5bè¢`Œø¹u‚Æe<ièÒ’œŽÜ~*‚$ù‹iÜ*ÌÃýÚRõtN`Ñ±Ïf\Y½jìÈ>€OâïS›lÆ{'+µi5ùPT¦Wé(F9›’ÛT†0œì÷\Ôš>á‚36H÷ çO‡_´\n©dTÍÐ¼6<Ú£¦9Ðœç¹¼\Ñ ¡;cxÐs<z×ªñœ`l2ÜWÜ8U'VÅ»Òš”&‹øý’O–Áü¶`"’Ç¨á_‡ÒKy’iÊ)…ú@ý|_« t3Ò‡ñœ7Ù(A(CsÊqªÖ"¬nwOõ;Ùùþ7 :“O!»[ÀØýò%ÿÉ;ˆÒÍz‘êÈ´¢eòSÜÜÊm]ZapÆY«0ómNA“Ì8c@YÍKñ
TJ_\u ýïNúk$F9‰øþð\<Û>œÐ¿óOò¿¾2¦Q‡‡²ë›­têˆ0ôÅ–f1W¤¨a¿·Ø]|@À,÷é §=d4ù"¥Éâê
Ý|Ù…øî&ÑË­¿=¼’ y}ž!‡ÝÆ,Œjþ[	Ñ„ÏßHí‹îÍ=2«‹¤œ¿´ q¨#—á{óö"þ,&]QQàŸ™ð#)V;NogÂŽòÏ½Çìè7£@ÆÕtfÉ…3˜™Ý>ï]ã£,ÝŒgñ>LªìÆU¯˜$`§ØwïßÉ,ÄÙ7wèBáðõCBóÌ„s°µrÃO§~G,kŸ‘—!Àá™¿6_¼©IŽÏVN®Ibô Â‹ÁË\Ô‰¡v¯”où„[°ØêÂú×Õtg©ñ+	ÕÊ€˜ÀÄ«5’—96Ú\ïXRæî]3¦sß,èÓU	Œëñ"@@ÞR©Ùz®?f3‰ñF-÷PjG+q,*¨àDµ>¢]îs`jÈm_õ[—å fA‚^ÿ¼9Î¦Öåã0ˆêùià5Ø†ÿo'iíG¹XiSuxî»û§ó›#šÒèåvg“A/¸öžÐI4r³xÓ—œÏýKô•#7ðæÌÍ¢ /-J`DòÔ@Ü`Ú¬²º™í‡Æ£k¯l¯x”ø‹¹ÆÊ,+íß®+¼&wÍTþ®ü+è²«ÝDQS­§NñIFŒÀ†ˆ[Ã±êÚã- A2’U®ØP‡çamg'`«£y4_‚ç]¡ºÒ÷ÁÐlpÉvîeå…“QÀÉ7ÉÙÍ€cŸù÷äc×7†s¹ .ÿ%Å­°Ýç4©!p4 «™¡½jèz¾¾“ÚmÚÀ¸Ì®qV¿Ñëå?–-ÎüAàPQ>‹ÃŒkŒ"ÇF¹Â'êv.q‹wÒxKåyâü®d½¸Äönûyµ Ò›?y‹È³Q²‡dç˜üøˆî+uýâ†¨lðû¼º^ÐÞó¿²÷p|zß¯þ;¹ö	B&TDÏ¾Æ	g5.ž=ù]‚ê=R^Ëäâ;ibªu„žGûI'ÌÿBMK®HØRWéX³®ø¥§Ž&Ní>»Å7±²¶PÚ‘mB¢/Üì¨„,°AÞU“LÍÈ`ÛtîTsõ( äô)¶©á¾? @‡–#8HùPg/BM‡4§…‹>®+ì¿Fq„5t¦fÅ\ÉÐ.HºÿÙœEœÆb÷’V?u§‰9» tšž[® ?pYî±zM›]ÚnWØ®gøŒÁò8² íÐ›ŽÕ¢Ãðê×É†Ä9¶ì8™²ó9ð|»\•3‡ÀÔ·‘—ñùÊñÏ˜BóiZ0õ•é!7¶ÁçÄ­Èp}‰äP×§¨Ø,»ôÌgê$¥äi_îM	g”ÅÉ¢•´/VÑè­ÛN@Ü:ÆN:ôì¤ˆÜKtHù3¹Œýî|€‡ÛÉ˜ˆB=Ö¿£Ô(M›g]½TÂÁã×—>­´º[òþlI®_s¸Òe¬,e‰Â‘ž{áCZi²ÔÚ²cÊÊ?;(Š‚VÓr‘Ë^×Oha™J³ò(Æ{ÞbŒ+—LË™ =_v£”s–N±Ïo×OŒb?”ÕÓÆu ]»WÏbZs?ç%ò|¶’Î¤.|‚æªñq0ÅOä ,ðAô]zÚAŸîyÈu¿Azâ¥² œŸ)º›÷…“Õ›¾ä3äìÝ1\ÈK´º8Ý±JçNeUªµË:Í÷¥W~!èûµÄƒgàÿ$9¶dóæwÑ “Ü'OeZž‹OŽ]ºæê>¡P—ÊïêÄNÎâ;KŸŠÐŒçPax•¦]2ÿâWÞeYßnˆ>N¢;(¿‚5(Óù¬ÄÖ½–ˆnaJJóÂÊFƒ}ÈžæU„V½V$v~¿¨»	êô÷gªgìL[j,…‹¼²F?+±W±Å•Dµ:ssF•Ì·‚÷“aì›<!™Üž0’5‡…*¯¿cNGñ¼mÙM’ô±jmî³nšdñ´õÎö•hè¡ëÙýlª:¹Œ©xóý5ÂšÌæå(¸pd–§zªÀŠxÄ‘y>}!B°¤l.üHØ>ÅÁòÆdæQ×ÊùE÷_Žu-æuA»7gþûL¥‘Ž©Ô=!g[*‹)©°RwbA¢†5µë}‰nZ¼F]¦·S÷Ÿ2mºžÓÞÓÕ¿B2`pÚ‘Èò§·…oògh-–º3±=¼õ˜³ýÅò;m£§Å\`tK÷a÷ž½¢kÓ½"‚P‰ŸÈO›¨o¬+ªvvé=ü}âlr_bŒ]ò7˜ 7\ª­@V<Ó¿:ü…x–¡¡ŸM’sï+‘w"9Š{4™êÏÑÔ¯ƒl3ˆ¨EúÙ"*xÃ’ÀW”P¥ ¹_D%M1$cS9íƒ"½0.§¸ÅXnIµÆ,ï—Ïíù‡ë±°{®¹!p}ð¥|´*³/“%[‰ÿ´pÝëàË"Îòw—/s“T˜ŒÓyß:ÌœV¬sœOñ/Ö;²W ÓÕˆÇÌ·¹«ª¿4d*@%ó[³\x€Ù™!&ÞMšbŠmCˆürØLÉ¼çx{×n|·|)AÉa Óþ2Âê¶øžÍZ‰p©gaèIâ'cº0wÇ+Ñ÷K]çè¾˜r˜ÍWà+{û’X)nÊ^F¹ß“ÌŽÐ†uÔN}¤ñÕLÑðj‚µYµt}ý;gW±Í÷¿¥–Ûí%á í%4þ€ºS•¥°”š—/ü zSœáYÅ|íuƒ!½7ìÉ\±·/û¨ÒÜ¤Ø³ÊÎ^í¥##(ð‰o½îœ˜ùÔ
réùè÷Ñ•5’Úå;ÞÙ™Ë?9_63âuçäß9(£ß»5X~!ê˜.S”Ù?@T\+<ÝöæA7•6‰JÕ¬±ÚîÃ;)¸œâ«èbÞÄþ/½¼}]®Óx€õ××JËáY›;¢8ßïr«8HÎ¦ÿ µÒóéG×çÞU¼)¼þšÎ*|àXü•> ªírý=ÂÞ²t³TôÒ™ó§¢†r•ÅN&ªÚ¯>n è•ŠdÃ®ÕûW=,x˜¤ý³;À”ÆÍ\Å†óÌêæ'´¯&t~Oaã‰¤[¢îgoc¤³<ø{ ¤Wo™ñDéþo*¥sñz¹V«ßØ I~È¢ðmÐ6!Á BnÿµŽÖyÐPâåÜÄ	ß÷š÷Œ_û‚ÑKôSžŒüž _n’5@%-Yï%ú™AG0Å,×âXâD5@ø5	c%HÎ¬¸µ;È„@@¡øþ	è¿¯nµ‰UF‰esñ×ù#CÊû[èTØÀ¿{”.´’Þ!ÆQJÍO0aÀ÷–há'Ðœ¶âB?ÆŸªC°È&>a"¨‰¨s‹|Ú³Šc½›Ê yÛS,à8\ÿFîÊeäêýY@ü K~Á#Yjh%ÿÝkª]PÁ :._vë9 †˜†4 £TÁ' Iø¼÷Š Ê’­<óx¨2xô†ÞˆƒÁÜqjFÎ¿ûºÈJ»Æ¶]n·Uà¬'ï![C^¬rÞÚ»˜²Š¦–ß
ÔÝëO®­ë§c¢¾.92G“&q½ÆˆxÈ4š“ðt´#ÎŸlŠDàÏ!fêNìIuH=M‡’°÷·˜pì|” ü°ÓÐbO2¹ÑŠÍ,utšƒbæGêÐ™¹Þs9"N…UK÷ˆ/ÏO³‚õÖ}.ªN”Þ@u1‚V(<–K›ª½`#WYDTIˆBwã‰ý‰ÌˆùÔ—«2ƒƒßy»S§²á¿¸súÿqâx:¾2³·:[•ú{#Ö	Â|“C›ö£ÇŠÍíÍºü±·öä´õjdˆó ®hœâžÁxN|¶ZñÚ´…‰á‡$Q½^v!ÛeâjäcP‹l/&9ñÌJ×6ncn™õ¯A‚®bjºòhVÀ;ûÒëÐcû‚üÛeÏng£æ:P¦ëŠ¯í±¡³–cøÞÿê¼3ãsð—ždåÍWS`lH=áhbäõO»§9œÅ‡JŸCó#Å†œuíáÁIÌ`ê\Õ=~ÒÔo_K3¬Á½±ÃA:!P¡ä‡"½ýð¢EÏn½¾P†=`QË•¢•ü")^Þ“YœåLö<$`½‹P°ŸZå®ÇØ¿ òpÍx_ŒÒÿè*–È+9‚«îï™!’3Ä‹(Ò/ÝIŠ¥¬ã‘Á×4~#©{Ü|¨“	×µ8ÇÜS|¾åVqB¦¸îÏ¦–sÈš%#)3ï»[¼ 9–µøÛ>¨º1"LÃ7à–‰Ì­ÁÀ/ØMÈ+º9ï¾ÞBH2•ÿ£<ËM Â’À¶‘diª‹SpöÂ(’ñ¥8^.Šº7}È´Äh?Qâ~#“GŒŸ À™$¬H=å;*ð‡ Žr¾¦[&áã*M<0ÆX 86Y…Ó,Çïƒ9dew/éƒ·ób´,#ãYÒŸ¾Á2Ñ‡ÃÛ{#g·{ >sœ3Ï –î-5«À«Npñ—Í>Õ[Å‹W°§t^kÛà}âQ‹7?ÑÍ’¼¶L{Ôµ:ÍÖß<„ÇO‰Î­	0¥ã@áXÖ=ÚyÍRÐ/^µ@¢„¨ï|]FÒM™S6föïë·7²A]-ÉD¾~¼ÄTè<ù´‹ O“wƒ>½ˆÌú«vÄqÏÉù¤!J½ý¿4Yw¶¢½%ó?¼/W«‘¼«kë7ˆOy%Wu˜¶å%ÅN1B[ämöŒµN€BsgSj¶ËvÃi`“  <&‡öW,lh#´²z‹”2aúO|Š“owqp@Ö3›ØbÌÏU4ºBC*ïöHßÊ    ANMF        ? ³  }  VP8 þ  w *@´ >‘@›J_€µ€ –6ãD¦H×)à2›øÿìÑ¨hq=Pn0çvÓ•ÞŽ¯ÁýWŠ¾`ýSíï<^ºó[ùwá?Úÿiö¿ýß)µü‡ùïú®
pùçôßößâ$>-¾Ãý÷£?f½€?—ÿSÿeìGû¿Õ¯,¯¾ÿÅÿîü§ûüÏñÞÄ?óÿžÿ;û«í—éoü?é?Ïüƒÿ+þÉÿ7üG¶gÿOmß¶Ÿû½Í[ÿå–OýÏQ+‡‘‹xñ¯aaƒ	´º”	H“å9"9^À^™{¹ æƒþGoÎæ¤¦×qgžÞA·ÿÂeo7Íî½~ÒÝô±ªgÃˆdOÝ’{Ú0Þ ?€¨Èc‘ÔòFÏqçãÊ·
jî×°÷aOZûA\ã»}ÒÈNã3lîœ¼Àljm²“ª÷˜^D!Ü‰H†»>jí—ßßm†€¦˜y/ûÔÉÍ‹ýÃÔÂUÔ£†[M}e«ÎMk,Ò}ö¬[T´Ûž¦T`'9Å¢èñ©ÃGþ¥l—Aá 3Í¢¥‘:X=øvuðh·ÈZ™kðÓúÒZ*.6»×mçBh²jr:ÞÉsAÎ8°þ²,¥*%bÅñ>A®:êàÔ¶d	,Ùýñ#,UŽûðÿÒdsÝ·gë)UQŠÿS¸öµ#<~oä»^«Éîà:Ë+€ÐQCèŽ>#@LÎ¶añ@¹¨ÄÊÒñJ2Bf €´€Ýp“—Ï+è;¯Úu¦RFåð‰›.yTlµ•„Øé,Óô,LÄLz±³&¿ñ*u%¾œ'ºdK4§³xXM=®~Ú<ÜÒ«Ü]¸žOï7o>5(…eLvÉýd5,S¸àV}Ë}˜Üâ·eåÆÃÿßÎ÷øÀí…À5±¶Æ¯Üñü±A'û}ïüb»›×UEÎ	žÿÞvžÔ:"ñïÌµ›Ýâ	0ÕS•/j/Ä[Ùç‰xm[•FjÙÍRJ§Â±+
NÂJ‰Ó¥rˆ°K-’Vîl_6®K”sÉLÐ­o¹ËÉ„_¶RI{Ö–D­›þîá—ƒDJ#¼™i«Ž’Lc9Ë20öÓPé÷ìó†ÙºàçŠøš³.Ã„h-
+ƒsGmÛˆpÜÎdÄ2´E¾9yò×y¶Õ°Q}zl^ûë'š¶Ša‡5ÝÇ«WæG¸z1üÖ$
bD—qdZ°n¸Ÿñ–Œ­%Mf-›Nñ  þýUVŠôÓ†I„ž/˜ º¼ÀX=˜6g@R˜¬Ÿ˜0Ï"æëæ²æÊþkir `Ó©¡=)ê«_ÚHJ¾ÙÌP¼-\/òÍ¼0Z>HXreŒül¿”°rýã|[!ÎÐG·ê,F¡\žZµS÷zD÷¸ÔNœb­Ò¿È–­?$²P}š¨ÿõ–õcMdmp¦ ‘XiÇh+m<EÙ¯$ÙÌÜ	Œ»7ä:®ôÃ/ÐŠ·0¢Z2ø1%¥J|;˜YžlËqQÍ<lº×|ç Ûë6{ÉLÁ¯Q¨„µat¾(çø­ÆÔfêH’ç˜ÎßÍÔòÃ÷Ïê»WûøŸ~—Ú#ì&!¨œ¾„yÁO¥•úæÍ	£îu‰µx@©»ÁeÉÊú±®i›–Ö‚ìÐõ59\³Ü¨~BñnùŒ
îXþ©Ôr°µ1_?á!¤µ.Ú©“°z¡éÄ™ˆv§üž÷ÿ….3M&¡n@6î>Í½ŸàÅsYµ¡´³‡sù¨-RêLú@7‹L9v+›W]Pê‚WÓb÷éª«ú“ôò\%Ãƒø&0b\S¤]c˜{JÒ‹”|ß©<"5Ó­ ÙOÌÁªÉÉ.A§CDÚ´Ã¦nžðXlÊÐþ¸MÉæÝ*À,d©½¾ÄQóÎqê¯!þÿ~ßÚ/Tå–ù¸ ü“æbõôX%6®aþÝÖ &½zmš÷eÃÜ>Þ1_<o@œtþ;;^å‚Õ.„j¦\c€ÑO¿ èÚÛwäy¬ÑÝ$¬>{^œ—ÌZçesV+AQ$ïª‚†{¦0LÈÉ¸ÿó|T×äìß'Ûï.ª*iÆCAU»ª´¥í;‡'þøMBˆ°U´±9X 	õe½Vâ?ÃÚa¦pÔOR#%é2 L¢`GAI RõÑv™9”¥>er¾Í!ÉðRömU@<âi`ÀuK³ÔtAõPgjÿ.úÖ+©LœþY‰aç9w4ná÷=xsªê
©âƒ «ý’ƒÍ„aªÔ««B—~Ài¬%¿1 5]¿™/
.SÙ!ÚAu¶BØ©ÏÀÜâ=	'cßˆ„&¯dvdroÉ¿
C4OÁWôìÂØ"&÷
¥*“W÷­J1'[Bs¦lôNÖ_W¤©œöÙäWã%¥×Ä˜½.4oª $ÅÝêà i&««- šîŸ‡,å¶ ŽœñÕ»›0jl¦íÓ:ßúÃÃä‡Xt’”×'—ÕõdÖmálNBQo”3TóXo@Í“xÁö·‘
è,‡ðààâ§„§#Š®>Ò#Âï³Ç³O°pÍð¥¼=‘^“Ë•ÔñmJ•¼q2IµiV)P€ej¬B›ð/g;!oòeëZ^ÍmúVHs9~4Öº.ÂŽ÷À†í8òÜ/KPààIÛÀq×ïAÌŒÊšþÌ!]µ˜×!¹.ð²K¢VÁ­ÚAæ_N®kÄ?Liç÷þ×\å*"öÍrµØÉ-âÕ7¤ŸÒ·åßá<Ñ=VÇl¬Ö ²½0cM‚™IÑ¦—xš7PŠ/Ï“[¬Ãu{ò–Ñ¿r'ØÑ™§ï ¼ §è~L¯ït[8ŒüºaZÝÊ	‘Ç\?ùèÂ´nÁÉÕfcN¯Ìpl- Õ´˜ÞÀuo¾òT\-Æ×2ë.­	®¾Å7aSL²É%Ö»áñ	Ñ~Wš…Î…,ÒvÜ0üÌâ·i¤ÚØU"¨cÿ6sYJ­¥ïKuSm‡YÊ…w¨¸Çç÷zŠ¼Ž!á_ý»ŒÄý)ìóøƒÜÐ4i2wm
G„~Ù&¦^jJ¯dŽÜ–©t½x-<œžÀÀ"Çëqœ,v@Í–Ìè2"tË!émÀñ9±èÀ'Ý(ÚŠþ$ãL JN¢ß45ÂGÒ‰Ù6¶ÿÇ£‚yh¼Œ‰ô†nGŽs+Ê„g¤ZMq+á6”\Ï2ä>L¨ŠkƒÀ¥<p	.ÚîNNjOäÖ´üÌ¾,²¶gíÍ‚Ã!òi1ý&ùÌ }œ&õ¨/ÁyüÙS&×ªF3­ˆ§­4yÒû¾Û†ÈªšÁeíkçÐñãµ<F¬¶M«Bæh±‘ þ+ZRZ3ÖÝ|Ê4<:\â—<:I¶º%¶¹]‡—v«ûå¢k‡yZ¯[¦«›8ŒÃ#»9ï‹^}†aâ8n´—o÷rÒ•ÝK.Ê@‡QÆ:áÐÇÚØÒqP&WòKz–.âõø5U3Ôó%@Q\ÀÄTqVÐ·ªu
'4¡…’ÒÑ.ZP`Ð‚C;/@ÈÂ3cÝ–~`1gDÆ2adÃ{"9hËöÆ`‰÷S-È?Æ<£J§›±ké†cÖx]Ò^C+f /!.P3“éhÀôwŒ2$þâZë¥øCå¾·Œ±jº%š\¸§Fƒ»y»¬uyšNv„?Ñûã~Ïaÿï“åÇ6ŒwÖóÝ’rØ:.F4[Ä“ßî"Es5hB™ÙFa[,½–rœv/¦ÍÄWÞs+ ë&rfJº¤_½NÂÈ&m\¶2¾0P¦ ¶wfúã›t»³vôÔ¶¾î€Z_ÓTÔjWæÂ«.¿€’ø~›P3Ÿtº„K-nÅ-½FŒí®x%Ã™†¡©O2ßNü¨/JÖ‹sË(,'ÑG×3¼1n×$’¹çã¼¶æ{c¨í‰ÁxòhMM<×÷mYzð
 õnYL3©°Ìø%´jDh`'ÒbEòÃeª¥*S4#)äÿ­,dãî,=„Ÿîë3ÜnŽCŽÁ&‰wO
n"šåÈãžôå¯?W­«Ô…B´P(W«U¶<`´à$¯3%°žïƒ‚úþ˜“ÎéXòe«*÷×aÑDòZ÷Ç)l}±Jð[,&ûýŠ¡Š“IÜÊ¾FSjaìœ$#g;­®F” ŠÇ«×Õ“dnKíåtÌ †žÙóáªÓ,àÏ+¼s¹´&¾Æ¦´?÷»îlô*U_4ÆüÞN¹‡êmÝüb>chèÉþ©2‰Û¹±ìÚý¢á8XlÉj}1vÚ-áZàÑI#ûÏX98»þfÏÃáa“‰ïÄ¯äß%ãu-Û¾y0^€´ÄÞüŒS(\¢ íÎb§óªLË|ð¥Šµ‚ê§~ó\'lŠ‹àé€IæÜÁ¿ mï3‘¿Ý£±?`°ÿ8Á¸à'ƒŸÌèÒâÙæ´¹ù1àÊä1^JÜ–­RßÄ^±¸i/Ú?ÆiVÛ˜gƒä×¶yØ+*ÜñCF“RJúMÎJì¾B­gnøÅ)‚]Ø:sèŠ
Ý„Ê·„1b+ü[å;ð’:¸7ë€V´72%	o§AÂèRû‡‹ª‹6übM-yúY{ž€î Á}Âßo¢ÔWÝª€4|@ÑoþñZ^ªl>0íAâ^Ó7Ôæ)Ûî
aÕ+k^ÇaR¦½kÇÐ+žóNnƒ{O ž ÙEçiÙRŒ5ã›Ño–úûëd&í_€S¤qÓ<ÏT›0Úë3çÅ£¾,Á<g†	øü©Ïá‘—¢•×á!ÓÎî@ÊRÊ¼`ò{¦O¹ Þ
Ž%Rï|¬EóÃƒû†wËèÐ”·¸v^o<Ù»˜5Nf|›]g‡OÕÈ°è*¥·Ë¥\ÒŠU3×3ä4”	Õ3{XM«ÄÌ¾ÈœË/½îXïÞt?ãùEGsgc¯îE“Ë–ïc®XL’MQ•:ÕCøt[|¿«Í›O)Öîôò’ŽZ
ä#Âùa`½oßÎ^RP¿´^‚ÌP˜ýg‹îë60¸˜4cKí›ËlXéZJúœL^hÛÔk
†Ç²I&j½$ÏIåÇsžÔßãªº=/”X˜SÜæH:FÑ?á» ‡ ¨¶Õ÷Æˆˆ|…®e#fˆ'`m´Àó3Ñ/]þ
údMl¶È‡¹,LÖÓ"æž×/	auúiôöÿ«;˜K¯ 2ŸŒª#êfM¡‹3¡K1gìµKágÌ$àj,ºÄˆ«3äìøpsÓz°åÍeYpÉ>Z8;-òHgÔ…o<èÍÿ¼:Iút¸+ÿÓtà  d5±‘8ˆzè;X#HÞ”\®jcáFB§«L}]¾rZÅ1þãü‘Ì¬ü¯fa¹ËÓ¡ÈEW”ï¬r‘’*O9”¹m*o­tHXOz]•µ—ÅüaSE¶Ê`¡ž¹!¼¥á¥Ñz6žÝŽÌ¤Úü5-ñ‘Ÿw­Ç33ºÿAñMãi›j¼ÁäjžÑ$jþÃE7AH§£§
BdoÑC¯ Á³Ž¤sŽ—OF*/1ÃÒéa‡]søoz_#¡ly¨T4úÜ‚8áÄÎ:¸È\²†…s:¿œ>ýu›Æy:\&&U?—ßE8ÞQå7ˆ Ï8P“$Ð´:¾²¦íØQhî•Þ‹AQ²ï¼˜]û’ÐÚ	tv¢™¿T…MÓ˜Â2gÈAú^ÛT(êÜÈ_ŒûË²\«Ž–Yi’‹Bžf*SÑo •>¶s¥k¨N*Õâe¼]M³¥LUgå\Öœ i!RJîCÊ¡ìLn½TûRF îÙGÈÝxnÖÓ7zÒÚW;ÚSHLDZ¼Ý€4+kóÜi]Áß9Äþ\ŠI™‰±—!Ž±[ƒhÏ_ßŸ¨Â*‰lny'-èÓè#ý[ªéÉÂ,ý_[øUL…,sJq«OÊR iL2iüSÝJ—%%Rä[ÄšÍ>¤äT@ö'¢õŠ¬išK¾µÚ#uP*5£¶<c9Á½¾‘(+r?ÁMÛià‹XæCåyî ©ÕDU3…”×¼OðSŒ¥Ä<Ì[ïA£G©(Ð¢¡Z¯„€V’ dc’>[©v­ 'ÉõºëÃ½)IòønßUÝZç‘ÄŠÊ)± ¢Ãñ~¼[Tms6 ’O1X,/26¤[;·€ÞHJFÞs}39¯âA!µ5Sì[
áÚkï®í7oKîŠqg[£j!oöÍ…é€­)Ÿ–·¥Ì öt «Ý$‡ðk"!ñs³;èå/ÎÜqÊÓÁ#éÑ„ êY’­ƒCÔè!fqÂDÚ¼÷ûº„zë«ÀúÚ›åa­RÛ-õÍRÏ¨›iÅ+pwk5¼³6V
J»çÌ	´¸„»-f‚Dã0ÕÒ´a‚f­² i•O‡Ö)Ú5ÜØ¿ŒûA»èuVÜð;NùÄvÙ‘Šž=oÍwº{?Ì¿$X·+qç¨­øÀ†6£v”ÝÜIóà+°ÁcCÎ8—ÿŒÔÐÅ{ÎDÂ³ã¨úçµ®G¬E!®pë]1ÑþºíuWêP'²+ÍQ4¶ø?¶ü«ÏÁhHNâøH¡æ’*šÏÁåŒ!ëÁ¾[ªRxD8(4)yF:ÙïG–xöÔBºÙ„b€š¨ÔÆ	Zr×ÚåÉ¨SKU—·ARñ#¦¢ë%0ÛåvÜ Ùõæ?s)¡Ó¼€Ö_ÚE?´”Œ¿ˆý2ºèÁ=—ÿÛEöÑ®SÕÏ„; ÓÛÝñ‚~%˜§óO„%$Ž†ûé}6¨;õNeÀ²}ë`›%P¼qØžÀ¡`£áÅmth‡Á«gWïõz{Tw›õoþ
$íïw ¤'0ã³8d{ä.sÁ	N’¥F`öN,d¨Ôß=<í+¯ÁøhaL¯¬€oâë»‘¾™!æ.ôÄ»Ÿk‘4x±ïxÓ¬3(;Š³”ÿmž%¸‚.>–‘Z JæEIøÅ2Í¨¨××>Púî'²ÝíÈ"ÍŽRÜû©P”ÊSmójLe}”a(ýG=))õ¾5ÔZa^
é+£öõžTk£ÿÓ±ëÖ}Y™¥UXZ—)Ç‰¶ÀòÆØTJ’ôs‡daÒÍÛÒÔªÛg|>Cë”r”}ã`~ïp”|ÊéY6<6bõ
Ïý¿NË‡'Š¤ˆi‚¬í"n$Ó‡á „L»âÊ¼rðG>gqöÿ.Ë63ÜqLu‰ª*ï¡iºèÖyFIk	)-”â’UÏoe€,|Bƒ-ý‚~Ho9,ëGñ=šÆßAÛ,'rüÔÜƒ q3¿©å‚ë®C´Zk´©ëbˆ¦ò… G¯gbhÍÄ šÞr •îNÿõ=s¨Ý3üóXr•-Z/TÁÊ„4×ˆ~~ˆ²(^QòUo¤Z€8XJ²Ep	CM¨I€|êg3ú?xþ?z)(rÎö@Ç“<òÉk"’rTu|>=j.ò¤Ç„9ÍÉNýÒ™…iÏ°i¼7kãŠŸx v]ý“[ü˜ŸHJ2>£Zem¦7´1Æúå(=´FèÛ”a) ¿ˆÆÏÍ¦u–¯ÃO´'š\pÝh
á|Ï.AÛêï¶âí£ j—3Î^àR
”h*Õª¬ZÿØÙp¡4Þö„´……‡#Ëñ(¹_ìÉfÓG|_§£Œ˜Å_’Žv8le×ˆãZ¶“ÂqcW<L!}Úíäkw¾B“´érL‰è­®'ØØ Rº„†A§—Ìh…®à­®ì{Ñ!Áe´ý-ŠäÏÏrû- PöJ/ƒþ,éžœõ§z¶;¸Íoæ0Û'£@‘Î·oû‰=ÂW÷U~±	ùƒÍ	x!ä+héÂS*ùùKÖ ö~W ƒ°‰oò6M?û¼AÍÃûðÆ%ÈRÇG‚ÑkÄœÁN¬üå	ÆõÅ$ncVˆ¡¸©ô`P×a³¾‘¤Ï¨æ‰,yè×ê¼P}¾zóóÆdP§(îñ«$$>øþï`ÇW0RÝ·÷¥Ä!ðÆÁæ­ »ÿ\Œ‡›ÞI«r\ïgAIæ=áæµèZ•SqÊuÄ¨Q°³£ÿg‰lþÏ’€¡~{»ó­ì“Î±bxašÇ·L¶ÐçgÂzX\·T>ðäŒý«xrVz§ÙÊÍœûV;Ü’Öâ¹ÐÌÃ1óRWm7“sàÁ_
Þr3¦—v?æÀ"á6ÎCµ`	«Ãg,ƒ;Ôz¾ôPpüÔ"‡ÂýeÒ09ÕÃçºòN<á¦å…h3i,¯œïd†9e…c¾°€’í/;´Y{ïZ¾`Oj‰	íÒMgðŽÃßÄF&SÉžmèÊþ¾³îzo:ñé™_Qð[‡<H}"gtrd‡½9 ^ª´oOþ’e¿„¯·BìL’w?È×­Á'2ÎDŽ* ‘ü‡‘ûÔ-ÃÕ£Û)£*îä/l$Ëüw'WÑH*JÏgtfèî‘ÆI0³  ’Êõw/r%ÌšgB(Ð/É+½NÌ8DŠWª£;@ë+|P£°F8Ï=-I	â!7òi`;Þ>ÀË”w;K°Î±x6{~¨Ø¥”kÿ|3ýG•òh´®´hSZžX×n€c²½ÛÄÓßb÷8X7_P±“ÃDµ¨–+?ðL©@"Ä¢¯îÙÿëÿÜ¾Ð†«F„üÂ”N¶ÐÓu8ÓUs4÷êSsU†O€ñ=”³ÑîŸïàï±7Ù3‘ó)v0ß\JûŽ=PZzû!â®§Õ¸œkU_2Ñ*Z½d{
1O;,D©8$òÃ»C=GÝk÷C”¼=â²U™z²ìŠ„­LÂTÇA,Èl·*ÉfKjDøöÃ;WìÑà7T¸àÙ(…?.ü+#¾:>ÎN‘§àÁ;¿Oo,ÛŸ¯Œ“„›8;ap‘nw‘‚ÅÍ"ÛiõËÇ	†ØOîÞ¸é›wÄŸ:¶Hü¿E·ò¸ƒ9jØö­¢."ìGäÓ€ÄI`£1„=Û¯*%kÙ‘}1^­2íŸm ‰W†0o´¢8u
k¨L;í“®wÊæ	^òû}L¸$Óv2eAÌÚ“Ìþ¤°dtGyt´.žóááÑ{Ü‚èzdvsf?9¤ñ;°Fg1ÑRPcbìs^€C¦b~¦ëõ¯¬þöoÿ3¡?7¥ó•o_"}m®x
¯|@ë€ü2¿2z^i;.w™Î-spbvZÖòÐ·c†—E’ôÆ•f éy’O[ÿ “¡k«é§(fæŽ(õN|Ÿ;§ª«DÊ²íeLj{þ?–³ïÁ]XêQÏ·ÌVpa~¹fí©¿NŒ¯©þ.FýUš\l…ø„JKÁ"æö¼þx©‡ÛúÊ¸Â!PøÁûµYHµ7"I4cËç«¯¦„°\ÇÔŠ°«9¤÷`b¹ºÓÌ]AK¬6ØÕÎa’5þâ^ArüñmñÇ( Ó¨Íi±joVÈšê¶q³†]ñg¶¡MpŒ¢Qôa©‚ìì1@³ÚXîf³p,Üï‹œÍPÜGaÈ¶Žfà¸¯ó8?éM´Yš÷@¡ÿ<ú1D.ø¾ÆS6šÏûeûDJŠã»MvaA±²²ìý€Rá#TÔôdxéN{Óf9ùð±J<BnwS²K?æŽW^´óÏßù –ß˜ƒ¸±jlëê‘Å\e21ˆ"ñ1õ¢Ãú;Ëš+¿«vA*Ó FÜ¥7Á\ývãæ$‚¯„[hêÂß‰i„‰ IƒÜyÈ¿oÄH®­÷…õ¥†ê‡•4n×¿ú@<Û¸¯–?,É÷p"²Å–~™óågÉ¦gvp¨ð,¶gW²Œ; g»ÑLÆ¾ÃÞh\·Ðl•Øk?¨	ŽõùnŽð`·*½ÿ4„£ÃFLØˆž*@@Ëñ§ òÉ¬éçÝÑ,ò§7è2Üíõ­ÚK,¢±Œ¦E/ßw¶OÖ'gA      ANMFÜ!        ? ³  }  VP8 Ä!  Tz *@´ >‘BšJc‹À  –P‰:&Ý˜Ùzùñ|Åúbç¹ú_Þ£ÞÿlA¤^,ùŸöW·Þ·Ò5AíOöß?u¾1aàOËA}oþŸó;‹Vs=B=­úûïº/‰?­ó?ìoüÏpÕÿù>ÁÿÁðoûwûŸ`åÚéšü”ùÿ›ü×úÞjß¡ÿ™ÿÇþwàùõïúßÿÏû×ÿåöÇû]ÿSÜ»õƒþ'çù†=÷
Š[]®”™#0¢¿u´[Ö:@‹öžê*bOq¼óåñÓÞt³\¸8Ž·ðç¥Œ]ŒX!ÍAm¾´ÙÃWµO>xIø	ñíœØ¹]Ç ®ûÄ|åœÞ*×ýç×WŽªÀåÛc®õ.b{‚*k.`ÎÊf|K=â<abjñ\½…ÒsÚÑ¹~-Å«Ö}˜t†–ÑÇU<…àQ“â9¿ÇÚC
bêp¶ÕëÊECŠÂž’D?S€,95É ï¢Æ.­†?‡Û‘6¹¸:yÌ/Ž´þ_”ï.íÆÛÆ"“œ} Ž±V$øbm¨m‹]Žê6@äÎyáÏQ‡jñø0°nÍ/š‰%?wðèUÄ–Ãìe4¸â NB[ù/ºÜÏñM§GT76jîéõËL÷’Çv40{4èÁ8+£"UH”^05Ì¬®Î¢uÐêì)Ÿ|²Èù}T3ßð‹Uæw&3' Çä´}Ú¾ÖZ¤]ñžó¢Õšñ•­¡Ì1½ÿ/ÔúEdlËQ˜÷>Võ@6×´ƒrG¹PÅîÕAÌÈ‰Ã87¿l* £Í7ŠÂ‹R ‡ƒ`HÝE\¸óì•íÍqŸãðð¼E
9	7¼qxîü¿:Cˆ‡C­ÂÁ[¼;v.9õôþÉzÍ2uÙ¶W¤¾ÜB9Û“
TgÖ³é‘!Lþm¶‘­ÀhYkŸì…nÄ­Wv|¿:.MÔ¬½¤ô²,X˜µeý3L¨Î[ê–À"™	ö1>dˆøêåÆK)çÔËìLúvZœA"‚Ç}_EÐiBèêÒ½M«º8qd–ÆgÞ ž†…\½74OÛÿ~ËK &#m†íãbE?Øý2vbð”¾ú?£0×aÎ”•è•%|‚K/mÒÝw«ÚÅ®(Ë¯hTéTƒ¿üº¬$Ágr\Ì¬œ•!¢ã0õyM´„6ŒY³•ì¢­ÿlØ˜O£[¢Æ—•;8Ä4K®*íž9q¡ßÛr*&<T  þþGõK9k ºa‚Ø)‘óý÷=³Ð<Íq´‘ó2³,à¦û¤ççô4ƒåûr»Cö¨Ù£o#˜2ÿ÷sÊÅÝ¾½…|5Ò¢ÏßÒÝ¦°?ìþ;³’çÙs-ïE‘èN‡8µjr¦b6¼VÂ»
7Yö#“òF[sÎÌS^º#ÞÅLà¤z¦f¿8#æÎ‰…¶Ì1æÉí  ZPÓùÃÍÓámíìë]XGS‡ðè»÷­VÅqWõ€ÅvfHÇ´òô¬¿ôÉÞZöš‹ª"è0áü]õF—c%æ²ÍHÝJ¼tƒÉ95âÆòå·QåÍ¨šã|– SN1ãeH7qZV9^Lá²å	Êu‚0rç¹NÃøð¿‹/*§ÝÈRœWb Qô{Ù!7¦³*ÞoLhÊË—¹ô§‡÷3‘9$Ñ"¡ÕÄ¾xkµNf!ëéú=^—¼{²+T®w5ôì=”ö­’áø5®iJ¥Xp_¨T=’ùÌËÔ-ä
=}NC±™/¦³×ÞñQÂÁ”‹ž"ˆ—›T¥´vùcMuÑåñ?Vìfï§èJöq°®Š67¨jJB=8ÐçVÓ£*{L3ÿ:­«9`q³«| è¸‡S†&±7aÉ¡›xH^Ñˆ@Æ_Ó„/?Úàä.õ§ÌnÉºXÆÝ\ðz²Ç´—sÜ›î2îÔjÍ¦Ÿ™f¸OÉVmŠo«¶y‘\3a8ÉC¨V—ÍüBÝañTSä•”)õxÚÈÇZ;Ò˜!½fÒáÐ¶BTyÄPÏpù>/Z|œr´¶uWSÈéƒå°Ë‹cÙ…¢C€u¬!õù‚>o3ÐjÍ	´_h÷—N}Î®’ãí6­hò¹<½CR†LjË[Dœý‰”?2Ut„wªGvT¤‚Åv SaÍ ü–^Ë45bRèòþZ7K@Jý\xB:TT1Õ‰ï8ØAg.¤£øÝ³ú!>¡­;z˜uƒ_yÅìë3Aüp¿±KOõ¸f¢ë±ßõß¥2	ù¥ƒ_¥«2~¸²<ß‡À¥þ°¹•ëˆYÞ’b–•#Ó¢
/ì{åÖu’Rm™{òð^5p«—Ð>Œ›;4’ºÉhŽî·ý W‘eß Ó®¥ðÃÇµR½È“ ¾œáº°óŠlž·´+†®¯4$ÁÖü´µ{ôUŽ•`àô‹ƒ2ô’M™¥Ž‰wf|¾'òz4ýÆÈÛ¡“ŽŽ5œ‰ö­âp4æÙ,*ö¬m6És)lßØ“‘ž•ì™T¼ózum¢­ÐŽ
0	Q˜:äÃv¾
E¶0¯X<Ÿ…U>ÎM±ØKJ.3ŠEºˆÌÆ–C÷X”|Y¦BŒ­bôq‘²þ(kì	ßM¨GM¯¡Ò:š/þÔ4˜¼ ñu!üõVçË*§Úþ] bº1nï:êDÁ˜
¨¦ „ºç vÇõÞ`Mû­AŠäi_‡0ñ4~›HmY!J’7~°Vj¿Ì8«H1õâŽ[×JBm»‹o’»à ÷té§mšuYâá^Èm!YTI­~ëUøÌIž«~kãAƒs.êûÞ”+ö»>ë§nl5Gm´XyÓüÇ™óñ„Ò§q¹EŒxT_
ïT¸ÅZ“Ö™ôÜ‚ƒÆ²5äCçHô I4‘Ü¨™)åfõW ÚÓãAÍ¶X°S‰?-<||æ‘°´+[¿¦=¢¬—êN1z¤Dú…*9¨ÆûÑëæ^‡Ê?:·		&1‘OéÔí<üÂ<EýU	ë¤µ
—t17Ub:cë1ðhAK/9>0‡Žå~„…ZÃîÊß€VßcÎ¸5è`ì×Œ”*	
kÐ¤î‰°æ<ßi7â¼6ß	^*Á§¥Ê„:®Hì]L¿‡ƒÅÀÔÅ\âã§A~¢®­^"­Áš`‰T¡¶WHV¨kö!ú¸†|#É©ó~þÅu¦[öW…\Ä`œð¬˜ß~–Ix<Vøí‹ê<;c9;Q.WAð"8ÒLÜ´Hsî	à¦€ÁƒáŠÈŒsU2¸,,R–×4ûØbˆ–ÔO˜Ç§÷ï6é¡6² y—ŽéÞž²X^ˆ‰¡À°\þÃ·´žÂ–+&Ì>hÈÒšnV¥Š ™D­ ŠÂ³’]“ŽðZHŒ¼ÇƒA“ëï"T]s Éé¯#%‰	PšE“B6PÕ‡¤ÈÔúDö,E6©@oS²°¸7°sæj„÷ Ù½|£~‹âÏeý§Z‰g}H>ÅééÂV7	'Ž¾EÛªÚ!SÆ.ø²AçOÔìÇÎ•Æ½:S…¿£“'h&ðÃ^§1ô®~‹,`[ð‘ÚZ'Ù‘nl
öHQ8±É2yÏV,ÉÜ€ëã÷“íj;TLjÅî>‰ºÜ·Vø^á ©$ácV=üÍæM×zÙLÕæÐ?ê…gÃN­
ûLV2j$P˜wœíÁ{\_	m¢Ís-¶ÐTè'¾f…(»o>üù’¬°¬á&þ¨MjŽ~d#ÎáL¤ì+0†ŠÃ¤*¥:àÑÎÚé°jJÒ»HùË¤rFÈwÒ)¬W‰£ˆ¸Ã‡––?½ÿ×`Š©5K:ªç^%§ MaëZP;þ[]I‘eí¢b¾PpƒŽ	0¥¸ª‰´ô ´*ñ·w¶Zi
Êæ2ï¾¨Ad™²×æ¨ƒuÂ02¢„OŽ…NÐ…ªŒ—²óŒ?Ÿ5w-ký˜c²ë."³øäóî£
\T8$aå¹¢Ùê†AóŽÓCÀþnX4ü§=²¿.‚7~âÑâ²-K€½‹ö3–ÄÓðIÈ­¸I?Ô–Ó¸±5„ãƒØæ×Ü*‚-Ô«£„+p‹ÜÈ÷ÛtqÙª”›[xÌ˜ì/¾(Ëô7–ÞûË­Pr§S‰Oþ­Ý(0FY€òÐmqÑÕm6Švc~36Á°'á#ßÆ†0 ñíIÊæ‰S"êa›yè×ð•3;,wú£:¼Ý{†ÀÄEìqÚW¼©Ÿ%à;Ú:†rñ¬éô@’þ«Ñàœƒø0\%¹ƒqY@Y\í4%ˆhI†gQ¤PziiÍ`k/¹¡´˜*¨xŠ6vŒÓ¾ëï{êò0ßè‹*¥ÈhMóÉ€2ÝUKo<ZKiÇ—fµ1«}ÀWgêÁŽ[ÿ Yp€ýü"æ)¨$]Ä_ªÕxøFw“p ðËµ—Ûv’G²$Ž¬jÓ‘µ˜9\•ÑÏ,nž¤ËþÃ%bFÒÏ Ü·P"¹oÕ+P þ%ïÚÒ-G,¥¬ÐB\½£KU«ƒæƒ¢·EA‡Æ.!¦{n—(ìgž²VFA“hó³ Šrð+vþP_ÝÝéà¤£¿$·e½»6ÖòžwÞ\`÷u¢;7
Ñ®Œ÷}ä×K‡ÿ ÂI_ÓõôëæI
 z8B4n%'ŒH-0)&úõèÎâç€¤/Xz—„H\¬†˜ùFvµØ×Z8D™1Ûw†‚“È°ûõKiÔ¢´Kì5r4¤ˆ?:ì0¤ƒOó‚öv=Oç}†^Ì§í”ÛÓœ (‚Yz4yšI×·ë‰DKy1®&¾‹ˆF´“ýéÜJ&$k#x0	o°@ìî&¯„M=‡7”ô|ïM©Ò‚¾Œ/÷e6ôÑn?j¼Av‹pcp4š§³þø+³{‰3wIšL_­M&??xm°w+¦æy%¤2 ­àE‹SÏØð|8ÕSÔQ`YgG`Þë˜ãY¶œ<þiijÙö/Ò7˜?n>ÀÛFbvÒW ³ÇIN<~}Þ¼@ÁÛÇènèÒšÖÙÓ:Ã(»B²ÑFÞç¡¯x?u'?ìk†'´G³¹ûºd‘gOKç?Ë^]ý…b’‘j_siRG_QÌÀ«¤Jcö‚U“Ëåâç|KÕ2+™¹à¤˜’2ï|jwR³ó~Z´Á?CPcZ ?[«JÊRtöq®LÓ‚‹£,ªAâ,‰êŠ;…k¥8¦¸zä #è…éÒò°íö9(è>„8(OÜ2ôÓÇ.$»«Á°Hˆ#² ˜õSù·sÍ7cOô/ÐJ(=ã¼°Cd%
:¶º®ìÃ8­-U kÀâ\ç#-rð+¯™©)ŒöæˆøÛ†:þ|l2¦Ka…@æY™»þéãÇWäw,ÜgX}þˆÞ(€®f¾hMÚNOÿx€«XOIŽË‚ó”LY]ŒŸ˜¡»X¿çíé±º{©åPþ„·–æÝ
3ê^K§4Ùzù‹L¦/”±¥¿*‰"u˜}]¾æ·ž«&Hà¿bâB°Í]Óš˜gR$ ?}(«Cs ´uWÁ ò~(F.ã$¸'0.C¸»%Å$4kÓ_0‘jÐ¡âÞ¸üídQÌßäñnïŸ„'—*^ßÙ™~À+É š#µT¯5v´Éé0bíÄ×¤¬H)ˆ<¢†É4€·üúƒH.z­6_Í3{ïà¿¾Œ*+­K¢c 9|è›?•‹%q!Ä7G|BŽ9CÚî–r"ç;@ûÎ‹mz}µÈZÊé?&è*ÍÄ„Ê^ÅðÇË)QGÚŒ "lÞö¢é‡4¾ò×cþ ¹}öúÃ‡-s{·Kœ6º€f—Óc-íY4`„*›T?”%‚”‘SnÿÞ3øÊ³L<Úk‚›×`ü‰÷ä!¹w¹¢ÓÞ_—ˆÄa65|Þ0U¤þ×ð¶Kv¹0éÃS2J–ÂFeLÎñ`ÊwôQ²´ÕW÷‘³7èÐµ ÙÒ3D¦g%øõùV©;6Ë0ÐBAïál²›4ƒ¾—:e^2„Ó¤„“xÄùef]µELÈÆbŽ+¨CÒÛ/Kfä¶,­ç…‡ÚdJ¶]E<úlê³”Fsž‰¡ë[Âèª+¸éH6N€OÊò‹ƒý5¤äéMdaõài±ÚÏ`S­¯Ä„ydÔ§ïÙÛ…çÑü9Ì¾Œ'7‰^zb²ŽM)#»;é|"ùbë.ó%Ü]¤IÞ™™L*üŠ=$s‹æaG+ÛÙ¼Ô|é–Kd‘UpLOáÆ![¶;ÓFÚcí€!‘\bè··ÉG
÷SHÊ{é‰ŠÍ¶ƒ_#þ\u}³@E*4%i¯!Hì»ÌÌõ<ÛogÏ†<*-HÂÑ³ñû¾^¾#ëT¼	û_[R®ì%‹Z›æh|¶¯þ»V±ùÎdÙ6Ä.,ƒ¸{l“ÌÎÅÕÜÊ‹¬ÇlÒÌP	øqmCÆ¤@¢]ü±É}øÚºÕx g	l-Ä€°'(la‚öÁÏA°êLcÖŠÞÞÎ÷ŽŠo&B‚×Pwê=³ëvù;”Ü)ÜVŽ;ý\™J¨ÓÁ‹ÛkŠÜÄpþ s€JøÍaÃù3›9e¼âüÉb1þ/j5:ç×OXj²Nv
©z _Á/šÛµcaÎÉ¦™Ò$H°œÃòe8–±”gÆæ„ÐâÍÙ°×§õ5ÿänÆ0R»:¾13¾i J¸±åhT¶æ•½7‚÷p€,i°¯;÷üzÒ}¨ê»ò\;—í4¼I…=}úm„5OÙËœðÞÜò˜Nx¡ý\é”Å»B£PŠ¬ÅòÅ•‹¶QžåÓæF¯Ú²ÈÝ1˜%(fÖ‚Ù5`·ã”â…}S~ß3EÃ:œU5›ð”É—™`jCysì7ƒò;‚·qªö‡Môœ•=ÐhmšEïþ17hTnvD2œã`øõ4ùÜÎGû¾ÜÿCrëa¢ü¶öbœSd†Þ+k‘+¹~ØÛÌ¹‡|é4·Ï¸ñÞïP5C[Gµ›(E½Øö«öfÈž»6T¤«í+­e<õF«cU.l¹V^.gœsÒ -
8Ù‡Ž=‚Rå¿³”ôé}Ó4§9³UcÔhùßåýaÞŸûÖŠè¤€¬ª{g,š»£ÛfëVè[%k‰=³7SX*3M¾[×+ø•÷phn)f
è_PÂÖ–©”,|ªï Óÿ§ü
Ý.íY W †ÂÿBjq›•+†ÏÛôæ™DåÕ)‡ƒ:îÊî5áv#.²ÂŠy£g®è¬PèºÂ¨‰[|'ü}q‘5Âï½Q=ÓÏÒTÊ(²Œ¹I ‘Ë}P8Ô’½ <YÐ\ ¸ìg¯Ÿã5Ÿ½Ï,¤èŸ.ÙŠq’5š[”CðJöÕ5FJFùîH™»â"5ö}þ{J-ôÉuiŠu9;ÏÂGÛ>(˜ñ÷ÞYÒ/ºvTcþ"6’£…süaˆXÜ&4é`$ã!Áª Ì¯I­lôµ|z€{ªòo4!”¹º?ÄÒlü9’w3¬§Ja²ëÈçÝì¶r2ñØw²OTrV@AÅV;/æ >Ûÿs™±r‘õ£”=êN ¿‚J/æùÔ¶2S)¨,-3œðßUÊ9dó´hk*€@:„k8b¹ â¤éÐö½&=‹gaßY Õç½</ùjwJEÒÕcm´ˆö4‹¯(R©­.x1ˆ6YÜ€@§µÈbõNäs¹’J‚˜NL…1Wyw:öŒšYÚ6àÉ•&ÍSšPû=Ûàöd×0¬@ÑÒ3é`qvvPÁA ®zPzµc®uŒ)e¯ÉÃ›É8	ÖR÷S¦*ÌÉ÷«¨‹d^µÒüh§*Ýó+_Æï¬¶S»x§SàA]ÎuCÕé1˜eyukóZiö²±÷Õ«Érú)qõ–²ÞËPÖïLL^h*ç†ÙBph‘ž?ðŠff¼æÚXg„HñÍåJeKƒLù²£©ˆ}ìég[UpÆûÃ•-©3­„\â„.5Á0Æú—Z|þX·òHOãê.Ò*<[\÷@úÑœÁËNª•mÍ@ð0ôì?CL¢ó"pqƒ½sW"íå—X›¶ÕörI„5HJ|ÀÏNì²êÒ²ËWõ*ÝYâ³¾¼;wf¢ÜåV&Ö‹BcýM`R}ÒJqr‰iíiÇ¥?A6‚o² DÎìoDÜ\L(ôôçYéšiwí™QÛä»J*ùþÚ`!ƒ=²ÉÀ1KEŽ«PTÈäGc(·ÜªÄÏ·>3ÔïbÁbìŸ$Üm½á«Ö>XÜÈÚµ'ƒ•âaÄ\ê(¥dV ú¾z‚û]äI:î‚¶~ˆ #ƒ:‡¥¢³ÞŠÓLõ
+`ÙÈˆ˜Á{qñ½©÷\´¥–ÓJ+sd#?èåà¿óÄe4ÜÁhC_¾.Ï}%yß¿úškÒY28z:0=”Vß§õ:³57˜Žì²1Kà~™íó´—½]‚ÈòaídÛÒ°}-†xzé;A±³K¸tÏˆÏÿ9M¥¥Sïo²8·1˜>®°å»Ï¶ph_éä”÷ˆÁ¶¦Õ´Ú!Rí÷¼=óÂbÐ?õ6*³ÜïI$Žé‡óœø´vNÁœ(_ùÜ*”4‚5Èk3#ÙsŠH{c¬ñä¢á;4ßÑð#ÁÃ‹%6{¦ ~ùþ|±Æ|Ï>«o+`AŸ&ìö˜¦ˆ¡Crœa¬a,¤’˜¸²èRIdÂÛAf?„)š-
€Â9n=h’xßzÒÊ›-þY—új*êÈ…‰ÿ›-‘
Ð2"CË_îNÐ°A&ƒõêÄï¿É¥)%npØŒ±öµPiHæ½GMd†"É„Z“L9.Žp[Ö§?•Öü +põmÄeSsµ¿-ÄdCò©O`V‚NÓ˜n]ÞÚš5!5¯d6ï»ø=?§O_'1F =˜í”½L `rãå~øþ*÷ÿ€F”a¥ÜŽÏ#Eë2œç0°Àc¤S¡gF}KáÜn˜RÇ;·Ô"LÕ¢ç¾@¶fÝgðEQ	‡<vK”,ØpHS.‰ÐÍ+xÞ“0kš-ïÆ«ùVI°J6ÐºÍáyºÄ1KÈq¥“û’bRÁÄ![ß<Úk½Î¾È°5ŸbŒ÷+Øáï_z}ÔóžGƒãkbé	ÌÊJ!¾É-ºŠ?˜RÚ^êhO'á‹7Õ¹$	ì¬ê˜ ´rBV±£¼ ]éaß"”üF™èp `XùþÊŸÈ|j#ãõ©jpNñGzYg5à®û¦H¨Óºã$¼2Ô¼~¹U U3³)ás>]|œ´¾YýcLìš\7sqé!úv.Œ‹æ€O“Ôþ³0nùŒç7ÓZ?“C¯¥rGOËgÁ’øø–~\§€(WV²ÌsI²êe}íž˜
«çë~‹ ¾¯Qwú Üø)t®œj'Nþ]ôùòyÍç'«8s’Ç	'8”éŒ—:^ìP„î¦S+þ/	ÉS•þåðÚ©¦¦®ýÝòèðéw¾R) Èmyò7`êÏQ]¸ç@e¨œw±×tmåµ®µüoèíg0‘²÷ÞçC£÷¹èBHqðW“þvilð¾-üüÌ"“`Ù¡I»ñFîÕ†Ã¯÷ÀS›`’5íì:¡'yš_©É}oé.½u+oÿ^–q‚uD”ìƒÄO8f³Ëâ%•qâœ°ÃÆ2ç”HGÔÆ]F'mE|k”pÊ‚x‰!I§'ËF|µ$g'DÛìë;~Ö–2%·tÍG¢³!G9¢:ÜŠ¿²ËòýÅ“Ãá—Kb5™ÊúG­Qètaœ“Y‹g_•œëÅÜ4˜4qº¸úª¾«.
¬»ÐöžŠÂ½oÐÁš#·†µYõïÅ0W”™¡=®u,NÊýÁ ÞŸ’OmÞéæqñeŸï°Š«6„ˆ1'	”FÂû`ï’®96öMÌ"Šÿò¬bŒî7^‘¢9óP4GN²¦°òs(XáÁ-6nVÍÈ¦.ô"ÔF¾<õ4éˆBž]Ÿ'ÍlÀà¤jwE¹šžÚgÊÐ+	ìà¤C—®gÃÈa÷|’|L¶Æ–Â÷Q§@6&~ð¡F”» 7ˆ	ïW2(aà….6%ì:]§ˆ*oX ©aAHÒ¯ 6FvoŒå9EËT!ln'‚&ýÊ,ªf¯‘€¬k¼_;›¢ÿÚóßrQÎóô¯=Ñ=­™}ŒúgŸÄ›Wl€Gœ/~gü¥ZÀþD’»"š |C `ãŠà³:5K¬Þ‹æ#œ÷2Ä™RSH8äÐ>ŸÏG¯²ŠÔá×bÁÈMÏ±ˆ´d
†Â}7¢Ñ~/ë¥NVÇÕp®9Ff¹j˜&¢ú7`„Š%¹Y A‚¶Ö†Z3½FûrX`2é–…]…bjËì!Ù¤·CÂËQ“-Ìü$Ù„•ØÁÉÚ.MVl ò|¾ÖÓ½A°ª)d¨¯6ˆËS*ÑnQCÈåó*«ø‘^Ùšn. •¿¾Ý»¦î-G¿›þn™±€wîëóx6NskÁvÿpKPŽçLBÌY#Ç¢GK3ÈãÅƒðWpE¨ØóKlÊ¦”¼¢žÙå¾Ž¨;öÕ¹$bQê.tï¬GU`‰…³5>¼ŒO”­ÍÀ5·ñÎå\÷ÏP+ïÚÐÒE\bÔ,•íø> ÑT Ät«ÉÍ€¬SÚdqzZdœXdãbzSH`›ÑtãþOÝ[p
56C¢›îß¹£u„AèFœ!”çˆS¬IŸK ±Q©°9÷¿QyA7†V­†^'4* Í¹E
è¢e@Ò_ç’râ²å/0wü6Kì ±ON.ß<YÇ'ŒKH/¿þ¹*zˆÈ1ìÙÝÇý:m	¶Ïº¬¹5›‰n´ÖøKDAÝÕ*½'¯ûX@°‹,‰Û ÷ej˜e†ÔSæVF¡³Zcíî¹èü?§Ìô®—XâQlcfóY”ª™ê"ÀkäÅÊ–bŠõC&UŒwg O´ïÒÊIŽ¼rÃmêQtñ\Â[É”$!çøTíÇ°T5°³è†€ÓöðÉ›õ}Ã«\ìŠˆ¨N=XË Æ7pÌêÎô÷Y=§<*ëöôS°‚M=F¡ð‰'Ôg	@  ANMF°        ? ³  }  VP8 ˜  Ôn *@´ >‘D›J‚Mq²  –P‹Ÿ&8ˆIŠ®MV¦ñÆó+ˆÝ»êýý~GüÝrßÉßGüºûÛ¯`û	õ>ìOôßà}³ÿià_ /Èÿ¦¬ß]³¾€¾Óý7ý×¢çÏÄô;ìWýpäßÖ¿ÝûÿÂŸì?éí“øþGýþ‡ùÍ_‘¿ú?Ñÿªý­öËú7ùOûÿé~š]ÿŸþÚëÿg¶ïÝ/boÖùŸäâÝŠEÖvLÖ
)PA¼Ö»˜yäE²»YØ˜yeé¯ÕzÓ|£	€½Npkì™ÞMX¡ž}À-¿$ÓõƒSÜeÕ¦v.‘¾Æ¤GS¶×ÙTaÄ“µ6ƒ&ÉñÇ¿8pà÷ ô?ÑÉ›$_õ—'»«;lõŸ•Iåý„Qu·‡ãge±K›¥O¡çÂË÷mu¦Vóª£4*Ò ½Ë×HÓGa",Îîc¹(À#@gáÀdÒ!8xMì4Þl³¹ÑKW±ª%–F»!û½Â•Oœ~(ã‰^ Ñ}œ[p,
‹Ê¼Þ»‚J[äß/)¢À‰qÝ“ß< ŒžUãÌ  %¢[€y…âgyeÓ!ÁúÚLÛ²:êÜì§ßYAnÅ!¡Qh—èÖp —n“Y:a&ÿA*…%`ÊW°ëÄ{ì|£Ø–î‰Ðß_Ý~
h™N.ëé‹Ž@§8Ž±šÎJž' àÿXjdPñOëÉÚµº—>ÞÖÖiÞü`è*H³³(¶0ÍÀ¯¢%ê´óèáeãXŒ_ÉJºA/§E›†üH(÷¡ç’™ˆFHÇ§Ù·DL‚ÖŽ–5 Râ·µåoMœA¤÷õ|)ñ¥Úå`ˆõgÆ,ë0”Q¸žÕì÷‘wY8È‚!“	KœŒ•C,ïãÓ¼šÇÐ”×ýY‰¯"ÀÚ›?¡)qCy·í"ó®pëù„ Ýˆ
RéâíŽ'3ÍÂöH]H½lH•LT÷Ÿ{‚¸+ÀGÜ¯²‰_Úòò¯ŒÆ.
þX¡¶¨Ëw¯ôè‘âd‹Hÿóø¬·ýf zº)
?„kB9Ö½[9)%Î B–on»‘l¼,Uµ©‚Í°€#Ždûy–cjc|çWá5Êå@…)u©Dñ2½  þþ/³
“˜ =Ÿ/°¸´í>½–wî[¨hk);ã*p•<åü–`éõÀˆ«pœÕ>å½Iãú°ÅL'u¯m,§`jUŠôße;—/376â D%y1çB§T6>âAkò/|ÍÍ_0¸wm3$›£øNGõÉ=NÀùMxÿÝ˜÷!îè:–•diPŠàU.n<))õS†MÝ$9O
áçžppeý%«xÀÉ–à°$TvŸ^#œÉq"ƒs¼<ÀHŸ@•ÍB®Ü& SÖHñaØ#c¤§¢Œ#É|s&þÇ€5‡¾…õ´NŒ‘Œpùéæ~A«m¸4È¿vaù§hôŽ¶O„¡;èì­Ùç‹I'ç˜L\;Ð±¸‰Ï:”Éq¡(ÍU &˜ˆ*Íš!\q:C|d~èäfäÛî¿&ñV¥8ß¡mjŒ‘÷[„?q‰¶üX–5§‰««‘©å­@(sráCj>ü¿šOèl;ÑJ¯r¬Û.‹O­´ßüŸäÓY„¸em2³yOÖ É‚®6“žµºs’–Ê áRÞ¡eyi3~SL/W y¾äAwˆê~{ÄtJ\­«4+¾³4äsÊTè8Ôù¶îÜŽðx©]vÁRQ“5TþD»V+ÙÀùzèkp³émÇÅ1Ÿ=m”Ü›7¶¯ÓVÑûXþÒéSl=îÙû7ãèNôô›¾Íà[„zŒ%MÌÈõúµL„Ž-g‹Ð@´s	8CÕ`ëpòÑ²…Wz+½êázÝèm²t…ævN?¤ìmªNu¬²ý“¿p‹X%‘×ºÊ^P ãGAk¹>.™žX¿)4?g"í‰ä~£íöS¾RÈì}ÏéÀã5çKùÂ:¯DÅòD‹Ô„F¡ÚÈ€2_ÄZí½ÕbïÎO«€>7ï…*XfWÅ¡›•¶ J}3–/¬O•»·M
˜q¯è—PùÏiT©;ÌÉQXu9èŽô3’"€­ãüÄd>&˜Yr[ì ´ @xÕŽ'b
žèâ”âreÞ(Ûÿâ4ÐWÃ=F”î,òÖ›¹ÔTùd34½Z¬B5aØÇ<3ð{íR‚Œ7#~Ü(6ZêpHZßäžMBøpXœÛÄtiqä‘RÝñ‚³tq×‡A/Îääv—Äš˜Ø:9T³3¡ˆ=p4&¸{¬1ÑÇëšm!†DflÕÑ”y>psdÏœrƒó´à£§ý”¿¢.ÓÌê—¼:+fìBTb/ªn‰z0s²Ö”xM†Y¬'³râòÒuæÃ9“—¯ ñ—÷ÎÉâJrÈžEúåHGw›©5N¹1'ƒ‡9jgÍº¥ÇLøˆzÍ†ì•Û7<¦C¤.Šì‡…¢½ˆ;#¨ª_ö¹šªƒ#Wy:ØÉv‘2JCÑïO}¢P é©Ü”?€°öå#×Åeå´U&{øø¥]:	òzkÞ?½ºÕò54jÊ.Ì3ªŸL¨</‘@ßV±Ï@–£Wü¯	)„Ø”—•ð²~6¬ü”×‹ï„uå]"OB‹q&rR[Ó{–/K¥Ä-'4¶ØB¼cÏ³²m{‘u¼[ßc÷õü2fC‰ùþÊ®;6ð™ÀØS-C´8Ï1;·ôÓiÍyÇ6Œvjóà¯êZñ	Zâ=?-Í÷ÀÝ
Ú8Ë”àžÞ†Ò-GŽ­?Q}ÅÿØ'ãÇ´Ï€Dr9òÍx\Êu@3±rzß8m¸¿Ø<ÂÄXqŒ]î×X§+Oñ´»J[î™æÖ$å»wé:ª8×äML¨Â>ã¿Iîÿ±À¢D Yí/ÃØNù0ñ3:.¬W¶ åm2á=?¥l‡Pä#“èÚ;£—Ôo>PD™Ñ™8Š®Ã[¹††hAÕ	V²gíb+t»·ä<\d2p¥é}«×ZvjpVT`PÕVž7<®}SD¤“ˆyú=¦àbfÏÒ1ÕbÚq~Œ3Ëožl;-ÝÑ¾O0(ÙËGÿæ=€a‡LIñSp@+À{ÊY]¹1f²W*P(H í¿m1Ú§èˆæ]·ob2)‹Ó$ïçVCÇz€^Ì¤ñK˜ÀP6[N¯pÓ[¬‡DÚõÌ¾Œ°Ò5‚„è*	ª%‹â¬•±”mzÚöe£ÿÏÎ_~÷^<ÙãÇ³¾Â”QôR°ø—°‡"—1ùÐ%Zˆç}yÑÏ¸ÕP±²óð‘¬™ðmqñ]YOVÊØ/Ž›nYîl
½Ëí«k÷ÉPwK‘,[_M\¿gtG«2qŠá¨0M¨´ƒº—vf·.1UÞ7§B±¥ßrˆ™EY¬#Þ÷¤Qè¸5¼aòºŽ(iu„2jDŽ_Ò-KƒYÔh‰ËÍçøïÐ~£îZðÌ øµŒ7öã“ÇPZ«	÷5‘­Vjd¤1ã¬æyg‡;/Žœ E:£”N÷¼²ÏkÄñÆœ”ÌFúu³OèâV6 Å4EÖO¿^ Û‹QKOtg µVØeü”HL‹€%câZÞ21Øœy8,ncå Rv››€‘[-(µrFø2ËJA>Êp=©6(3üjøn”Â$Ü%árÝZ ñþeöz6=Ö-ü<fÁ°³ÀÙÿ$»‹/û)®S8™¾¸hncÓ”ÁZAšX}¼Ý¯ÔUrÂd/„ÿàr	êâ§VyÒ'™IÀ%ôok©VñKû†W´Ï´òUå9òiÇúË§ç›eR)³µ4ºGBvûÏ7Ì®Ú 4VðÕ~mÆ¿pxjyNàÍ…|2Ò5Œup–ëq—ë\Íõc7„šùf×ÚQ!™¼Õ)Uæ †Ü.
¡ÓØ'è$ÿè¨få«üÇ'êb‚ïäÕí ‚,¼ð×“ ¬ëÕÁmÅî3ÓÄ½5jößGø/õÁhä¾4-_WÄØ¬nÛJ/¹=ó|k`xf¼``£”æT~/ŽøWF5ÉyY(=õ‰zÉøR DÌµÂweôá‰B“ÏÔñÎ8$‹* v„ùÃºä}(ñæÝ¯ó­.»B‚ˆÃÂ}4ÖÍýÎ/:#}5M¡ÕFñÉÊ
à
!ÿòX|‚Å•Žf€%_ÏCŒž`=‡è´;Š™Ržd«öŒÅÃñl#Í_×ühˆ¿Ã‹_R¹…˜ˆ´T	^äbû"T1ºÎcª.Û¥»
ì]ÑôHÌuŒäÆ>‘Öún"3#`˜i4ßÀVÌýKØ‹×Ä„77Å`“µ¶Þ/¨¿èãÁÚ¼Iœw_‹›éS«2Pë¼OKy±âzÕ6Ÿ@Òˆ8ºéc°ZNÏBŽ=ëØ7ÿ”™ËeÙê6À¥Y.¥Æ`œujèi³mð¥”Aï«Á0­\¢æ?{VÁæ(\×ZÂÛ«œ_<#ƒÊ°‚`xIt!ßV}¨Æ¸€.ÒYê6e§™:S-ð-1Ûž;Íô>BÓ^;¡
orÀÌÜÔ:—ÊqLPàÃU—@Z:Êlµ&­{·,äÛûúŒ	$­LŠ´®1}éC"#ÕÄ«–©-±‹üzNµÎrt·%€kõyË)ûãZÞ^õà¸gLD„Ú±l…ô`hEùèŒ÷ÀúA§L‡:×û{ñU÷úâø–A†4Ã×à¿uñAì$íÖˆÿ¶ú‡ÏŠZ‰¸E3š½óz•Â§Ï­™r™žLNF#›¶ÜŽ!~ÙÏ—ðò³HøÆé6H’„¨OØ†‹?Gâæ«dˆp¢êj—:öCéÙ±P¼3,°¬í='îbXû„Ýè9Gu¦æ¯¼n€¡¸Õ„a³/Ùª>};ŽòöV"Øúa´šÏéœ}W"kAË¬ÂÏ¾4˜¯ŽW¨4Y¢ðIÝû'¾dcÌ¢bDŠÛ­BàhHÜPbŠ©m3U¶«e¦r˜‰¸>eèng” /2w7iœq(_ƒJ’aù†ƒÁ÷D_gQå(ð®ãŸ±“…›Ó\}_yÑ…ðQŒk: k¦@y³bÃïX”Tâ¯	ÇÂiÖK~‘%ŸuªÿüOéõÍï¿ÅmK};Ñ}ÁRØ6³PòtxE÷–däTCäÿ£²!—»å×ÏÏ,qÀ³×'úqgv:#%l£¹a;]1
‘O¬Lª~cô/Þ¾™WŠy(Öã†ê†]ÞŒfLUAz})áC­¯ŒçLòÚ|]û¸x8F×³—“ŸŒüx_u-uZdû½˜ÍÛ@EÑmõD!TQûÂßIŽ'®^4NäP×"¸"ÍSzÿùœ¿	éLXY{wÝHß³ªSïÝ¡É6.¿³î °\ÍÁÜØÍ¾®àô
ÒÑÛ®’öýO™RxýAu4™ŒÔŒZJoc"Øy`[xqì:˜8KÿQà•ì=Þíh”PZ«"YÑ7¢G‹¶£-àjß§è8‚#¢ñÎÞŽFªÓ4k–çùÈJðebi*ÞæáóÅu>2–íOrÒøTl#6ÉÛ86ÄI˜H]Ú$eˆ‚9a Ý>´ªjœ‚qXˆ˜¶šÿ—Æ~èáP€a?ò/w	D·-ÌNni¥Bïè¡2Uòu™æ‚Óg
ñQ‡bF»Ca¦ñžî¼Ý—ôp8o ül-	UÓ—ctmýCbäƒúòÚ±Q§‹;…h•‡xo£q¨*Û‰Í!§å`©ÀGƒ™–¡U‡oóÌòRø¶Ì]á,,Z½ëâÌÔøæ—T{Øq¦VnIs*Y×ÿ7*×äYëRt"W¡‰”gIÕìÙ‰ò&2@’Ð	6$(ãÏrÓ&¥’@¡Ë„%®?¡æ‹“zÚ>oìÛä?ró»): +™…Â·‰³TÀ"Ú-{›AhUz#'èÜÙî+ë”	jÄHJB4¾†Å¼¶À­=¢ðˆpJªHÍâÊ”‡"ªÑ+ •Õ¤ûþU^Úö¾C²‚M—¹a×}Ó~ ³À/Ä>·Šñ½Ç§%8Ñk´>µ	êÁ¿«¸š„Ö‚œr*~kÑŽ¼—B”ëË¾Ó ý•¸3XÒ[Ûj#ªKÁ¶\öÜÐ·fbcé»¥™†A
_bÖà¦Ô5‡72×¶âTÏøMmð¦Á™‹ëhk	â	2Ÿ"Òß¶$­±>- ŽAçíÂS€î[ $ŠëÞÄL~{
æ–¸õEqË[µ^%oŸWÞ|˜*Ú+qW ê+¥POÿà\…]›Hëµšh!ú†Í)3ÙÄ‘aãŒß­í5gd§tÄk÷î{¯Š+|t­c‰sM¹¾´YÚŽÝåû4¢ñn]XÝÓÞïË­zLìB ¹uÝ‰ÒS Ž6€ÇE|Hš1ˆ·O†lŽùMóüªeezåêDìòÍD«ŒG¤–ç|ÃZÉã^ûûóGwb-ä©f”v¥ÃÐ„ïÕ€¬ÒHŸ”·âþ™ùß:-ì–S×'ßëà¢D
Hì âÑZ\9·zÍcŽÂ¿ÝòÞ§_¯¾·~Ú ÷tDi³æzÇŠ§$ìNe^gýB?J·+ºÐ#EÊXmˆMÒÏõ—%§†ŸôÆ¬Ûe¼UrÕ¬¬¾„º‚3…”ì<Vâ?l<©kâ¹”Oôe<‰°G©ø8ŽÒŒ¸¥»i… _]=B¸$¯èï
Ï}Wy‰€ºKòò¿é£¦X{9ð7ƒ”ÐÝCÝUpOÑÂß·¾H!¦–„§óÁª¤ÿÏ‹Ø=+Ú±¸îþ•Ætñ½Ã­—²„¿'tS£õ¸Å(:É!ôÅCþMÞ‹¸;®Å…H;ì]|eÂ?bõ›ñ¼"ñÆYB¨Ì`•ü÷Š¨› ƒ=½µ”Ý¸õaÈ;¢]¶œèí6'·5Šð•,ñÇGã\6øÑ)0wñÏÔ–‚Y%ÈÕ}&)¾%ú‰ÿ4L\Ýf³‡Û¸XaÊß¢ìóôwºÜUÒÎ›^ÌÿêW±ußÉç3«ðáç~_÷Þn‘]/V€€!ÏRk(¾ç¡/<"6C3JYNØ;ñb¢‹°ÁBŠ‘ãŽÒö‚“²…5w æP|¤¾Ê_¬E¬UçH¸r³1ˆ"K4£ÿëô%±J5™ìªæÈ¨®4ê;«ÚªÁ^êâù½åsáHTùÑ0œµYM•q3d&8#%o!:ÿÂ„Û D\3-mÙÝµ¥vÂ×Ä¦ó´D­ï²iÏÿ‰b‹p-	O_¼SHç{i¡<½Œbù)úô4›N»zþœS—¥u`Jó‚Ì\xöê’?ÿÇØ°aæ•,àÙÕS’/à›”ì¡Læy¿pðªçZSŒúj+ìA£y—±@N£)‘¯‚/? —7õW“
{z…U%#³&BZïº;Ã<oZÜþuÑ× H ¥½šVÝ0[œ%Š}ÓhG¾ûøÌ”Jæóa±GV$×Ù,í#/w¼j¹À@Í©uÖÇãh¬Ö©,aÞLöòÞßHÇ¬§‹÷ “´m£úM€¢ô`PiD9Ä¦÷J‘rü&†ä0¿i¡¹
ø·Øf«¹öa8Ê´iü Z{¦J¸¢êÜ{®ÕZgSŸºQªàfÙò·¢¤?C\[™3Ô«Ñ[6þêÀ9'äúÁ@Â	õgnE×—5öõ'ŒvÍ_~ØlÆô4e&š¹('À#$Ä¾0u’Ü6Tf MòeÃqxŠÌj‰ýÂ}šr9Û?Ï·oÁÙ*VàKêæKž#r{2«µhü2| ­5•%„•SbD{&+ÂaÆ˜#…>¡RËÓb›	L"Ï7|‡7íPÙ$(æU)~íÞðy£¦
¦\zx}šRè $òvdì¬˜J«—ù”:TBtùHŒÞ;ó†U½Þ/µ®þhAí/ý4kžÌë‹
É¯ù\]ž>5ÄÇÐ\y°3lßŸ0^\Ì†*¨Õiq>]›6´WJT/ù‘ˆ‰%mM#úß_—¢ÖóÁÿÖÿÎ’ÏxU_a˜xt0%?²t¤‹DÖ¤>ƒEwÞø"ÔÐ~h›>È÷/²Î€}ñÚž³+ õÿ9¥ÓÇˆèKAc^õÊ…ï©w'ÐNøû°Á³Çø TâýÚ‡)å­‘¼E$&b·†èÏ±“M†5Ùê1$w±GÎ?
–åíå‹ÜùßžW8½•{êsw6“eÂÞŒá/ÉÞ>òYlÙ¦¾¾(;¶úlXªÐ²Q§ß§Oÿxfò³)Þ‘‚
Õ”ý"ž~açújÑ ËçØ`ê2œðÄgô›.<ÙÝcvc1Öêiâ ´â(¢Ž’ìµ
"~´‘ˆMÖú ƒ„ìks²Ÿ,adæ³¢ÌðÖØõá%º}å£“R_ðµšóÀ.«oáæe¿8>¢Ñ¿—$ªG&˜=rÃõÝåŠ#D1¯SÂí0ÇEü•r%ÚeGú‘?nhG‹‡PF>š
Pok´XôIqÓ$ñ*}ö‰0š™©}É‘7Ó%¸þv(¤3:†B¤.QN§šÁL”Èºç)
þïÿ÷3NB˜‡Êþ+Ì†åßE
êöÛ¾9®Cî'¦óT€Ñ³DlU%9Š:ô¤Y®AÔ»];Y“}ßYÆSia–)8CWä«ˆkY×¹$žÝ°Jw(ïàžºg²éÂ¦”¡oÕPd&©¿ëƒÑ.†ÛzD¶ËŽj`ÓFå<UP=q÷x_¤-FGA~vý·	óÅmÓÚ‡4Ür½E—$ß[»ÒI¨ìÌÛKóœ.œ´è?ñÈx(s´Žþ.+*ÞW¢„	EÊH0ë`M>ôÅÓµƒLjE4×wn½õOˆyæ>¶™M¬ù	åJò'×O”J¢vÔm½ñQë#¾ä [¯%^³s°Âµó!¹êv¸·9»‘Ae•ûƒ¡0¶fk°ÍØ§UÞjÞn'ó¶SÎãjÝÎïŽ¶r^
ïq€ýNg†Æ–ULÇ¬JçD¼o‡<y<£CÑœÈéR”-‡«Ø“ËŒÄýîcè±'GˆŸê‡zø®Q±†S^($N“æ	)¦ùŠv!fŒa£¯‹	Ð¸ÒWsü‘aQ1æFZnÆ@V9ˆ	„Æ“¼ùî7wiqßƒG ía
•¹¨N¼ ÐÊ#ÛŠ\€©d+êþ1Þ7·:E/ö#¯•#ôFžÓüu×r	µj.Š˜SV¾§yÀ±‡åøt{ØfÝESñ²£ÖäVíYëèî8ÆLCØ¹_Àljîìæ¥Å:·t½yfóÎËWeªøÖbZ–&qG h#é<Ì£gæüðzÈy(R¥X†<Ìå¼š¨`ã·ÅxPÔèÐÑ]ŸpÖ'º  ANMF6        ? ³  }  VP8   ”k *@´ >‘@›J‚e\±  –Pq¶ÀZDEv¨þ¾Ç©­Ã|îÚr¿Ð7æëà¿/âO’Kû{ì1_×ù~‡ÿ7û¯ú¯ð_º?¡ÿƒâ¿ËA(þ{þ£Å—p%³ôö‡ë?ñÁ~HüIýGü?C¾ËÊ÷ þyýgþ°ñaÿaúïðüÛú—ýßðß”ß_ðÿaû{íéüßãþ™_ÿ©þüï¾×®ÿÚý~ç¿®õîP«úˆ¸„ö»¯sä5M}ôQ
«C™·¶ï4V¶™M*wF>ŠÃnr;³?9G—ý(Öù°¼WHú¥^¼«Vž¹Û^Dµ­	o¹5éªßv÷{ð±Æz¾òWqßL rïA)Ù{Þúø=ö))JÍéVøÈA¥qó0EuQÍÖë?%ÜÇD›0NðØ¡uÔþHÄ&•8g“*‰4·æUkr]…"lß‡‹’¹O[íý›lòd›MÁ5tFºu:»YÆ.[:ub$\l1Éîi5ÞÙïa` Cô5Y~h-Å‡ÅWWû*¦óÙt6ù˜ý§”nÑAw©¡XE;ìÆÀZÌ¼Û¨FˆùYuàfGúH•,œŒî>¼k~ûMf*jëPXÓœPXÏ(büñ¸hie¨PÎ¸àÑ³|ºFÿX¤fI&PÒÌÆAÙ’ÌÚ³ï>Wd·»QÃ”÷ÐëÑõ³™þ¢¹ñxïF|wíê÷K5€¸ó¼ÞN<Ÿ4®ß\ÿ÷yDHä«T@ÒèÍñâÓ‹S.C}ª7Uëù°1©‡†pÈ†Ä Ä¶jZí[—sëzŠd\Uˆ¨:€~­ ~[­0²xH“=;¹
+W8õŒÔ-l‘Yæf%tþû®xa™ò…,¬Y3fÄÁD„‹¦OÍöô“ýÏK~`BFðÖ½™ }ïX›³'åQÝT¼¨7½HðPQ‚¤Ö-š8õâ"ÊaOd,Rßª{ëuÚÄþî¾éNð9EÛ™Ç+œˆ…¸¿%°’‚%±À{[’S&.,ó2 êpi&çÓ‰åI£§ðâÄ$5ÿz%íØÓ»Ão–>Y±îERùŽ•%×YdPõsU µ¸¼ÌFdÄ‚Õ’)*“è6V´™öšKµÌû)À þûxàKy\md´ýÞŸ`°UxQ+Œ?fSq“O5{á½[aó±o¥Ðq–ËO"Iø²@·½4VWN G«ãdLöI+ÐÐÜˆýÇ¾TM=ŒëÌÖ‚l_nûw`›zÇ§#k­…#w
U±®Å‰xÁ…ÐyIGºXii~7bt$Ø†|õÁ¸~Qž‹Pž]Í7Ò}I‚'I*f=zÒ!OÖ¹dŒzÑƒáZô`yš^UÚ·|ÎâØNRWÒvYm¦N”ÒmäXj£œ|fVˆÃK6ªš€Að/E(gtõ	í`µEáÖ`>#·6åxFÚ±êî³Ã6+@3×2ŽK¶AÕ›SW¾¤ÌïÜ¹ÀÔƒ*Éê¥PwáW%O«¥ï'x§<zÌ$ûUÑŠR¬…‘†«ùèq, O³~'Ièƒšµóú0Û`6ÝµÙHq®è¢(²‚ÁõX j›7fI¬Ùua¨9ÃÖ@•g"ˆtËnÅ½eÕ/Ý†4|Ùx“¯ñýõxm{ý´&…Ò%²kh9ÿûÒº“1#P¿vúO4¸H`Ë©iëx?2ZÔr…?ïáLýM”]ŒBRPå<ú)™½Ž>eŽÙ`}Ó€Åi†k<xÃ0ÃQz*~”ŒÞ–ùú¶¹c¹|ëÞ'÷Dm¨'(š¸î%#ƒp%j›NŠéŸ
Øh 7Ü@bZC¾¸pÆe}p½T[Yº•Ž¹68‘°YÜÖ ·7ÀÎÏxúôcºâ||9Œš¹Ç]þÇ v¦STaœIÊ»lì~Õ$})Ð3X®9Ýó…\p!,Ê‹Ó~’Ä/–sY¹£7ù·{T,Onj¿'L…Êþ)´.H(Aš¸¥›ýSHÿ¥ûO"9Adë´¸?‘«H•p$÷$¤ZRºIG_´õzýäÌŠsÊÈsQÚ’:Æ<[•@{=2ZXµ\ïü~uwßéÑb¬;ÙµŠ¾M[2 NnŒ-U†(ãL´ò“lÓ>°Oã0¡ˆ¡ýå‹îl…Çêh´X—ÅÔÐªH3.@nW^ûþeŸÎRøÐÿëÔ÷ÝÐ¼ûLD‹²VüUèºÜHš)ìp7ñšM²{Xx±:óð®üiï]îÖ_”»9‹×<U’žã‹£r2ÈÜþÝäZ.£%)¡óõæEæì>aLÏ¯2z_€ñ!‹5¾ñP¦£ä´f&%)<}Å=BûÏç!ÒÎchŽqp„>}Ü‚ÞýH/xg<BŸF6¢æ{(²Å+g‚´ùQ’Ç™¸ÜÚm›AG‰£–Kj²‡õL©Eœ‰Ëâ!²Ã©°Þ… Û»”íB^ T~I¯‰3=±s‰­o@®Z‹×òNÿìawžÝ¬J½|»a#ehC\‰ÓÍ¢J‡ÚZâÆ¦l…aKˆB“‡ ƒVÊ3=Òßà VNw÷ç¤'Ó¡$©UÐZ<T{÷ZÑèøËØ‘ð4À½=Ú ¾vØËó7ÑÿØýË´‰)eÞ8ñô…–Giò£`3)G1p‡š£ðÓ5¦s_ªßú=Ìa•U­'?îoò5‚„Ú•™tÍN¬7.}~Q¶ËYß˜­g±iÚÓìÑ I|‰ ¸{k=œ¯P$ù‰ÒAæzG‹‹u%–ë’G("Ñ—p?gfÖÿÕ@Üf/E•±"„×/vy¯}'Ûvh¥è4d-?£ß°ëÑ9/F ^ÆûZ—}j{`øÛÖeNtYj†BWmá¢žÔÀÓÝ]yÚëk6Sl(¬’g‡v½ç`·gÔ­
nçåi¯¹(ô×ÔìÉ‰ÆiÉ÷œ±…^?ð¨žJùØÂb›\'á´FjÔyîòõM¸GÛŒ¡]¥ÊìÀê9¹±k;B¹8¤Ð¾ãè²oSØòÞ>ñ“] !È rÇÎ[×Ú[Õ¼kÈßO1˜§Ý¬\Íä«ÎÓŒíÙ‚æÏ
¬‹lñƒÌV–R#Eeuõ0Ãc^ÂL½¾Í:‹e£Ì)wS…86ëõövÜˆËà˜%[l¾d’Ó	@®0EÊØÔUƒTYÈž£ªß>Mýä9ö.ççMrÜÃSÙšãÞF·Rv
W‚JÎ?«ªËqFƒ#ƒV ùÂ•ûå¢í˜ï±š:›ÓâÍ:ÉÓ³Ùb˜N9FoÚ(6Ôñž‚¾í^‹ùräK4¦_óNßÊ'Àœ¿¿„*ŠÀ¾a ‰Y÷ú$—ÿGô{ÑšÝ/ÂŒ-œs5MœÒÆ×Ü¼ãVÙHAzA„G`M÷>á1wõÅf:~uÿ$«ß¹—î>-oùâ
-‡
ÄÝ´´BÃ›‰z‚®þ’/jCNMØÚ[å§v·è B))›˜^»Ú-¼q»Z%’uôƒëíýSšð™ñÛ,ã“(A*	è;ó¸«·SšïØoÃÆ«=‡&ä;Ô£Æl·Qóç†¯Ô½q»Vº¤Ñ_ÊqåÆ×ƒ
Û¾ÃÊ|,?|HyÇkÍ'–3ÕÚ¼µ¥ðn÷I2p‘ù)Ä½ `ô±ê±\Äè;<ŽðQxûmÂ) }ÜÈcô|©Ë’rWk¦™mÉ=°þ8Æ
hûâÁ#šgO"Ü¸„PX¨ê¹ú‘ò ÆÓŸo $C©­¢Êp©¨L§~É~Š¼ðÎÔË»b÷#ÚH\‘FÁüxoæ¡nýÃß¡eb†]Å¤–@•7©B§;%y;ŽPQ`TæŸé5'»ÜKpRNQµÊ£ý,EþyÃ©!ž7!NU¬}£6'ÀÂ’  KµqÍµ¸‚©`H¸ˆÄyKÎ²Én ÐºöÔI[IÖ€é³'g*µÒ*=	¶	Àk#Å3({pƒœ¦5h€
)iY¬¼¾Ë&Ãî
OÊƒ¼í¡4f”¿{KÖ~¾ØýiF`NgO®8ŽmEFŒqÕîÞê@Š7ÕÍ¹tT FQ>¯’FW²çæÑ—`PÅ°r„ì/Á–!énž*CÊõ­LæŸŽ'¢|à2n]­ŸœKúÈãBÊÒûwapö@.^¬Ù\Û/!©·x3„i(b®ÕÉ>&Cë.{žPuZ}(¸¸‹<é« 2l<^	=ˆ½úF9þŽÂö°¤X µ;œõ•ýÛ•¬:ï!'ø“$¦i‹Ñ¾‰Ñ—‚Ê  ®3xRpú+Ð¾‘ˆi$ÎéH"gñƒv>)WjšX€è	9c.¿ì‡ZÜ€ +~P•%5Õ$*^ƒñÿ>EÀcrÇ^”2?…:¾w.lâb¯@ºèâR•~sÏUÉ5šê®Àà1UC²«Søm\-/2¹ÞJ«*Ñ§3›S5ÿ˜­ÉAÝE\™“”";¥éC‚‹â‚›W±Aš=PO÷P7°%”y	 §}£@ZóÃ0-Âó¹Z˜ÁÖ#›GI¼ƒMÃÏýÿ‹‘+ñLÙŒµí½v•À5è#Sw[Iá=å/=|ËI$LJˆN¦õZÛ§åÎ+ÿtÃÜþŸFîÂJ)zT5¿v`ý‡È'®&#ëëZòè:8þ°sø~ù™½Ú´Å.=¾T´õ™‘Ä«!ûñ¹Ak;ŸeAÍ;Rº$Ý¶ñù1›§âd¨õIË‡†ú‚´/rúGà›z‹´Ú‚t‡2w•9O@bÖÜ­†œ›üà$î«MÑ%ÉOIœ3œÕq×Äí¦¢dŸ½²LnG“ü—ªãŸiëpÌîäëæaQZ‡Dòe÷ÃØˆx‘ù;X·Ïllí¡	[N^rŠM)
ßd–ý„¥,«ÑC4ƒÓôv%<ÐZIý»zË„°ÊnÑc%É-ËµqÔÀ_1Ô8cœCH
Íêè‚´D«}]q–#~E³¬–Äáž	M„¾ºwÔ|3ÿf¥-Ú5e×€"Ž=nù2[m®H®ªô#®thÛªKôFTODÌ,¥ås•Þ;-}0k(ˆÉ] ¿ }Þû‰Ë¿%Í±OÍ¼ÉËÊûYL^¾•/†ƒæØªýl%f¬s®¯§`@Ök/‘ßLz[š‰ÃÅZì88\«RØFëûýk´—à1µã%èû1h¼FåEó‰ø¢tR³ZQñ¬ÇKáþ i8œÓ’íp*Ør¹Û×ñÞ³œSdÍÌfgmª~û¿Ä˜åáDYTj»‰|×ò ¢ë¸‘Ã&ØO°XƒÒ@˜("ÿÂmÈyW5%täà…ÀP3˜«é›u»Ríd^[´$‘†|üE“Ü:D<–A¥Ya·.ïOtñz, ù“ëý|bðÅÆŠr¿²ÛK×ñµ*=¼ÁUÙ&o­¥è·ÓE ñ5©» p´£¹¢ÁZË—Ltˆ‹æøwQ«Ö'~ÞöWúw¤¿¸¶ñ¢à¯UÔGÒ eûØž%ä¦?†ÊåUßüç5¥]%öÚçéFœ^:¬Ö¢`ì²Þ3ç*Hj-»±ã¢ºkug÷AÁJä§¥1	SÊ…¹hÖ¤Ïkg7—¦#:jw·¸)=î|mÛ¯ÉmY€!½ûT²¤ŠHë‡IÂà›ìù+YÖRs$ÐYý—¨@†ŽFÏ–YE£—‰‹¾:k§7†•	žÑåüå;uÇES8\ƒ\™Ÿ #`g ÙYˆ3¸{ì$£[sèÂfÃ@4µRá¨£®çAX:ù‡&áå1	Ö?ƒ	švŠÁv4ié ¿ù<-S“ÿt_ƒš±ôƒÇnâHRžW«¾D|¦=Ž¨AŒú!Îÿ!<–Ä<é!Æp´¥áÞ¬ö¥aî{›y
\*´ƒÅ²ï§ÞJ~ì‚8™æ
tcªx&}Ô(0žû›œ(¨aÂïyé¡?zÝyøZ)ð-’f¬Å Ûaåê"j-zz”P“Üj^ytØ*­Šx Pó‘ÙžCG7Ä<7ùÏå2¾ÿ‡£xmXãƒõãî.¿²É±Å_‰ØØ¤Š¢ì±Ç§¦	Üüd^Ö	÷?ö§]ÑÉ”šÂ1HŽ™ã÷’\à™_ïz ÿ3:³Ÿ ú‰Ò„AtÌ¥€kÊ~:6îo«·ÝbPÅ„§,3­yòÙzBK´(¯6ÁlŽãÒ‹+9ÌSÔÈç7}6Ø3š,ÉQ;ušmÍ+¡kˆ-“ý_#=±ÉÂ·!Ûô•#KêvãÇe zWï‘¼p[„=ª]~O¸mBZ\J " ˆ2÷î:=, ÒžüMAÔ Ä·í$õ'œúqwi0+Òh·(S2èZc•Ì¯V¹v½†Àò3Š.OrrYyÒU†ªU‡8¡$’ª`±&üp6r7¡Œo³$Wø5"ÀJÝz\•Sp'ãÂ³Rjd
•ØSÇª{½yyà VT™ÏpdR§C/ž9ú\ÂG(«·31`©f?­ù{ïtlF12?ÃäÃeµï’A‰SÊ AÞ”µ.3‘“,þéœÕÈ<6ïQKåý3dº=V¤xÅ3LNK™-&MæÝ`R¦Ý_ù¢­˜óÀ‘ê!fWyzât4…‚[¢¹¼*‘›vO$“AR3yƒ1Ò1cMÁà†‡™/¹×w&+¹SPÄý‘tjÀ&lÖÙŠZÖç”14E(š3pWÓy´‰¢p¯O‡®ø°!©	H"’ü >]éßô¢¨&/€p‘·”<’ºšÉªèC7(¡Ì<P“Zµ„p “”—>ÈÜtësp”_l™÷À©[a:u.ø7Ÿêw¿XÂ«ãBW9'KIúj‹CcÍÔâÇ0ÔÞ¡Táâ*…ë>.W¸5Y6qæ‹o?Þ-±|5:ÔIÉDO€IìiÌ(F‹Õ¡:Ô¶éV,­È«ô8`ŒBüù«-­ÏTRÙúMî	]å4zõ	 ø‹äpKrÌCÿéHµFÓzÌ¾•‹—X“ný¿é›Bè³”Aî4¨ï†§ç %ê†_µc£Õ%ý»æ>ÉªÛüÌòGeøåÃiÌ–Yk‰ŒåÀê6kÁIÜ«7ôz*[ï ¤êŽS!ß¹³ïç¿H†‚M0ººZ õâO%_$ù­,ÏQŸš«¿øŸ,(fÿèËé$Üécë÷ûÿB|&r)$Nw	m7ibN[ºc Sm\g¼V7rø¦õÖß’Õ_1¤Æú,Û*=§0³ëOºëk&iU×YpxÂ¯|½…ŒÞùáŠ¬Î Ž›,~”:A S–ØTÍißœ¶ñÉ”Mv¯÷pâEÃþ"nú°yƒXýC0–*<ƒ/ÖÂÖ\Y‹9¯S¾Écßyg$þÞýXhÂæèãØÖç’Ê%#'0q~C|K}Ìƒ2ìbØb~½9ù€tœ³XŒ@äf”®m¾ÉŸ¹¼Ê;+Î×„4¡bø(,ÞÍ¿Ò†9„£Ÿë¦¿¬gfùo÷0kÿÝ8udÃáœn½öL©µ×êVù´Ûäáð¸k‚ZnÚÃ¹k¥°#(ep‡,MF¿#LSã%ë	/[q«ƒê…\¨<6j^¸·…	ØôXVk×'3›L°!
^ŽüêÙVïU@l£µþ÷d¿yÉôíeÄKc™Â5ßÜÈHqC¹‹Cÿ•3îÉ—Ž»ÑvîÎ©Er–Ì6’ÿV¾¡ç£"zá&u(Ôß°;.‰Ð@ö")>öC|w%ÐW¯ÄÂ	ž¥Ð(¾Nt/%xÔÃ0Å$]ƒÁ\"ýÄ±`Ã^¶jXžS¿GS¹Š Eå].Ó‰ÙÊ§–¹îúõEGÁ6·3Ë<wcë]„Ëß/œÌAªh·Ívá,û]€ïóý­l@ð¬ôùgˆ‡OIz
Ü¯l`ÝxØ¸.[½vý}3c#QÂœ||WÑÕ†Nc‚ KÀO#âÊ)l™+:"ÁfKªûa„çNêaÜµƒë÷¹ä;ÍŒ~CÐ]àxA´”Ð¦Ø¥§³Lñ›ü‰ã"å±eX«Í´ù“çƒúËˆoa°Œæ1Ì–»ºê’4U)‰îæüg’¿Óë+ÏÙ\_ÿû^¸‡Q‡z&0lQCt¾þŸ}|@Èý4ÜÙR¯¼-.ª~ZAåµ5l|ÀtîÙ4·•¦ìÝò“fy<âBQ¢K7÷…)ïàjZ¨¡³ýyDyFël8ez˜È¸]¤^¥aÆú6'¤«3ÂãÞ%Òâd8.0	ÈKš‘IûìŒ’³ñ,/UÊlUJí£°'áÐà3“òtäÙ,Ü(<ÃÆ˜#aV5eÍôNÀ¦—Ñö¥z½t01Õ®K%š¸CýûÞ_ÃìTÛûFê^½{!¥
ÞR¬ÙN˜…8f„6DLuÕ+¯¾‹)_QsÍÙ1cYi,B¤–Þ¯/¦±¥iË	¹9&ª\×yÙúý²‚Ãæ.}=ûëžéI´¼´G¹Ájååžëw]©Mµ\BVñ“t¯ûÅû±Õ0—z;j\kŒŽnW‚ì±\'Z#=fgÿOþ©t —œÎêb%õÍ]Ç¼²áqã#¨ƒšŽpÜu‘,…²G^i[-:¼>#…¬â½ƒSÂõÜÓð•C‚Xž5Û4-‰Öæ¬ìåÏ H¼‰ÌÃ•S¾ËüªdÕ¡À¦…Ü5\ƒÀßÑÔ¨ë¥\ú¨ÿæ6Ç0AŽ…Bú'œÆƒWUýá#1a:Ù"-Ò	ËQÔÜÁâ„”~”2U~GÊ#fäçôTà-h·@¶\0V0€¯5­²—:s…˜£¹ð_a$Hþ8¶Jqî±yAxæN¶!u¿Àßý¨<Z¬…~2œ2¤:‚Ã>ê7ïI(1…íÆ"d÷ sÅ,-)ïö\Ê†»—q·_¤"æƒöó%DÖ-;Ür8:‹A-Žº£Ñ qä[Œ’+œ5(ót>hñ‹—$¦˜Ò§M/>™j [²{$¤sApqTTàÛ9ú'¨'Ñ$¸'&¯¹E¯ÜàÅ”R¯Œ¾ ‚?|žÀ%ãm–ªÝKXŠs¾˜Ñ“³#e[5îáºF^´ÿá&Ú'¥ùþg)+CöQp¹²çdwxˆdçóŽ9ª¬c½ àgãÛR+˜m¶äéT’ .E¨3ÕÛ„ÝÓþVÔ?zvŸ9Û™zWÕ@[ŒéÕÄN$&|=‚Úµ¾m¡kšã÷Ñç8ñagòõ{ËÅ0zlùåkðÖ±¾_îö œB›N‰ák].–(Ñ¹®;SüŽÆ¼d£(Ahšªäë–VÞø—  ANMF        ? ³  }  VP8 ì  ôj *@´ >‘B›J‚[m­  –VáÎJ£c-œøŒž;oãrýPn*çoÓ¢ÞŒ­Mâ¿›Ok{O ŸÔÒnöµÛ? /^žà± ?Ÿaÿ•é	öžj}™ö þWý/þ‡®ë|+¾íÿØùö_úÿßÿ,¾@ÿÙÿ1ùYí—ôñù¿Ðüÿ0þÇÿ/ûïµ­ÿÛÏbïÖü¼¤çÑçvwÎ”«çˆmàŠ©G= ™,Ó;x˜È£Ð2ÿ¶15$À=vÇÕJçJ›M¿ºIËŒïªtr¦Ÿ–¬Keã({±nqÝ©Z[-©ª•»7C Ž»7µ‹z™ ÷Y†(>fw@q²ì)­Xî§Yi²ñÈ¹ÑÝÔ|„?<p@'Ü÷…þ¾îz»@’I»¼J°ohežÄju­=÷ Ìý:ëitúD›Zï‚ªx#/›.I\Ðd å¬£IŸg’|fþ¨Q×§;T¹I*ÍÑïª1{‰?Ù_ÐòS{«wQÚ°cÆOòDÎ2± Øs»ß•ë@„°ïEýWÇÔÜT
Vë¹±úDœ£ gQYíz¦‹#k¡–‘Üt’ÿŽßŽ/écÃ©±r…f«ºÍ­ŽÎ­7›x*6¢<À<ÔòÆ@à³q×¾ªê–Ž7§Ð¸_Gâ$@Ýêyžóxuu±C²XÓf&H¹12¿¡Ž–X£d\Gà`bý‘ˆàŸ”šòà¯Pö2àj£ì~õÔ%Ünçƒ˜½!s²7æ½pv&é5r;¬ßhâvgø‡‘
b¹zÕcÒ¶´§aV[Í =>n’~°Hš¼YþÈxkïï™ù?H'óœîŠ4õ³&©o±guoød=Ykæé¾®Ø‡óŽÖcøô'ê;ÉBWþŒ108ÆúKUs›ŒÌª’/Ûv›ÙûÃ˜PŽ÷î ïÿä³¦ ×ŽKO4IBG„Àtbôï:=nÊ˜ààÿ
®tÅ¤3bD83Îù’£R:bW|©´{µùSÉ®*³à…é¢²Ì0Ä¬ï¼Mö€ÕÛú•ÝWŸÞl—¬ÇuêÊ 3 ãu([ à¯\wFÏŽ›Ã=1sœÌ}á#wÖ}º›4Áyjø  þûÿ´Ü¸ÄÂï„?½x5»Ó$@ŽÄ~8 -~@–Ý@óÃVjpÓînZ$ÄOÃÍÏõQ“dêm«¤³A»bjÔ3shu=ÑÄdÍ [Ca¼Ü/€É%ÿ|Zs}	ÆäÇÉžv¥¸pp~Õt=&œÁã;L?5 c›¬ž]qdÑÕžg†¸‹ðÕ±Áˆ;¨Ùû›ìëÃí÷ÈÀÅ-mŸ¥S~ðÉ™i!ÏÚÝ“—È!57eoßœ\mOê5—íN¿¡2ýdõ„Þh ûI·ŒNéæäÂáÍDÏ`pMÄ³£ó¬¦X©OUÈÅ H¹Ã$K…_Q¨ÅÞ1„=ê1;LÐ|¨VÓa
Š}Ú!ã§?Ï6ÑÃºnÔ—ä2â×|1Áà,/‚þ³†yšqØ;zY9¤LÃAÁÐÚ/z0»–|œëÊÇ"ÉËdò<Ý¬ÐV»ivz­Ç@åâ–³úÅôêqºµlÔoƒ4Ê¾¬e-ÔRí½áŒ*K!T­;`›R§dO41qkþ–REI$õñ›íÁyAµCdAØ’àh<û›@ôvñhÐ¥\"Ð²=ŽG”löŸNßw.ä£,s³Q[Yˆ„.A ¼É #÷³ž¬5"<Ãxi òš3Ëã5‡›RIÞ²ë>†ïÿîL¶	(¶Ðä¿b¾†u˜¼îÊ…ü§j.ªíÿž•Ækpæ£vyâ¯["=Me¿sÐèÖ¸þoûª¤L{«ð8Aù\Ø‰YHý¸óN¡c»A†õÎ¢ÒÕÛV+
žciSÈ}Þôæ)ÙÐçOüÑ‘;ãÝ¹Ž·]ÜÛó#EßµmùjpýXvý]·†ÂPÁ±#ï‹œ˜ŽqÙ9Ú³jkõþ®§!TÒÕëx¼ºQblU
:‚|+Ö»ÌácLciÌnÕ^ŒÎëóË»nÅÚÀi(¬-wEËÀušXœÑõ(ŒŸNd{ôÍðF¨•ÖÊÉðuiM£ˆšFí-œîÎÑ^’Wˆ`L1@’ ¿ZH±ÆÏ”"¤·	”ËÈ8¥«4.Tš«Ýs©+&§¬x¥¨!x¨aJt9@FÉBDg@%wºÁ+W¹>êœ¿aE¬//äÿ+ßÝ3¾‚/Ÿ¼Zëh<ä¾ÄÉÍÒì°ELƒâbl²	CýšôåÞ§V‚Ù–Tì`6—ßDî½<Ó SŒõùÐ¦à_°d ·ùO'5;'U÷þ@5Þ5’ˆ„ÝE5ÞœÝ·²‚QËÎ[•pÅI›F»e¡â^›Ô¼'ùjÞÁjOÚßãD‘_Ž#|…Ö4³S'ƒw]öZF`0Àÿ‡« ó·ZFüWïo3º¨—.ÚS› ðd®Sé»ZP~•rRà;¡ô‡pÝöxêC.÷úødÖ¬Ý4þˆü7R½Ý õg?ÜÐB†ÆÆr•bðTîl«9;£n1Õ[ðò€
‡¿ÏñoñµÉc~ÙgïëÕMtçr›/Ù¨½ê¹LBûü#qQçíuR³®Ýñªõ4ÇqýÙÖ9µ¾Òl öCûÀ
ðõÍQ‹“IóÁmem!F 2ÆÓÁ!è[mæýœ–©F€Q´^QÒêÊàZæŽÊ¬QµÀ½p•#^ï7È~#œØüÝ³$Žn£$w£É¿+\¤‡ÖfìR5 6xè`‡*lËÓ©úh/<ÑÖ·ëhq‘™à'î~þí6·Ò¾†«dÆú\@ijÔ_›Ê£óÙo¶8‰ÑÏÖ$¸IKBÁX€›…
Y&(·i§¾;íõð.Å[ýu¼WÉá¼©¤qðØ8 ¨ÈNBfØÒåÑ„ä,)»*B7ä¿JxÀƒø×‹6ò}1©\ÛgÃÀÂ™ ðFÒ¤åÅt.ç¨EQ†ØíïXÜ•…€dUe;âç¸-À*?Vß3†"AgXî}ì6¯˜«ke+²y}JÍÁ“zþ,Wî|ˆf%°HdÅJS‘í·JÖgÒQ´Gjœ!Z ŒAÙ™3NjhË]F¦øDsÕ—žxƒó¦ðåRc*pG£—?RìWnúàÙn=±¦:”ˆÈ´˜|ç­@º8°:f¨«À½µªÑé&§6¦µGxôWgQŒÃy[á´mINñ$îWyÚí.óœüsiÁ“R'Æ Ž„D­U·¥ž¬!¯À"Y^h¸v™*Š7gwÑè9¹Ä£áŸ~pEáQâ‡´åK?x»Äe[g!ïy¯øèKØià§ "Á,‡Y¢KìÚ²é"ÔZnjõ#?7	zKmü»Yi\µ‡qŸ‹ŠV)ˆÞPr:LšµJ[ß,×*8u'¥_1¬]¸
<øÇÓ™9|›¯+Q¸ÇíþÓà!ÛáJ×}¼xÛlkyALMÊYv'd×¬” ¢×{jR®¤œ‚fIpí’ÃÊÿÍÏ-E˜K°ö]-Ï˜ð'Òmg}Ü;Ž¿Ìd?Å’üÀ|ã	V¿»s'•SàRxú¼	‡KFjÝ8!—˜\?œñ™y&Ù¹Ðø´ôf!N	Œ	5cm}‚Îÿ+"F¶õ7SUúÈÕwNÊ_¥ÿõÎÞ-’™€7~D5'Þ:ÀZƒ™8ßÁsµ-IŒ4úÑOÌÀW	÷=&×ñ¡lº­t?Húê¯TÁ=r)×ˆ#rHáÈÈ³<çî^[Ð5¦Ï0[A,ÿeÓÍ_,„J!®±Õœ9ibš14$»î¶&¼lZÔÈÜ[-·±Äz*$›?PV]9SWœTïÁ·b:åöD£jßÕjQÕ”Ö_®%–ÁÑM‹¢Š·(£2¨†	² q<9–@K¥ˆk~fjTy™‹ÎÏ_GÿTˆµi?Ä*µ+_Ï‡ÿê.˜‡u?$·„ø„õT;±nÛ2n§WC
?ãÅr<ÕyÖB™¾ÐkÊ€Íp5(J‹ÀØÀÞŸÔ~(N_|Û¾mrÖ^(¿ÜÇ{uðjdÉ¥]”ŸüžÖñ}vliÈâÎXiàæ/Ñ$JSAÝÃ@Dgæ¿~_ÿf—ai¹·éDä/).a•ËÏ¼´ß~Ól½£qSø¬–PI!6ƒ{Ò:¹šþ‘ÒåF¸lüË¸Ý¥Åš@ô‡•_–*‡Èž-5ŒšZõø—®©×yµåˆV(1êm`ÓÓéÄÙ¸ái¡XÓ;œGÑI“^\2è‚Ýµ¸}MCB3ƒ%f™)Îº™™b’Áò2ëZå‚¾ÜüŒTbÆÈå«ö‘—Æ P ,ë}8/!û–èf]ÈþªÝaLòÓ xÚXÍ/RTßCƒØÁ}¯r‹xçÃfà1‘VãÓl~;Á)Ûì–Võñ\NcMù
JÅvSCï‚D2¡Ø1 Y˜í¥¼.žè•yCŒL>™v·èEêL,÷¯¨
°Ù¿dPý×\¥7†ª7t”x ö½M a\Ë:ØÏ#­±eõï‚‹Æf–ÐæÏþ–wžTä³ÉÈ#F¦ ¬·v^%ìP<J«…Ö|ŠÔœo´½M¦ž|†9whÌü+É‹Ÿàúô3ÙÎ+	†c§(Õg—¾NO˜õË… ­/ 7­it¢³tâzdQeçÛ2{®À±fÙþµPDWß?Ò|¥k]¸Jäˆf6ì~Ê9p„ÈvËò_hEZ}ÿàm}§‡Ã»èüW.å+¢½ó74êNÃ_ZTu,m©…ªú÷éÎÊWHµR×¸üÏøwÄrÁeA`š¼Œ,}}ªUunèL¤êâžÐcO“à|_A{šÎy”eÜ‘Ë|kÂv9t;³úº|Ð_ßšp›5­fw-Í1ß2½µçtuU!º{?CnÙç†^ocÑUtÈ¤ìnéÑO-ñR~£”ëxÊ
Õ§èÁs„ôüHc"Ù2IW,))ç<—üWTöË¸$AØŸ1úSÐ"$æ5)Cö9ÌêFƒ<R8ÛˆKó¹ EëW$njééÕÃ>ÒÌ»<	ûýÉQÇUc¬¯QÂgœš}­˜ÄºÃŸŠvWo“|L´Ò 
¹D­ØŸ%.ñîz3º+¾^m|"•ÂàÁv|c±Ç­ŸÁ†u2žM—M·˜}]«Ôñ‘K@)©!®QÙ:^é»_ éDS‹ìJ:oOmf¨
kð9þ9Qy{(Q=1î+±¾žAÎ+þÙ¦ï×3r$G>fÈyœ‰Tµ(¬n5Î¾‹Æ®ðì¥hÀ68çÀrŒÜbsˆ×y€XAßxGõ×ˆ9$ ‰ÏdqÔJÓL•¹ÌdÓÝõuË…‰LŽiY±×Fú’IÿïÒ‡³”»ÿ´0öSúeNN¹ä&¨A.EUZ—ïÈ'´‹o|û£ö7³z
‰Öè¾0¸brˆúØ_ØAÌiûº+!#ÿ¯½ëŒ~ô\ÝnºÂØ—"õÍNõ^g½Ðy]NÂÞyd;ƒÄå¬˜ú[„=fíd^åº÷Ë’ˆ‹T´b¢È-ŸènX+Ž]²Òôýû¨ôËlÆÛùKÅÏï°U!Z­§ñ¥à_jÜ}xGð[è€ì€™†Û>lè·yÔ)­rædºÅ>()~œÔúÉD‘˜5AÌ¶Æ­“áìw¸ÀñT÷[
¤×@3·3HM“óÎÄüŒüN›]ÊöWÜ¤pæ^Ïm„}Ømãu¬Xu9árIìUnJ	ãœ)÷«š|öP,q«&÷ª
~"¤(,Â_ÝêÔÎ±bE«L9üß0ÄÕ¸c{ÜÙ]*í½MšöLó3œkpˆpfvS;Š>×=þÖ"Ô°P†Àñ~oÚ­$r—´Cg¤ujòÿê¸À,å`Æ¬#ðtLØäØm´é½Íñ~ý`•Ÿ hqLE¯›8Û––]É$CztÕÆnxç†?-%ÉÑIždñ÷ÿ(ñÓ´¼G•“Na:´˜™ÓÇŸš[xò?e86"}Šlv54»ùõèÃ&r
÷hö©?Å}ö˜<#TÄù kÉp/'àDÆ”¸Üß®ËñÇa#^ÖßßÝÇªÐ–â¢îÕÕ~F‡\¥°~É{"v¿Êñã½	pÜAÊo;ÊýÁsÓÓv£Ð)$m¨«´è…Áâ¦üå™av¦,u?Ä›WkÖ¢t áÿ×Gâ9Þ«Ø ‹}?¡æO#øÐËÅrRIÍ¯%Á|r
³z’`"Fz8”9¢û¦5‰Å*rSœaÈÓ1^&2`ÏfžówÙ@‹Räšîìþ½@í4HîáQ3m8aðjK¿0YµiãX&kc¯§§ìƒ¿ÆÙàéE·æÏ.·õ§¾u0µa%dŠue`<Ëé)Sðù­‡àù.H?¢%€€Ï0ûûCÎØÄæí!Ù~²ßŠ«8ÝT'oØ¶ÍÀ³™‘–‹{9…Éu´W#@|¿„â%èžèÅ¬»g.SïÛQî®ŒÕSÐGP7·\vÝ·-_•£ Šau–
«º1}m˜b_Å“ªCO5CàI¤/²„åµ¨ì}îðo`è8”MôÉðv }
) 
ãàk“¸°Ò]#DÁ¥€¾ðE(K›Ú—^ùÓüWÅàFãeº^"‡Ÿ¬€”ËWp6È5ç &€bŒ¤QmŽùQ–þï–y´úqLñ #\Š`§3Uâê=—Ì˜nâT>„fÙ¢[¨’Í-šžwýOYŸ(õh‡Ùð]³|(áWzcØ"Äf¸`ÂûaÆÏóÃÿ%ï62â†‰ì3”76PÊ„ù,Ç­e…þ[g·øy)e©q:)ÊœP÷É•ZAœ‚3¶G­uìÐà•DÆUZ,“Ë‘`ã,ÉHû8¢ë<>ÍkËÞ©‘B]]V™|ƒ×Q4!«J…»_¸AR[üÐ/*¿Ðý7šÌw”K jöþ;ŠØeîŠjo(|Ô•¤Vb‡•#Uˆv4(ž<°ŠøJ…[èÀ¥˜Øƒò7 q‚¾‰Ã½ Ÿ©{'´òôJX™Í!àeæ†‡7e¯"ªö÷ª°ÛÎkàJ›ÿ±óÈVnm"Ð¦²D˜¯õö¯œ d7‹Ó8U÷»š±š©‡µüî!¡·@:ùçù£¯D,"y@—’EªsðÓÒ&_®ÔàVUÄAúŠY0çí‡E#^ÖF†DºoÐ"Q|†êƒLH”ý5:ßaWð›„á¢'ô?sCt§Ò°ÄW§–¹×Bz;OÅËþÊ|e=ªÐ{ò\Ïê`I	Îw‰<°ÝTêÆ£† $æ×à7°HV€ƒ•×N‚¦äd…—Â¿kWÇ}„_Ÿü[£»¼GjéôJ„ôÅu¬V‹ÖHBVJéÖtJ`üî5Êúq}™ÖLk~žäNšMšŽÛÌÐñ´ñfOºÀáyAl¯Wz1ÕÈ‹}Î†ë.ý†Ää [ÞàÕ¯4ûfJ;ZÐšÄç¦y•Ôx_»cò(d´·Ä']^•]]Ý¶×SæZÛ‘íßñÃÄ’ä±·tø´TâcZŠI‰Bnü	 üxÃ©UŸMC=„G&g>h‹h‘/äL|úS¾­Þ9Z(UÁÇk×"÷mNkY_ÑEi†be4‹CÉtÐWj²:å{¯î>A‡•Áh¬ï>§ÉÌü÷x@ýó¤c~xãv{\‘—„&ÌÝE¿:j[:Ã&Á˜ž™j	Rå®›\`L¤ðùÏñc+ìw$ôüCQ¸„k–
“uÍ;g'ÈúÈ/¼ÛÝÏ‘¦4‰›5ñ¯vÿ&cõàV¡›®ª¸½Úçºúâ}>?Ü!yGðŸßmqÒ7HU×“Ç¥SF¤T3Ë?GžîL7‚KRò‡Ïü
zñWÝù"ºjHhþ§(æ%þZèô[“ÄÈØ…ŽÞ®ê&çÆÙ³‡ÌfT»)ÈûTål%=®ûs’|2Ú*‰IÛÓ¡¦‹K·ÎŸñCç‰8^§*?”r˜=‹~Ÿ¤Gõ<ÞWëïE¾m=¾&¢úTeï'w3‰¨ír¼8\$3zÞÈàz EbÑ%ŒköCÛ5/J?¨/Ú_Ê{u'Ná2u,*íÕÌ$ÐhwÞû{g;K\QçhåÌ-ô†Ú™Ödwéb÷–!ú‹Æ…=i—þsC*+ÈŸ7g-Ïqß°ï›ÄÄÈ¨äØ®ÖO~§á*œ¸Žª
ÆÔxÈã¥&kïk<‚‘:(‘¯ßÖ ¸À/dìE•ée÷i•ár±Õ%EF}ÂdO`¿Ê$wÝOXéz•ßë½ÿOÔwEe†NÕ9´¤ßë(MmwÜ¥³ÜJéo!¥<Ú*ÜÌÿ Úˆ‚Úü8dt‡ðs‡XåúÕD èJ
 ^H¥ÈsõÔsîÐ¸¾ëéTuû3åÍÖÛ­ÎNÎ~š_"À+g/Û3™N%ò¤‹àñ»@\8õ²JHïmmŒ"fˆŸÆ¾@§ÿÇ›¶¯6/gµvÙý¢¨-jØÆ§¿•=%dAÙ’Mèn¹¢<àð4dô,ï=s?-ÊIµ9…\yïÑð‰žàX7$C"Eé·‹ü%5ÍÃ¾zèÕ«o»^U–ÂƒÔÐ–…U|&$ýtÄ´ÖŸ³¥çãËE-¿¨ú»ã­ªäœ78~6©©è×Ó•ï<G¥ƒz“š+õ1–ñ¢AáÈ™¹ŸvnBjÚª–ÊÛ@âR³òŠbòÂ"_´¹úf¼m9Þ:]ÚjŒt„BÑ‡&ª(SUUù=mHmA&ùöWÛ8uó;yÝðÆ þp\dñÒcˆâ„8@Œž\8ïs±ŒæÐˆÝ96Ö}}¡µÄªc6‹Æ¢x@µàÂ’]]×ïJ˜îW¥˜1ÎËSÇÝ£×c Òª÷_®˜ËhLío|’ïACˆÅ³;#ƒH:*_s;+¾”ëûy$úhüÅHÉ±<ÁnÜ¶>‰	ûeyä&Ó%¦Cª˜1Ã¯ìûiÿT…îñ§·÷>Æ§YÅ6PÒ-
Ÿö¢ÁßmmQÎü½­è«h8Ay6ZM ÏyZeãÖ;ú@«üRØk^7°ô©Z–NƒŠŽ-áÝ«}êIô‘òŽ¤O©Où_ÊQ´H­±A…`¿Êz ´ùÝQßãåü[‡€„IÊ@(½¯°Ü°Õ›Á‹½¦sTŸ	,Û×«¯‡úëvi™‰>•ys,&ã7 ¤Í”TYÊáM‡Ä€«FÑíËúQ  ANMF        ? ³  }  VP8 ð  4v *@´ >‘@šJcYÀ  –PŽÀ‡å-“oÙ`§æGy‡:õ•%~Ÿêü]ôeòOkyêu§šÿXß_ý×Û÷þþÕâùwôßö<v‹ÐÛ?±·þÿê¯õŸôýûÿ7û§Àó_ëó=tÿá¿ö÷þÀËªÿÞþýùeòaþÿù¯Ì/mß¤šÿµþ£ò§ì'ùõßùßß=¬½t~Ýì÷.ýTÿ°³sŸ´:våA*qÕmÍETþÊéô°?e>B$
cŸ—Œ8ëÜ±59žµÊë}ìþ?ç~ôÜgY¸Ó>; ?^[íR±ªI¼†ŒÎ½e"ä9¾µ9hˆ_à”I•Ág±Å#zˆ.ÉÒf¾1¿©£Î$
ÕäÆ7Es4XÀ¿zÔóˆ³\
–Š~Ã¼R[DiÉB+=X0Þ´#„®`±+h8çÊ öŒÃ%îŒˆírÂòà´ûAîpÒÒÞÁN¾;#l×FlæñÃèwßá$õ"¤v‹pïmÁtšÇÙdÓl÷^f3‘+!S»Õkå‚Cx&;Èê&üX¬©?¼Î]¢F¯×<b¨ðá=9¨µ¦ô$0çºª’Ã«Ì  t]þÒ	øø´'~i{NŒÎ×‡êZ6©öŒÀéZv–Œ‘I‚-!íŸA.[|­ºÂã‹†€‡H_‘çakEœ*ðhÉýN¢EÛ.«âgòƒþ#ú€…å±\BB‰×m¾èb§.µ¯k10CåÛ¸#âJÏž¥[(üØZ`)’ê\O­CšÈ9Íyã¹eö!‚”)ê«·Œ{9R3Îl8Ì"{‹£Ðtµuó‚øýåuÑ2;Ó[Ýe0lìÖAíe¸¥ÛËó«„Ý”Å­’ø#ƒ@Ã€³ÍûÙf®"Çm²Ç!éNâ-·r ÂkÉ”VŠ=—£É&DH¼rò|«½!LÉ¼¯7ÖäK”,D"ÏØÞÏ¨íµWÇ$8Žž8õpä´Z‰Cƒ}äÐý@ 2øøšs«¦T(¢-TøŽA>¦\»[‰©Î(Íú‡û!C@ÓÞÿ	h6–ß¿¥[€ÏX8˜:îàr_AL:½Ë2»Y*=žÉ[¢×ág¡¯1­ŒÆ“ØjfœŸC+ù+UËã“Ùd‡Z%¤ŸÍÑS–WÔ%Ü=cô	"³x9ËºõÌ†¾³¼k»á’¨©wÚdñ¹®´+êÈð%ê§O¿%Lº¸ÈíJ:¯Õû€§;€ þýR¶éÚë¥ãðÜátœDPÀÑ	u´®Q<ãÍ9ÚòûB§ü€åäÞ"ÚÐµ‹¶:•wg4ÉÏåHYËÔïõd¤÷o‚/†8ó™í'£ˆã&Z‰Õ¤Í}%ÉÑîk:Ãìð¸ªYo­šüÏ?ªA5·ä¤—å›²"B||Fö{N±‰—÷÷‹Ä.”àåE=ä¯¯
D§0é‰Ýw“³¦«—†€Žþ<Z„?ìÀ‚ÎMT‡È8I¬` 4\:|3çí9d­)·ãÿFi|¦*pµáˆívFîbš‚½¯4Âg~-öÜ:õV$Ž¢XŠ¥3¶Ë'‚g±·H%
’BrÖØ¢âhv«Â%rNS¦ùãF^ÌromÉ˜¿ÉÓ¿çÑñŠ5Õ<ûOIDà«»ðNÐ¢+S&¼Û%§ÝØROv›ô[¦¦â;0>Ù¤z)Ç¶!t<žc¶Ž^è*šƒë~[VBK+é¼·bÞœ—Öæ†t¤tw5‡Ìfž¢õ„¿üd4Í“"q=}AQá+Ö²½*qØ–ž0Ò¼8æuþywà×½É2½ØñÌ\Ú#¼<ø$.ýŸeu‡y2©¨³ú^çŽ¾’Pµ²
à' 3õ+‚OÈ”HÚ2æé!<	¡€÷mõÎ°y	‚&ÿêU’žt…²É3½‘Z$ÂÓG¾‹‚Ž“ôÈF#–®÷|Âaz"Í!š18þd™JŸp<4á}(ÞD¼t‚q»…£j¶!Û¤Ño”N¢l‹_pGx‡Äq¾½Ø;ËÁ6ø_ÓäEº7*]ÕÄg€WâÜ¤[ÏXeM°ÖS —diâ²¨¦wz±SòxüBnzº·­»l“9“jÁGõº†.c~%(‡~üÔvw¼ñ_-§Çºüæ˜‰:T;, —&q€ÆÉÂV6 &æ~Ñ·æÄ^jÈ6Ulõ·x4”¹	wIýBkªÊ?­ŽyÈ§%,˜Ëê\Ê×°ø*kÎ\Á/øøŒMoÙÚ"YÂ,M‰™¿LÂÓÚë'z"9îa21þl.&•:5†!N;]âyDÜm› ø#B²¢µºÒíöà‰­=æi<Î§¼@àö9ù¢°œv`â)0ö†{áDÛuQC¤ùWG:À 7mäGe¥r#@ÈãµdMôIªp¼òè»‡"»8rxOEnN1©#:è¨Ä%œ¬ºú‡ëLéé©ûB–’üÔÊ‡0µˆWKÖj»ŠÚ½ý–åìB¬~8 ¥â,êæpþ3¦qHÃ¹I÷ÛÓ}Yàbcˆ QúsêÃNªãÏ«UÛð"ÌWÖ5)åÑ›À©/å1ôü^Ï¬Œe.5ýƒ%8•Lê5:TœüÉ²ö=r«U­ˆ¥Ò ;Ç‚Pà}†¥nÉÈ
pDhxgp™ É¤|ÃèÆEQ–ý:Þ§*[GA/fk§!"Giú»ø<Ü
^¤Ã^Sá»½ŸôÐpgziÂÍµz¾¦oý/¥HÔ¢&ý€$ö6…ê_ÉëÔ™è×Ð£èwŠ‰K¨Ørtß…éÕ$]7œ ¯s9‰)¬äZQàCî³NÕÒ_e*ú€oj†[Kvux\šàµ†1@ìW¼QáålpkãÈõgi·qØ)™jµ^¯K­«™lÐ ÞU:]ÊóSbË€Ž%*o¸g›æEac*˜]Y—i†y¥*LÙañOäã{É—ºãF§ôe#PRØï³·¹ƒkæjD5·èc?JîA‡ÉÂ®‘*Ì£e|3ï)°Á:+à™E1Ž&‚<$2z§=·ZÞgAˆÕÍæ~k31AéY¿ù.¨YAÉâ},“6>+.ë°iÞbzE€súŸ;þ‘êŽC˜˜óJÕœØ×ýUÑ‡vÔ¨LãÖk^?BI:FSÖë3Iÿõ9›³á³\"2û—Öu°Xÿz>LñõV#ê'‡Á Â‡i¹fyÐðVZ»Þ30õ5´7:öŸ…úïduzÀA5Áµ¨RÄqÄGAnQÅo~µ•mµÍ ŸhÝj¼ÁíiHÛÑp•(2©öú:LIÚ4»1£gà—W§sJg.Æ‚r˜¤MÌ^Æïp0'¤².ÅNÎö‡ç"žÞA­'J U¦'+áÝŽ^Áñjd2áˆš¼zÚ9bO„r_–Ö ãž&ÉI)ÇHG’ù¡®ºe?f|%„É|çÖx¡¶Úêÿ¤d¸RI %&?t0ß5¾ã°•ÿ^~ÊÆ‡ž~‰@hì»Èþ;9¶=þbÂÓæÞúýJLYzýJ†ócnˆR°£“Ý_†—¬+wc}¥â}+sýV$º{ä
àãÚ§“:Ë–Êz¤Õ\?U¤ö`-´‘®Áer´UÝŽ*ÈÚÏ>ÛþlŒy0gðçìÉŠ}ÝÔøn?Ràr…œ‘4œ$µëƒ•¦­“ü_8+XAWT)­]ÖT‹]
•C
¯a­Ô >¢Yà»c©uáº¹Æ%;×_K°Uä'^ÝgÞ ÁñþEúd‰ˆÍzÔS0º¾ýN¶¼À–JTÅ«^7 N4ç Š2ªM‘·oŒìŒ6/Òßæm›­“¸qÉâÎ¯ÎÖ{O¯ÿ£)fL2q¾F÷ß ¤’wÉp%pf9Î8RÓæ>¼‘Zþw„W8K.ˆúž8 ’›™wÃ½2o^ßï™ý£3m"Æ<¿w§}¦gï*<0¢W´´¾ÿÿÌ5»éÞ”…¬%Ö·px3ŽYpxøpÜ ÷11(q´ tŒVn|Û”!¢‹ªÕŠ«WÎëCÛnÒMÿ°–¯·K…jû?íœ
aw×í×KìNòÍÇ«'nG£/·ð†4¤p—£æþÚë&ø)<%l‹Ó¹µ ™Š?ÕàHún»tGHòÁøkh ™y5$í }®'NÄékŸÒ£>Šþ0	VëT*#êódi«1„:bGKJ—èt1FígÛ"lòWç£ßûá­2"Å§½r2 !ÇÇpjê Xlr£2£×)ðÜ:ö9.¿0¸¤’Ls¦3Ëp‹×¿‡˜†‰¢¹a¸Oê¬EVPfîÑ»…¯Õ9“ŽŒô
6€¦IÁ;Ø9³Ùä¶9'ÓÞŒI#x¯‘¥û¼ÇÎWM ˆ}¶ÑÆÝÅ’üÀ|É@ï3°Çö‰~-™®gYƒÈv…çÜñBRÀn{½§¯–§ZŒÈÆ_[ÃÁº©iû¾7» Ò¨‘["££*jÙ€ª©@ðu[W\âŽŸ}%¹™¯&\W»qƒ¥/¨À&(B©x¹ƒYlG’–¨ËÈy÷ÕÇ×Dl"Kðq9—&pwÆrqÄ?ïÀ£-p¿×ƒ‡ãïÛZn•pöÛÀÐ]¥¿Ì•žé%Ú…ŠEûÂ~+¶>ÆâÙâPMiT¡nÍ¢eÅq°ÉÏð4ƒT‚+6§žjþ+Ï‰0E»âl›Æ.aÀGøW-ªþ™#(ðøY>®g¤ 3VÄÏgÈ™ss®f6ÌD˜ÁÈ‡ü€
{|‘Á×ì%¼;øÒ{®÷×6†ŸW:öˆ¿	¥2g‚'!Y…‘‘Å&ØÞU&Œ²¸•f˜Sl€ïäé¶Øfß¢o·)Væ×‚×‘Òo¼¬w\aø)ôøvŠO´ç²Q1ÐZaé¯3Œiî‹™‹iI}ÒY«áæðØ´âd0ËàhÞÊ?
â¿W˜;^£Z˜Ð;uTsëÉ9Êbž½2Œ$ÿf[íÜ£¨á®7YP™ŽRoPŠ±Ž­ÐôÙs­¼ôjRì¬‡÷ZY;RTµ<W_uØ•’[1þiÅuâèÊK Ü¹’IªÆT^Ô½Fö÷eÌ7'·»€Åók¥ª†|‰­+DôÐë_Ÿ¹!Mÿ ‹ìXãE]D.~Sæx¡-Ù#¯.>DN¥]{9ù)ÅðûÉy¥jò/5®¾j§t¥™¶-tø‡»â,þÚM}p©Ò)*UÜ˜÷ž²œG~ãlí…€Z˜ï+Ÿ¨á‰>ÓÝ±ÖSKCº~çšª#ˆ8ÒMŽ‹«3FÁ¹ˆ¾VÑ:æÒ±¶tùð…"!ç±+yöG~K$Ë­ÞEÈÓJCR'|t5€x¾€ë$´O[ÜlÓtñE½I±_œ%ŒÛ“Œñx¤M—ƒä'Â¿Ón«K‡Å%)ßNúÏ¯¥P¯ÖÖ§ÛW§/q02²Ã¸Új.ÂXŸZƒûïAU“MïaX©ZžáD}±ã=¯½ÿeËM	æÀàñ	h8Ì£ýýª!šÖÀ{QÄ’©˜¥|+¤˜£X¡¦8géB–°,±Ï;Ãà$eT¬=Z¿‹ÉfM=úòêk-¿ƒ8a#Âº?ÉÏ[TY×›3ÛëjÌM'»lˆÐZÎþy¦åR\p¢ñ©ƒr(t“„—Ú§ýÛÍçÁÝ‰öP×X§ÀhþUà°ïœbˆu‚ê1â(àŸ—ÝÇó½øç9^þŽ]ù}ßÍì¸ê`û?o‰µá†à§ã”éo¼iÕº9‹Z·!h.‚w‰´³xÞÌ:¯:÷ÀóvŠ€ôi¶DÂVq%²—	a6á>2ÃØ¤È‘[Éˆ=ŽLb9p>Îaè9255eÏ¿ Ðv#<e¼G˜F‡-Ï¡A¿Èãæ8Ëy:ÓJû$•ô”ÕÇ,b½Û…XùÿE|Ñ¯§bO’08Õ@o*¼WŠõ|°EÞ/ð©E¨Ÿ§òqºWL,³Ì5Î~Ÿ] $„ê¹A‚ýùkmÙ»Õ)9
§YeõÂÀ OÑ¶ÍqÄÕIA„9ddLD8W…|{ÙùîëÛwVŠ='bÚv_WqöHY°F¼ÔÛ{Å,ÿÒí%çLPÄBƒbØ€%¹‡¡íŸ°âŒˆ~
6µQC€Dˆµãßî¨»ÜíNý=|…Ôùè/?¤&G0Èß(þwíÂë òÌoª’Óòª°,~áÞûK@¢Á]ÀM#?øf³bòšÍŒ}Ëu´B‰³´éF“ã)³ÊQÅõ<€™m0"T¥Y,­²‘k€i[-Ñµ³Õ^muì20žN|ê‚WnŒá«³òÎd‡•l*R"T0P½µ‰EËÎã
°¤ÃEð-Ü¦CbùÔ`è§äi”þ9a¾€òìhŸ¼¦Bp+â 4kOe	ùvºËãH
…Þ{Èõ¾§æòÿQJ‰'ì‰6Ï³à‰C…hd»—i:®vh6YÌÍC	kHÞ§×gxáK;7¿0÷™´VÎË¯jYKT«ƒ"K7@¡Î€ù]Ç¶Êl…Ï	ªíÇ™{j›2ü/óbŽÝ8‘xsOkG÷kÂ ÌgCÀ+hmxž2Z\;Öð~×©Aëx•*ÜÇåþŒ¬½lÃï9œŠ~ ¼¾I@Íãâ_È&bóPÒz;;`Ø¸r¾·“ô*°3«j§Hró£f,‚áûµÎœÚ¡¡%(?‹Ù®b¬{©|,vÔi~î¯ Érÿõ¢¤"½L®¡üuiÁwp£Bþi¦úxî è+oþ3o{s»œkE°–R¥ö@ºp/Ærl‚l/vÏËiÌ5•p%,ÛUf½jA¿²àxÐÛƒ¦²ÁiÖ‚5º2«rKkq¥ðÓÛŠG‹×è7,êìºEÖ=ú.#RûÁâ<Áâå†­#ßº¤ÌÞi£®ØU‘?³N«“à<v|£¿!–Ô
è©–Sj¢ÿ¡ä hzêDímÄ(²$·í1oùün}1í–ï[ß26ýq£óh7­pÒôÔ›a[¼wœ ¶ /?VHÌ'ÝÂ"®²”gÕ¥e±?¾k‡ã1™Àü7­s×‡íE±k‰>Ô;þm¦Ñ†š>Y¦eK¦Zï§ÛXÇ<¨/âŒËY´9VŽ±vrÈÀw¾l`mãoÌm-—96îŒ-À‹†Å[×›b™N D4ÛqR*;…ü¶¨ö]”¢Ü×_yx]Id¸äËFŸÒ9cßg-óUÂº˜TºÕ(æ» G3ñÐþyøcÒd2ï+‘ý³x!¯MY1;ƒÙsªø1öÅ§-ød£`8µéi“ZhÞ+-ÛÁÁ¶7'©E`€vëZa}[É•¢BÛcøq4RGÞgÆ;o¨¾ü.Ÿè”žã÷]2Z>Ù¤¾
Kbp uÈÑ0%¹4û‡1¬ø8Š¡àÝbÿ=iÅýñê}×ñß¨³ø‘0ø2z04Š_ÆQ(¦ñ+êÝ*d<Fvxf£“ýRG}Ê¹ou\—•,"gñ°°ðª»7^R¨àgM^Øb¼vê;ãùÔ”e›Â7±~Šbv$Â”ºOåJÜ£ë.yßöÎ\†ÌMYÒ[Ð,?pü "¹ÿ~¥Ù‡ýN'²n}›<­!h%þÿ×QG<…1SkûÂÇŽ€v±(y‰î¿uÝ¸”gêÇÁàr¶Âæè†PMvzy%°H¥yëk!üŠ‹×ü|´7^6ï6¹­yUH˜ó:ÂÔ[íPð‹Ú–ê<yÃ/Nð’ûJG—õYÿ©Á©N•¾?‡tF›dî«aùÁ%œ7±­„Ç¤ýLšg÷9»q•p€žS½‘ýCw*Ü»xø)»ÒsnÀ&êê Â–7’×l1>µt|ŠH.êÉ5€ã}öÄ›> »áB£CP)÷ø»÷‘5ãŒö
ÿ[y RF8¡!Í„	à~±Î:É<.2°üÐñºŠûñúiÓU$Ãý¬Tê:êGøS‰ü£%adý{,ß#¸‰¿uØ“žž·…¤Èñ¿»i„âT¯™]‰N³°:ø{âSÕX%‚Sµ!zfÜªy)!AƒGÛGF5Ðâ¿Šˆ±ËùWü9 Í[–‹×`VúÎv\dH`HÐ'¶­³gñÔÛx´ÞiGý6†ìÉŽã²Å?5zµÿ)…T„ö‹Q‰#É‰º«"å”õ"dt‘áHfF/ŽS3ÔÐƒvk<a\ÿøj"«ñ$<w¸¿^E 	‘mçþ×'Œ+1˜^SÃ[s@¬¥žYÚóÝ-zß¾™êN^¨a4Ø˜s?µü¡F ÷‡È¯¹ÝjÈå¶yÃVã¶én¹À®#°lö"×éÐ"iàÂÑ^Vó–GëxLíÇ·m©Z]SÞð®àåâ Dë¨UÇ³v¬@ãöÕ7‚­'<ÒVÍ~ì^ü’uýLE~E/<åŠä‚vª[9îÑô'ÿúë™ð_ôý“s}_¡].âfûÝþþ·‹±¾kÎj²,ÝåÈriÜ’»K„­»óý|›ê¶tW	äÌ¶ƒ¼ú”·õÍmótÑ	°WÑL˜!Z;çéHí9jš«‡6åÐÒ­V¯°ªíZ_Ó
wLþ·Ò«'{©SµdüÄb>HAÂÉÕ¥ÒËÏ­0Æ•.Ñ}ñxl‚H†9žÔ)†ÅÀ_·Ò™Wqê¿šÙ¼vÖ†€‚¶^i] ¿ñp*0BIþF<ž›FªC¿¹W•uP¨á…â™å$<šÅ9ÇÇÑ.lG”Ðiˆ7è‘îúT ®qãêWÅ“¦âÛª5b CI"¿±örac?Î
ÔÇdiÐõA5ð²Ýˆ-åì.¦Nƒ’Ú³íq¿ÿÛ#jV<czû¿Þ¿@¬ÁÓ×JÇ:06)¤ä40Ø1†ÿvÍ¿ Þƒî»|%ÕuMàÏªVš<|c¬PøÕèíIúàï%^2ë: @7éÿIŒQÃ7µ	HC9’V?/ÈÒœ%±î2îºúH²¢yÌ­qå½@éPW?žÿúôÀQûâ‡ûpÚ+š
^Ù}ÚlÖõm{=Ss·4 ›~mtñÄOƒZ}YWYÇC·d<r#ˆt4£‘!šmiû»ìù“¢,A‹®øECùafegg©B#uÕæŒ4s<4ÖˆØ¸uû“µUÒšéT“À„_ÑýèâB˜ïœÂ›Øú^£®©kÏ@k~µüg-˜_v<3	ßÌÉn«)"&¼Þe=¾/·wjéÐÆßˆ%?à«äåmøWØ¼*ŒœŒv ¡–…Œ]ôÁ÷}ñôÂýäÊ.IØÀÇreñ³£9”0™d8Þ	dú×ºòí¡m¬Â¢("ÜKxÿó÷|ù³¡öã¹ÏA›ñíd…Ú×Í7mŽ3m)¦"ç^ª§JèÿÎ¬æ@ö2ŸèR´xo}M@„#d…/>FšŒK$ŽË®/ÐÎû¤#Bí?
”W—„¼´Dõ·Èþý/€Êi˜ sî’Ô®~ø:ô;Ç.¤#GÌÆ£¿¨TÔ6Ë? ŠsÊ¯{ä2
{²{»y_¸9HWÝÖzˆ|  Fô‚f˜f[ÚnBk˜ÚÁFÙ"º—¼j,Áã!—RÔ1ã,¤*(a•òE._òUÆ¯P9 8´ü¥£r/A\û?ÆµLs/‚Ÿˆ/FQ»iÌ­úBö¡D°èF9RA’&–p}ûS¾¹×/(öË£nw.ÑÅÔV,hjžK$×ÂùÎ ë°â? ýïÄ¡ÿŒ¨Sûfônã…|¡òëi~ègð_W|"RÃ!¹‚Æî®uòÁx(?¾A\P©.;™É64_ýÿLhì]èl6Jôv¿ïÎ&<ê®.Kr,|YYƒÒ])i˜ÄPQ„'üÌÊÄÁ#M&¿SYMH<A¥QävãÔ§2Üùf'<e×ý:uaÈHÀÐ×Cá£÷€¦Ç/ßZÏ9Rf«pãiŒˆß`å¾D^Ü¼;½¦ð|I‚ñBmJÖ”n”þÝT6 m~¾ŸÄ80?Ê¥ý ¤Œ¦ºÝ’ÙÐGÂ,eþÖ¾CX+ÓwV§ÿyÖ}ÍªT>>5`FòÝèaO3­7ÎL?XL”“¸½$?šÂé³"h_Á|›a9ý÷¿Bž-YhQSû¼<!B<ü ögþb9šób2Á¡‡ýS¶HÀr«ndÖ´íÇ7s=IX0F2Ûƒ!uGñ?	å¦\ó£h(È–ìáâ°c‘qì»õH²ÖÊ~ÆeÞÒS€Ûå m>.›qàpó„‡7O„T›{¿ÀFSæÝfÔ·ÿýÍ@³éÊÁÂZI¼1”{ ýÀ¿$Ad×x,®J
Qì^6ç;¶r‰±á«›¶SxëäY ¨ùl}@ ANMF,        ? ³  }  VP8   Ty *@´ >‘@šJ‚qH¶€ –VâûDÍÞƒä5 	¾b7‘yó…Ó£Þ ÿ\ç§_àäsÔì/5¾­þ»×Wø?ñümàìôÛûû¿û@¿iþ‘þïü­gÔù«öGþ?¸òïìó<µ<=>Óÿ;Øù7ö¿üŸâ½‹çÿ/ù¥íÇôoòÿù?Ñ~Qý„ÿ2þËÿ_ü'ù¿yïÿÜÿpÿôû™~»ÿÖ/ˆ®ÕAPU9œEÎõš–œã“z;¾ùP° ¹’µÝ9â_RVýÒ-È±Ðˆ),Ø8ªXF€ `Ã3ŽÇjpÐH„ö6`ÍÑêòê«®õƒÇiz?c ÑŸ!\•u³ËÕÛR–FÚï¥:|˜÷§ÙÖlí c©¤OUUeofÂuŸfèÉ†pµ<r\®Å5µÅ8')¶`´LžÔVÏ:V (ŽÝáQÐDöƒ2ïT–ÿûpÃ©Á~Ø!µþëÜîY¢„M×ì6Õ¾UoaÀoõªÛ {ÊqhiéÀ	ýýÊúà›Y‰ž‹óªi•á–ÿ¥ Ò`Ò³ÄVÔ=ŽÏrØp/Ø–§.Þ¤Ü¢þ¿]®;HÛi\ ®Æ>Ü"?Íáó”wÖ	i‘ñ¼Ãïiæê‹{ËA ÇRú+wb¹æJÜ6£äÛù¼'3xóì»UÄjµÎ–ÑÌ"Ç²ÝPó…¨zÐ?Ý·U¦áG­ù—w<ÊÅ¥±Ž¶ÍG¥{¶'8ÐÔcQ}¥å^±¨E5;7¹P¾î™%A^½nyJKm;£v%Í²|CÊü\ZHª+%CWX˜¤`Ù¡èÉþ×‹s+WËG»]¾ù{íPMIK·È¯ƒb©ºñ¼Ãdm\äVÍ¿ÛŽi°G”zWõ¦)*­Üt.¥4ÿ`í ÙÿÉbð²B'Àçÿ¾ÝGF²‰ÆR¥€¹&ÁÛ¤Ê]€ÍÎk¢ÖgáˆO*x3,|Wàm1Ý¾h)¬pð¦Ê­c'ŸdˆD0û³ÒÄIÊŒ7ÔÆ)Ëªf?3LZ›4×‘» 3³7þOŠwYÎÏeÀ’…}SÛ¤í£C…ÌÅ±#ÚxU
^¤?O÷DŠL²:mÂ¤ë|ùq!án¤D®ÅÙÂiÄD³Ë¦}æàð´Àz	ææÚ0.9¡žµ8¬UWðÕ©¹¶ÙÅ¬5½&¶xÌÞ¯µoúºû˜¢#|t¤².ü#¦«DÔç$:ÞíûçQ¥„[×9§	pÃ^éž½œÜp*ŸÈD3Dº` þþŸHh-07£]r0iFe­dì-4%dã3es-¢Üm>U6âIé¦« CQ²³1:²¼š’J‘ÎDC9Š|€G§¾¸ Á½äÅF!¢ú™G+»ùË­--®·{V°¬×$b¾í×¹yÇrÅhµ7–‡Š…Ên‰`ëÞµŸ`‰#>oÿ·'2²|ú©•êböæPÑë<(*¸qjR²œ²‹Õq7@læúh§Ž¹‘Ú´ÞçÞE:+ŠžPÌ„Ù£FE±¶Ø$ïÅ†å7hÿÓû"¯¯*Qšäƒ…íPÑÛUI C±¯€¼F¼ôûXË1÷Bmkè+Í—n:ï`|k­*çÖæ}nÀL
¹‘¥&õª‰m'c>Ç¢lœèDtÌñC;ó•”
D.Ö¹Ü(Ô·šŒ•ÕäOh@ï{x[Ž?/*u­µr¤]mT|û¼13ûÒ¤ØN›\“ý~.w¨^øØgŽh0M¾õ¡gRÉ¯_™êjÕÖÊu¯óª¿ð“6…Ý	_ þÆØ:ùæþun><pç>FXÀ›2þ›ôzöI{¯™5dIÄCjãÂæi²+@·›KÄ´ÇÉ´š¢ ^zdvÈH)Î÷3;Gúþ´«Ç3~ÈO9¿Ç3… ö8vElÏ5KË€é…Ú¶ ®Œ€*¡iu*zíÜãèÙt‡dhÚ#y7£øfZ}?Ç])m!Giø³µ·¬©;Žø‰¤q$+£ø?ƒöìò3˜‚i›	TŒákøÔØ¨®C­žg>Ä¢*ì‚(MWl3÷±l–X6½ùK§EýÁË/ÍðÑÒbQ/#äfp˜¹„¦|”¬,>8¹u3ÖˆÐ0°òÚbÙ"™Añ…%mÔ˜Úý:ÒÇ‡f³“Vq?V¤$½¬a:Ži	A­«&·=ðÀ²î:þX„Õ@¹3q©w:!V”#~¹%üŠØ*<˜~ûpz%Ÿo£ÒêH	À“ã,ò0ˆÜš@þ)õŸï!Ö‰„í[(uS	QZF×¢™x¯ð³¦Ý|é¹ªg³,&ÒØŒ8‰ëÙž»0mèµpŒïc*œ8óŠ
¢¬|£m;ÆÆ»‘³ãßŽÛ‰žò›óÉùF*P€¶”ùõFò¢ávýKŠ{TâžL²]µ¡Ž-ö“SX×AÀ«$äe<“h¨M1vc`…øq¢ì÷USWŒßÌÄÁ‹Ôã-!%ëë'&¸©å ²¥_äûXDvÊE/ïæpª$Qõ$èñ~9GAà%3H*ÐH“¾M2#°m§vk)û=o(Ò8"ì¸Å¤•Sh¢16Bè½ä‘›'SbætzÅ‰Ìc4Ä†Oâüª‡ä'PñšøBÂ‡»;Bœïš*=Ø{Xu«¼ˆÙÌ=ŠïË)RóSP<:,-™<º´§U&2Ø=zÑ´—×&Eü;÷†Éi²*È{	ån,€r—²i¸õ.¥yFìœ¾sK¼dK‘JZF‡Ú&MÜ“ÜKÈ è™! Ê‚ÛkÇ&G8*b¡vöÌ`CÍ6O'_û¤Q5,Œ‘©¼"Ó_ÊÞò·€Ýä?6Bž*Þ`eG¨17…Ã‰÷Éôù|Ó¿ö{ªÑÌ/RÛÅýå¨‡=9‚HÚr@±Éžè—çÈç-ì	Lb"ŒÆ”rÉol<|½à,£ªX‹ÒÛ¼=ï-±AaæSÍÆ’5øšÌãæ¾áº÷OµM‰5ïº¨ì¬]øKÝø«~ð¤*Ž'˜ÉB[ú£å~­õê˜hÌ[™f€÷m²<ž%¶ŠYK`-Ê9ÿ9OÛÔÞ…àˆ®µí¿f¨¨dÐ«™"ÔyÍF¬p‚ìTfÀ0ÁTpu^¼uÚÑEª”ép7Öx>gàF·FòAá1f,CÏfBŸW¤Ò‰è:MÉ‹étß—üæRÁü‹.~a»»Ÿ"
‚6g•Ô˜ºÚÖºÉe'î|YÛí#‚À¿.S
ñÁðBÄûmdIJ«Oô›{Š
¥¯ÜG¸{•—¨[·’ÊSª÷Ž4¬??Ð^B¦’15ûŸ_ ª®Ô‡C =¯  ¯Œ½"‰!¦µ1'³à$–Vã/øEŠToÑB—Y½ßüš§°wÃ\úgåå†Ñzx3Ù¥qŽá‹ežÉ3Ì¼µšŠï1êæ+.€x;—’­õ[°ö©vEË'FzÒÆÜºi"$‚v¤¸ƒÅùGøBßgÎQŸÞ>eg`‘fñ6(ÉbrÂF+Üº
!tË~Ùÿcè1W!G[z”2\V´0>÷ë¢µ­‚g‚â8m50Ý¤$ÚIÿÓ—RGJt¹â„zÅ×HN¾~Çè3ã)SG–¥?#Ch.‡ˆ‘tÖø$írÞuU‡d·cpyÅnÇ þµG´
zéÙò²"> øŠIü`ËuB¥¾çç„XŸ»Ç¾ÜVÍË9í—nÐï5rÖÂ¦‹X *¬léúû~K¿‹+ká`¤jSžÞ‚nÈ˜y»B¿<tµ åÏ¬žªmµÏ\lÀµÂsÖš•kÊG «³}>.k`ƒU=Œ×þÿÉÝ´¨Ø—S¨‚—yšÊ©Ç(¾{ªÙ‡¾ÒÛõ Öf›Qø·$3õ°@™¶hè¥g=û‹À’7‡¨3‰š¸÷9ÏÙxü¥ÜÎxÛ†ˆ}-ž¨BŽ¥£9²·ž=Á4i_mk8O[‹ãp×±Óøé«—þ­5aöýÉæ Mõ­i…©Ý¹$ú5ß™(êÌ[š/Áj£ —°DôÂmËÚÞÒY<2<ÿ+-Ë^æŠu°œ j¡älúe
©›0cÕ"¾äSÝ¨mS¼žzÈÖµŠ‚ÇÇ¦¨2®4äTK÷?Ááe ÉU‚¾gÓužˆÈâH±)œAJÛˆ?¨cÜö›ìÇô*¼¢d1p§x<©êS~¼oY]âä»ìT[:¾Ž™@ˆÇ%Pã©ç+ý›Bò&Ý¬¹.Ñ|.Ú"ñÌâ{´w˜¸¹ÄÔiXæB™çžT…uÙ'K|=õï4žÌ7c<Àƒoã£´ÂÖ.Éa­ ´+µ™¬ ³õ±l?*3QÛR¢ÛO\íüÃ ÐØñ÷ãÌ®	HÈ˜ÎÍ‡¡kå¼Ý95éŸÄ‘5£Ã¡ÿPËðí8 %¨6°¹†4“bÌDÒõ³9ìZ(Y7ÛÍ;ÈÚ¤^Ù:dx	d}÷¦D€$	º|ÇwÏIÞÝÔRÅbØ¹>¼8Ç;>Ó„—{ðYé–H%5±.i<¦aÖ^ Äðì<ôzpSðG‹´uW½<TC6ÿô,}Tí8RÕ1 ¼,d§¢:TŠWëEæ¸4Æø2ì¡‚Æ\ÛûÜ'#Åq­½¹€âØYXn\7MûýHw›"ršà¸C Ç{'•ØÑÖû™›¦Þã>¼È‚Î(rUŽÌ=–ó¿ë[ô²_˜µO&!ÍÏÀ9¯„…èJ¾å®Èÿœ!Kl¤L+@ø]Œ/,d"m½`ãuH#tºI³@‘Ë™a\GhAä·_·æup-{ŸM]StÌ©Ò.áG	X¬ÐE­µ”õ9î®Sq”¸.®´ªçîßniz‡?ÄãoêDÓ¢Ê%wò’°l×·£^QÛøòFm°ØYîÈatYÌIÁç<6^„å*ØIùeBe£ù€„G<¾^Öup«vínüYD`ŠþM[Þ6xE—«ûŠ¤Oì¡þ A§‚}A"²šûàkýáôý­gU†ãšIÕS~ôI®¢Ê*m"åÓ.¾€ÿ cc#ê.Ëà_Äf›¾ž"ñÆf}ž‘Ÿw'ÕànÃPÔ¾¸ÊŽI˜±þ?çÖãÞ'Í°V„Tžï6^kø1"ÁËžù^ÛÈõ°3–7/H‰:VL3Z™ôfŸ/ÔÚ®‰‡ï|	Y³`ü{â8jþ.÷«Ó²…¸¬"ðÕ]R›ysà¤˜¶þ]”9ëp®êß“)‹/¼#Ò¹Õ*¨æ‹wêÍ ^ž<V‚Ëï–oß*dÂK°˜8šcn)i´Zçh±¯úŒEÏÎ¶.þÒpÓ9ËÜ\wk««¿sæÔòwüÞ.Òí dÕÆmmvêé5¿ä+R Ì³$¸'É’@†;í¼3VvT?  æ:JpÛêñ‹’Oqð–ý|;o“ùo(!÷º·ç´ZõóMÉ·É±¸‰¥¢€ó¹'d¿ˆ;ýw%úÄYváT?¸-FES8ëCd‹yœÿ¤t÷¡¯XéÝîaï5Kö&¸AIm§û»´œ	)DáÇWO¼'!*ù@ýã~™âð|j[žàöJ—Y°ê§²Ä-TÄG¿´S#ŸQ¯-l\=ÞÌœÆúOïÑ#QðZÓÑç÷bG¹l•3‚ˆf cfþazãpDGÿ›€¥'	„¬’ä$äèu¥oG9k‹ØZXoþ?¹è×9Ž<×xüíWY–€³NDpüŸ¤¸.ÿ§u¾ì6?í‘'¸‘OãÏã—@àŽ€·EÓæ ‘ÅiP±>yŸQ¢§OWcÆÔ6Û›’&QÅÁŒå
^V ¼'ÕS¼â`š¸)›‹³ÇëŸˆŠ(‹‹•´GÖùÐ²Š*Ð=+ÃÍn,J™§àÕŠËžü¢¼¸†I‡äÈµÂI›}°ì3+À†§÷¥ÿHƒÕYüS-ˆaoeG;:ÖäTÐNé¦^jáÆ":T+Ê“4¾‘Ï²#Ã…ïÒd„S™š"Õ‚©UÙ¤¯‘/¿3˜J²(ãäÇé=Au>ÂªÑÖœÖÎE£rRìw?ft¾>p÷×ÀŽš6LÝg+š!¢
HîTþLJ(ý‘µ1&£`½×HýšÞfôS…u]•åŽ#@éµ2VC48×cV¢¶ùRç6Çiµk|_YûÄü 7 ì¶
žú9bL±md×¨^p.†û.óSŽp“üAªd%Á’©]…%tÙ#Âž#·+¥äã”@Œ¦»Îæ¦‚ÇùšÓòëƒ6èïÖ¤*ûoAe!3½®||¬öÁbè«%ú@cb€òñÀüB%aöó©y} \Ô·£…ËþáP§¹ÑŸöêêÝ5M½3ƒ¬ìp´q[lB2<˜.é–;÷È·¨«?KÐ<ccÊ¨¬f–ÊŽæUazs4/W¼Tö×	¹éD Dáó££1N¨ä©—ÙÉE[;t¼³,Œ¬]sFÐÞ‚è¨Ðë¯U™#Pû¿‚ò@yÆCðU—Úfì@@ K<–®H3t÷J“,^=µô3µúÒ ¯,ÞÅ*3§¨ƒÝWÚ¡DÖ	Lyþœ5qëéÀýÔëR8Vgk,Ç¥(šR,2‡(ÐêþËª
Mp%voÖëïpW‹lˆQ‚ïX2®5!ÜÇÇÊ#nú¯hÞ]Ó®xÈJ˜X½˜$±ÑLæ[R°BqòÈ/VQŽûÿÚhÅ»¾»~ª‹³s(iÆ%…²(/¦2fŠ“”0i–gÀãxìMÀÄ°ÈþCã*‹LÄnfqÊûÏÝ—¿a«bÍ£áÍ)9Ðl§Jµg0×îãÕ ý"GJ6Ÿ*@G¡‘þhDW_eú^¶Ûößp~"T_à1LwŸ¡‘ ù£²æÉ?"“ûîÖ*äY­?b0Œ0 >
QTœ8®OàpÞ*t¸×Ï_g+{yÓ6¦~âLé1¶pùˆº]¸–;:µèˆÃÄ\Á~Î¡&g…7½}xnPkµ4kP·½fA5KÐé¸§[fá'‡2ÝzÊe»­‰œ¦P	×{žè×âNgOj‰ç³uyþRK…mG;Ù¼Ÿ•-Eºa³¡NMI0§WÿËrW|/àªèÊŠyi{À_N<F<È™AÚQÍõ#b=«~Éï­¯í}’š4];Áë4•ç!ªäWqÜÓã.ûŠF£Ü=§°de|"»„ÛäÍ!vq¤¿È°Å!›*fKZòé<þœ{	†P G-KÃ&VÆ›Doí
Ã~ë•Ì{bÇUhñ¹V˜¶å$1¥ß¿ILå`<ÊÐ¶+Ázzó¢8ˆ»?KeBÖºx.RÜî†E¦8L`Â
¶öáÞÓÆ‡òMÄ­Eƒã"ø2¬
—¾A?–ÝÒ‰ZRœm‘ÐøE~åöÊCV´sÃî;/B kõûê§‚	hbÛ†a ;PB7Ý"Š1øíUjgûyàW«OJ††´‰Ð™ÞþŽiû7.7¢>¢&çùÝÍ4o``!¯ïì\·aò©+¨ù2MñŒ¾NƒJûKçõªb¿°¼Nð?þ_é¡­b¸£y¿ehÒöú¨#’‹k+é±Þg2ÒgÕæ3³d}Ñqõ{÷ŒO×|7ÔãüšÀWÊà_šïÈ•{ô÷¼RšQÛÈ—Õ³w–³ßPmÚÏü<FŽ"ýöD’ŠÏ)W_o¼ ½}½]%± O×S£žoiY´­jw97z9G^ÖY[)<wÕCª+u½Pó¦™¸Á$Ý­â/ƒ@åv÷Ê‘ÿ)±,üÚ½4mw«à‘ô\Ø	lKˆ±­'
ÙðŸH„‹;c„V‹ýÂ7HÁÝ»=”é˜õ¾WQ1I¯PÂ5§ý†L`IìÑRþ(Œ€õ–0Å†Ï½À5“–3ÿ:7 „){²:qv£[j(6­ƒ?ä7€G»(yÑ´šÀ…¸Ýóí6v§Y"gÛÿ´Óú#|EèàŸ“<î\¥ß€Îæeý;má‰Î!³{¿ÐÑ•!¬b•ü®ŒGã	@6?DHÄÊ<ì«@ÈŽT2DSµ´„¼²UQƒôåi.J¹Èrïô·†@´¬¦ŸŒ¤«8Ÿîï§MpÐyôù ƒ–Ô/s]CêÚ/âùùØh±æZ	00Ý lfì}ÓÎÜ,¿À¸"£¢©Vè[sÈ>ÈÁÒÁµ0óg˜ÝR¾§/æVpDÅ[ïÃ<1ÛÉ,:ä®%	/ë¹–Ðâ8öçÇ9D”ÙoÖéÑÔMúã,[Ö›]Ëƒÿ9[_æCuÎ©ÝÂ+M¢ÌÚf×¿)>Ü#l­è8ûî|£É]­©HS7	”þ.wÂ9sílPÁßjfš¾ž‹¨-`=?ýù `ë,ë7˜ÊŸâŸØˆ„wdñ‚m¿ªÙs…)=ß4Œµs£[ìßÞCx©{RÔðŸßØJl°ÿ«
@…ZÎe«*(.…¾ái¤6%fði´Ágýr€—b‹0xsGíøŸî®Òl°)„—jûfÿÓžÇ±#àdcåX(oð&87Yî@×Àfökí`<ÂàFƒ_¦Ïö‰Ä-CrwEî(ÄYƒw¸`–Cü µÛ/ù¢8³¤ð€âQá¢êÞëÄà-¤sž=ŸïEÄf‚²¾¼'(U.ÉM"mF˜Iìû "Ó7|­­Ñ<­nêKŒ¸d‰.Ô©	œ—i\Ï]Ä&]óe°ŠôóY+ŠÚCº(RžŽÅšä5„ý!Át‰Òm€7vÿ¼÷†èù’q£–9z^©,çý™õ¤ão)
 N1áà	yÏ€ƒ¢Ù-i
ãcÑã>«¾¸ÒìNé,Ú»øœè]K‘¯Ö¿©ëÖû}u¦ÁAv Ñ>´)ƒŒÖÖîÛƒ’ý,›Ä]Zöºj¡±–Ëž÷â.¾³c?ÑYŒÝ,÷¹]î§¹ç½/äOÖåÏÃ¾fŽçå¦æEåMÓYZ"ªëØ\-­ˆÊ¦	Ç¬3èû»8W…ôøÔ³ø¡d+v
"¦A[+ÏIÚ²Š³jãš³sÑc8qé×&É£D‡´Ê$a”A??˜Ôj´`ŽQZˆµZ‘ÏH8ÿh
\Š÷ûÎaßÑTÙ$Ð¨SD<pÐTžS…b?¡Ç|X®ò¦	Zc+ ¤Ž0(?G%ô?©Çá°«gvÅ‹®z¶Iocyþ7šÃŒÕ´ ®¤1ŒZ%¦„Õ]aõ@r—«rúž@u~«±Ì˜TVú±žZöüWVœ¹¯xO¬–FÚ:rÌWMÞo!ømv×Ÿ„@{ØÉ¡ù)*Ú€AùGhÝŠð@"ô•œÏÚî˜ÃC-ôyÿ&	»Ma…gñÂ6ÏcÊäŸÉ‹÷:ðÏ„­[BzâŠuÓsäÚUBcÕ¬þ\%NÈ	-Èº§†f¥í.ÿÑ:áE>8d’€Ø+ÜE¢æ>]kuPÉ‹»<ñÊ¡ñÆãî5;>ÌƒêhÐ->ˆ°¸3¶S’ «.üidãyñ`+M+wÝfäyS¨¨ê\Þjló¥	,öw.×¡Öû’ŽóÍÒûâ½ô¢ì«?l[bBÞú¼’E™3À»&e¢5tn¯Mé˜´1²fáŠªÒS¢2éùk4eÞ<¤Ó²k±È«ìDµ[Pøé‡½ö7B ÑÎ cDî?ee3&8¦¨hÔ¤usüj,;t”Ó‘'3IÛX¬÷åÕ¯Ñ‚õÔßêß@\‡ÿ³º[¡"­»™Ó½w;\û7I§þ¶>_³àÏ¤z¡]Fô²+0ÉäS6ëiÚ.w¿é–ú9éqxÂ­¬¶A‘¸›ºÌVÔFü†W«£ÌóàD=?¥^æÃ“7§N›gÐªUB†,¥dÈsêÃ±±-0œÖŒW•È‰zjlð¸,ö:óÏ€çj°»:V‘7±ykV ÄÎ(ÁvÜÛ~†³ÆU¸iå›#›þýL$ÊÃÑŠ, ?íÙå\°n;ëU¸pxDë]ïJ’ë'âKïÞÛ&‚èn-ÂØ’ó“ÿMmNà ¯ìÑ$B*ŸÁ)v‹Â¢1|õuÛô]Æt3Èø‹'ÅG 9"òþ ‚JÙ¦„®g"ä<Ç¹ÝzÛƒŒ¤Š—¦Ö·lÛÏdé ‰·[7 HèBF!6nõ;^ž|¼%ñ"ý¢×ê\o€CxÙ/ù¼½užEâò&çüÜ¡U°„Í:xp’úrÜ¢¥–ùv YkDÂ½h¿/º°BO¯ð$•ßÊ·Õ¤ý^Ç”W¾ÿ/´ç‚—ÆÿÏ?–@‚oÔÞìïÑ>s»pt/zhBGu:™‰wRmhÂUÖmˆº›þ^åF­=ù¾%oçkÔT¢ð€ ANMFÜ        ? ³  }  VP8 Ä  ôp *@´ >‘B›J‚gP²  –P<çÈ~ŠÈøpy`¼ÅoçŠÓ®Þ­ÿu\wÅß5¾µöëž[ù«ü«ðéýxö×òƒP/Éÿœÿ–ßÁ ?Qÿ÷ñÇôñ}û-ÿÜùoô_øÞYþÿ}ÿû1ðüÇû7ý¿ñ>Ãö¦óÑúWù?úÿç>¿—eÿ‘ýëÛ'ÿÿ¶?ÜOûþæ­ô?Êë‡:€ý÷mßî§(eŒî×8e’½w&/Š®”Œiîë,NeÏ³àsã¦{– ëtRç—òjg®Éþ!«Wœý¶š­„,fzøº^¬é‹!ø^a™Ð©®c“×X,QeCôÛ/(Qè%:JÍ\Bù6®KC„7_1þ*Klésš„™,Ÿ[Žê·»9L Y·;k)Ð‹¹C¦ÈO¯`-g{ú4Þým½ê_«ôQ7@•n±L%Z†ÅÓož…ôÖ.Ðárfi%&Ô#ä'ƒT5)DçqLV:;Nm—Ãw¶8PŠâ¬ZPAv§ƒ?„pÚ¡N{ž‰Ñ"º2%Ý–OAYá"E.ÉÆl)#¹‹>héã¦*3pæçí·å—…Úx‡ÚK ÂñýQxºÕ§÷KD@½ÎÃƒþÛxÓ$˜ÕÂ¼çÝ…Öñ=v5Uüô‘mŽÍ±<ö»¦Ð,EAe¶·€ü¨—SÂ%»ÂÛ“ ÿ_[bÖÀ¨­äóëµUÏÊ"¨öÄ–"‘cfLóQŽ“\`Ôï*RxÚ^VßÉâS.àûcÐ[hyª»gXÁœN;Ù-„Ü"·$CE5•,ã—Á1¶(îãnÖ§ähêg»\¦ ;nÙ½5z·à{ÀõãüB2…ËhÊß²…¸<Ì‘;tOž–þÊ§ ´œÑÉ>þ&$ì J˜Ðcôî±U:!x„<Ç›ö:=»å^fñü¥KžÁÙ0LÐNp†åDáM¾ªr”9(_EJx`ÎªŠZ«sßÏúsÔ™%·”h;VÌ=ð7ÄºOÓ_Gxª7ä‡Ü7¡rpï«þú¡Î0c#Iut‰Ž]}Xß> þº¾ãÄÁ;9è¥¼]ªØh97ØUP¼HÍK£¦­~Â'–öïP³µÍÉº0£ÙQþ^cÿëª¼˜‘Ôþ«Æz»˜8
L©…j-ð‚wbí§eEàø  þþÜþçp&e…ò§ÝÑYtsA‚Øù ÔÎSr°¦y¿Yg£Znm%ÁàÞ#ü¨ŽHdDÎ³mÓsÙÅ ‚§âhR¥4çÉÍï{ZþCÌws¬©X`5ÿ.M„Ðbæ6vay›Ä_kÇÕæÙ9D1©ÑÏeØ}Ÿ0™™©›OFêœÅîEûïÍ _|_Î¶ûµè¿ï°Û(:†s„I-y‡¦‹Á.}%¿%-^Ç8(:M´BÌ´·ú™5KÔž&Ï¦NºÈ¢ÿ¬ïÿ½^=ÁHü ÕÀÒJ¸å|»£p®FÿB.@mv@ôpC¢¦$ºe$ÓýJ/HR]<Cû­ï£‰woÆi¿±¦1k*èíÔÝômÉ2toÔ°ÀþHÖ&,7L¬wU\h1õœëPßçz3eÖzÒ?¾ïÞò†)Â2.ýÓ	L7ë"Q ó5:{®J;ÂÕ)œ¦w/æ¦D;‹WdD²6Ï<õw7¸‰X"\= ãÙ9I–a–«‹¾Í-%ù`êÍËJ*†ÎÂ,r„Î-ïCÈöÊ=#°ÖYî¬ªö>A©Ö÷ƒlŒÁ9¨ƒ™ÜS—(¬¢¶VàË¾;—r×­Ðïe'Eú†`}\*¦/»óR‹ö¨/~%æÝ3¶ÀâÌÌÊ•Ó €‰_F<Š,ÓbKÚ
ðs_YÏ‹7?‹¸Åø	ÿÌºL¸Š¾†V¨»5…~£ÚÛÁÂÅ´œ‘èÏuäˆD÷À¢–nœZœsc— íŸa$Õ6Ç–h‹ÖöJý£WÄ–u‡î¼××!š&ïPÌGîhN¥˜Í!c¹aÓõñíQß.‘€}þ¹Ð]7[V~–ð­	šÇ˜ûíÎ‰P(Úý«xéxÏð¾Oÿô…›.^6>(™™°Õúµð3J%énfi5h”ð®;’îá[ á€0 Ð×ùÍO·umÈ	.`IrùWfa½Ts˜åñêBª±˜ƒdpšõ·'P²vØ²4+Än&f7·€‰›÷br9M-\‰n”Ê·C&ÝÈ½óËàKß·l=¤+2Ucf/íŠ„a«ÔkÏ›ßù+ƒU}w‹DÀÚ\ íƒ¯Ý“X~}Àæ¶ŠÀ	Õ¢³RŸÝ‹ëXø\)H…ûqCôQW­I*åÖ¸:H)G6@íæ"R¬Î!‹#Ã$ë+Îý¦Ï8Ë¶‰	Ä•ýûgôŠ˜/JÐÀ@<¬/5ÎÄól˜´€¨œ¡É¬,}ºIF¦U‘X½•î`['÷±}£@4@VPçÍ2®(H~ÔQåü¡kÔ
Ë=¢‚À|1W?!núLÒßþ]hÓ¶„6Náa°ÚÝÎßØ€bæ×¼%þE,~ZÉtÎ©Ø±ÅóÓû¨àù½¶†ôw6uò2‚yïÇ[èa_ì%`±ÞAáëG²Jì£|ýæ‹#Üëó¿ÆÉM¶»oŠ#‹¯¬ê&u%ÑÑÌI·_Po=#ÙÎ™â‰+ý§ÌÑÐV¼˜Øb“’jGTJ	À|
5K¨„uãçîsÒf‰î0ÂµÀx?î6áã€0ƒ¿Å÷ŠÇ‡¢ìŠdÁê6b0"G«ì:,àŠ9¶ÐáŸ‡€E?úÁ#þ.é&Ï!Ã¶ákDÝOU¡y•ôo%ër#Ûß€|„ÿzùV­KynïèƒjG(…?-QËR>¦Øk¶¨/¤»:CƒÁ3àWÖU”Ú†©Ÿ2]½¯g±Óv•;÷)¯áKxobûKQ¼ümµI¤¨…ƒ+ÿs¥”sˆ¤K_8w$ÉM‘×)3Àø®Î“Ö–æVZ|¡¸høˆ·+³&fàÈ¥XïHQ±íèb³«7¶–ÆüT ãX×™Ï˜ÿg»CÕZ>úx’·71
	Í“Øß5&¤Ö”œ{mrkœ·†X‘÷ÞV|÷â¬jÒç"@·‡­‰t‘æ¨zWê’Í¡pZC†m)“J§óÂÛ|ú¢Ð‹â‡WbšÕâëp9½b•¦Ï‹‚_ãI3Šb$=CÔà* %(f	êÏþógï’ˆW4ë˜ÔÆâxs]ù]åÔ˜Ípè¹û‹Ûª×ônõOØÑ³å`3éïmz@é\&d'açJ©\DøJJ€ƒª¯¶2cR"@­©;IÓM¦‰¯880µQG €È|sóáñzâcHÄ0tèzBvù¥×¢x®/˜MI¤Ñïüp"TòQPc}Nœša’ÕÒàzCËÙ=û¼Éªz¼á3¡-ànuÎ]hp—($[ªs«>bÊÞGê’Tƒ\Vôð…'Jä¢œðùi¸–µ„¢·Ó
 Ä´¶YRšÅvXáé˜êu#{'™ï)º’£'â®x4~á¡ˆ¡Šž˜ü¸FKg®«‰êRµÍqŒÝ¬Ë Ç¶¾°•4ÉiþÃÓ1üD¦8Í¦Øqg[HÀ†úo9
n„çÏ£½]IMÃ˜†4Zº‹Ìaª3loáá-î½º(Ái¹-¯ç›˜+ynaß}DÒÊVe)ûè7hšÄç¨ÏU,aÁÞÌs*¢ëÏ'&ŽFJ’§\Á>	àˆSNy.%Ë`¸	çmÃœã‡oÜêýŸxÏNÎVE—gßb©÷üêrÐ2(½ºYEL‚RÙÒ}'Ä—ý¹ù%J¡R{úëáä˜F§ú­w‡—ihÇc7¸„Z|Ž²ý]ä«o+ ]	ZôHxOæ}òY»Ÿéc:K¹j¸"Ç$çí}©Ç3°S¸‡ƒj{n/añ ye<P2!ÜEˆÂ<q…¹EC®@ÊƒÍ…Nß1WìæOñÎË[YCµÚÅ»*jvè­žÝD¢öl´ˆ½ùð¥KDýœ+©±VQÒ¤_e°T9F$e`bðAõ+}¬Îˆ>:U`L¾%tÏzðöþùž
EÑI¬˜lÒcÏ-²¨´7HÊu„(BgÅ«`‘Ï„®#`éeÈ2Îu'xætö=_¹Z.qý\ç•r{xs-Ý^³ÛÁLiAíêE#øú”_UÝ]óØEÈ>Ú6ÂFÓAmé²ú-ÅLy”žÔYå:öeËÆô7 OMå;8ÀÁV1=ÿu4 ÜÉ?vq¡C¦CBÿ1E8õÔP*‹:mO–Ì órí*5‡ôÀÝõ'K{Ë'o•\½´
€«9÷"9f›ö§|ƒúþ*ý¤XÞpêão\žZwñ¼úswžÌy*¯)ÈÐŸccÌC³(8¥õm°E2ãÊ(é‰Ü5»4"ÑO—´{	†maXàš£ª6è’Ô–¶nK·šÂlÄ•Rgô=©Šø9qö1ƒ'ì:ª	ZÍÖtŸŒB>ÏâpÞMÇÿ®f•*’•çë˜W\‹ôàFò.÷%Í^«žbŠÍ†s#»–¶?›U(aÞ*¥›ñ=CÌ'Pz(¾V”4Á«ÑÅóŠ6Þ®tüzòŸ+6%Ò\æ}¹]ËóÄ’ ©÷§{£~ÇxµÃÙWPóuxÿ„k*†@Ô¾ŸA¶×n¢Qñb¸Ñ‹Ó-l'D•ËÌyé»Ëü™Ç–/«7­Lt…85êÞ_˜ÜÛÙõò{jèC/ÕµÃS-âs•›{@åþùÇÄ‘SU6Àtl7èéªÀÀÌ¡Ô"€uÏ“K:sA³tãÙii„|Siý2MÞƒÐààØ…<Ð	“G`¢¿ùñé@'+%ÐúÁà÷ƒ.«ËóYKikm§0®¶ae2‘•tMmânbpÝIS½û(‡8&¦!¤&ªÝNˆ0ªÞBZ­ DèfI|{?ÏçÈN®½CÀX"ÃV(Éx²æÖHúÇViƒÇu™³ƒX¹˜à=ÇðóO|¿§~=|çúÖ†sWsy—~×qaj–Gù%½ö‘Ê# r®‘ˆ½¢&©Û‹Ù‰³1X²TÈé¨Ð¤µv{.å^¢îjCÔaƒË±‹æ÷0!ÉÕ»º{(ßr°(Ÿ«¤}ZWM
ÿ}
^£?¤(Ú•%¸-›Ø•O7ÁwÓ	¶|÷ûWqòÂ-…ké*Ã]svÙ
1Æá N/ƒßŸ‚\r§Gb§ò1H#ÒwÏÍ•[-q‡Î]&×oD÷ÌÍS¥Ý9gÝæn^‹ÈÇ©¼Ž@ËŸ6E*µ;ç@‚ùìôÒæ»¿/!PC–ÙýR4ò¬wæt.·Ü—»½
ðéW[4ƒþÇ›f\žÝ“öœ¤¤ü3‚(†4ÞlIÖá#â4ª¡<ÐÑy¸p‡“'³]Ÿy„Gú=ªlp—Ší8×ù£`>ú·¸C-C²Ã1îŸàl7P»¡	Ã{ÜQ¢³W†x7”%)Á{paOÐÊamGÂðºK5–³Ž„ÂÞºÆ^×C²Vy*œÇÑ±åbb	þj/Þ£‘<¤<Ý#w²À	´UeIÃm4èŸ1¼ò†,—LßØm1ØüWñÒl^9‚IÒÓ“G=)ZNÍ÷'`è{°úì!á/ÑÊM.)š ©i7jÁËê™<ï£´x¤>Òö“7{”w–—P6›Â»Ï£ÀCºªÞUû‰9*YšBŠ¹Yá{ãÜHI´wLiŠeØ £3Tß­øµëÝÍ¨ûQw~×)o§6@ÆèirLøð­Ä‚Ø ÔZ¼×V\|ÚþÕˆŸ¸heP*‡0á ýËìú+b··è±ÅBŽlŠ"Ý¹ÁÖù«
Jåp 9.tÑ•"§ê³Ò·­§ª=ø³oˆ3ÏF–´‹/÷SÈ›è±Ä¦‰Rñzs£hÔŠK‹sùn»ÈˆL/Þì¯¡¡ñÙ…½Eyõ4Rû=sï{çwœj&~2žŸ‹›^bÈáþÄ€òB¯½éÛH ÷×ûp*¾ý†¥VÀŒF(ÄÅŸ¯~¤M=1¡Ö}[†Á…"ZGÓÚÜ)Ÿ$Î{ÉW7}úõšÏ·uS•bj®‚za£ìægìp[¶^ÍËè~æÒ~nwg¥×7Ù&z¡!=ž+P‘\‹M|7.4íŒÁÑ¤2â±ìåKÁ;oß”-ü#¸×JB_fÙ]·
z°Ò+uC˜n-èí.’uó­,žîGµëÒ³(Ò°ªé–¶ºpnÎUÇTÙŒšd‚Ì"ù³Xÿ¼µÑ’\Þ%Ð=ó^íP?éïhŸ û[®þwÉÈkCäÊb9“J—ÝoÞ#îÚ¡[ùy6øPÈM‰™=ì:ð,µÞ£Vß%úeDû{fBäÀ«Z9‹ãü<¹Å¹Ž¿ÝñÍxZÿùx…;n•¿MÎižnOê9_²ü¹®Ï5º÷eèðDO.$S´¬¥ºìg®ÐÊ]cí®GÿÂ²òFÉã6âüvºWå,W•‘£—TÇI×h©éúÏh@}˜WÒ@U03¾)¸†XTŠdÒ¿q^ ‰+â3EæŽ_T×—NÑá 9yàà,¥›´"ŠþkÛT+A¯Ø„Ô¡³$æàd˜jÖQÊ|JHÕ!ÕI¿å!¨1ÿÔ#÷Rš5°*7	:~ÍÑÇ74¡û¯•¥;·u&;ž„1ž<p'@/«îª¯Üñ¬ßLAŠ,JxnùîÏð]óqÆõùÞu&`§Þ†%&<Åeràxÿå{z€õ•06“ôkÇ=%Š8 ±Píëa–Gµfû1‰ËZEÕj 4¾X¬½îT™Ï4›R7zÅLÎLHf³AðÀðuZçïÆÙ1üBŽ°H£0–U¹IG¸j¤ (8›o6~?‚Š`=ª,ò}–Ï“@ý>†ÿlÓZ•¬JÇÛC³“N:þ0½I‰#ï&Ó\©»Ð ¯†ÞîX›ê]BŠSÖä/ *æyöí´/d¤6³ÄÕ‘?ÅôkqîØçîa­‡tƒ“ûèÚé@¯Â
>)&„6}ô'Ò?ã›ð>L¥Z<Påß áG<ˆ‹»Ü
_‹‚áãD5\›OŸ	‹5¥ª§M ¿k¡ßJÿ¾Ÿš^’‚Ã’]^ð']ûÄVES§ÞÀcüù·wœ#”–Õhx&n/ÓÕ|•…
d{´÷Âú6á ¯Ýò-4õ¤wJHÜ±`Ï)Ší
»ûPlPmZ´×§wmœc÷IóT…šNÌô}äûèfÝ	Ù\a[34oäK-qÑÎ÷ˆã`\;7b¤PãïÀÏ1ƒ|g2îøŠ¬?¼o¦(›&h5|Ì°²Oøú&£™|òèÇÃõïž­¾²Ëögx-ÝŽäà²`è¯x{£v¤?Õ!ýùŸ’w¨F‹7ÐGw
‹3S[.%©‹ñ>Ò¯m<5vgd\z&Ý5ë0#´p¶[e`×‹ŸÄÿ‹h—ÅœžÈ–a9GªçÂÏÂ©¥ÐuKô¶œ–Oû˜Ð6YdMÑ…Ñ—=_”œå[û¤1ïc)¯·ã)Ueo-søôÌ(å‚/V=u œa|‚m@{âÌCÇ‹“ß7$ÁQ¥c	š˜<ˆ$‚º‘Å<ìÍ
™:“¯¥š3Sˆb4ž×¬–3W/ørXÍ?2dÒŽ@Ïø€v#5J_ãÚ¸Ù)™%ëç‹‚mG9ã¸ËM²í6š§‡Â¬"Ã|Ø/ào–rÏRíÛ²gè•cò8š½ ±RÒ/Ø¯=u˜…cžkjô‘xlÎ	óÏAto^+Ä"Ño&FÑ¿Ú¿2öÒWÑn	c3mÏ{GÝÖ;³ø{Ü
þT+¢µF1ü#¿ê7Š¿ºÉ1ºíËÙaÌufœÎ—“ ¿Žtu1ì7¤=G±ÒerlayTransformAbsolute)(VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, struct HmdMatrix34_t * pmatTrackingOriginToOverlayTransform);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayTransformTrackedDeviceRelative)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, struct HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayTransformTrackedDeviceRelative)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, struct HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayTransformTrackedDeviceComponent)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, char * pchComponentName);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayTransformTrackedDeviceComponent)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayTransformOverlayRelative)(VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t * ulOverlayHandleParent, struct HmdMatrix34_t * pmatParentOverlayToOverlayTransform);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayTransformOverlayRelative)(VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, struct HmdMatrix34_t * pmatParentOverlayToOverlayTransform);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *ShowOverlay)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *HideOverlay)(VROverlayHandle_t ulOverlayHandle);
	bool (OPENVR_FNTABLE_CALLTYPE *IsOverlayVisible)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetTransformForOverlayCoordinates)(VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, struct HmdVector2_t coordinatesInOverlay, struct HmdMatrix34_t * pmatTransform);
	bool (OPENVR_FNTABLE_CALLTYPE *PollNextOverlayEvent)(VROverlayHandle_t ulOverlayHandle, struct VREvent_t * pEvent, uint32_t uncbVREvent);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayInputMethod)(VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayInputMethod)(VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayMouseScale)(VROverlayHandle_t ulOverlayHandle, struct HmdVector2_t * pvecMouseScale);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayMouseScale)(VROverlayHandle_t ulOverlayHandle, struct HmdVector2_t * pvecMouseScale);
	bool (OPENVR_FNTABLE_CALLTYPE *ComputeOverlayIntersection)(VROverlayHandle_t ulOverlayHandle, struct VROverlayIntersectionParams_t * pParams, struct VROverlayIntersectionResults_t * pResults);
	bool (OPENVR_FNTABLE_CALLTYPE *HandleControllerOverlayInteractionAsMouse)(VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex);
	bool (OPENVR_FNTABLE_CALLTYPE *IsHoverTargetOverlay)(VROverlayHandle_t ulOverlayHandle);
	VROverlayHandle_t (OPENVR_FNTABLE_CALLTYPE *GetGamepadFocusOverlay)();
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetGamepadFocusOverlay)(VROverlayHandle_t ulNewFocusOverlay);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayNeighbor)(EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *MoveGamepadFocusToNeighbor)(EOverlayDirection eDirection, VROverlayHandle_t ulFrom);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayTexture)(VROverlayHandle_t ulOverlayHandle, struct Texture_t * pTexture);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *ClearOverlayTexture)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayRaw)(VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayFromFile)(VROverlayHandle_t ulOverlayHandle, char * pchFilePath);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayTexture)(VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, struct VRTextureBounds_t * pTextureBounds);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *ReleaseNativeOverlayHandle)(VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayTextureSize)(VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *CreateDashboardOverlay)(char * pchOverlayKey, char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle);
	bool (OPENVR_FNTABLE_CALLTYPE *IsDashboardVisible)();
	bool (OPENVR_FNTABLE_CALLTYPE *IsActiveDashboardOverlay)(VROverlayHandle_t ulOverlayHandle);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetDashboardOverlaySceneProcess)(VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetDashboardOverlaySceneProcess)(VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId);
	void (OPENVR_FNTABLE_CALLTYPE *ShowDashboard)(char * pchOverlayToShow);
	TrackedDeviceIndex_t (OPENVR_FNTABLE_CALLTYPE *GetPrimaryDashboardDevice)();
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *ShowKeyboard)(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, char * pchDescription, uint32_t unCharMax, char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *ShowKeyboardForOverlay)(VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, char * pchDescription, uint32_t unCharMax, char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetKeyboardText)(char * pchText, uint32_t cchText);
	void (OPENVR_FNTABLE_CALLTYPE *HideKeyboard)();
	void (OPENVR_FNTABLE_CALLTYPE *SetKeyboardTransformAbsolute)(ETrackingUniverseOrigin eTrackingOrigin, struct HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform);
	void (OPENVR_FNTABLE_CALLTYPE *SetKeyboardPositionForOverlay)(VROverlayHandle_t ulOverlayHandle, struct HmdRect2_t avoidRect);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *SetOverlayIntersectionMask)(VROverlayHandle_t ulOverlayHandle, struct VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize);
	EVROverlayError (OPENVR_FNTABLE_CALLTYPE *GetOverlayFlags)(VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags);
	VRMessageOverlayResponse (OPENVR_FNTABLE_CALLTYPE *ShowMessageOverlay)(char * pchText, char * pchCaption, char * pchButton0Text, char * pchButton1Text, char * pchButton2Text, char * pchButton3Text);
	void (OPENVR_FNTABLE_CALLTYPE *CloseMessageOverlay)();
};

struct VR_IVRRenderModels_FnTable
{
	EVRRenderModelError (OPENVR_FNTABLE_CALLTYPE *LoadRenderModel_Async)(char * pchRenderModelName, struct RenderModel_t ** ppRenderModel);
	void (OPENVR_FNTABLE_CALLTYPE *FreeRenderModel)(struct RenderModel_t * pRenderModel);
	EVRRenderModelError (OPENVR_FNTABLE_CALLTYPE *LoadTexture_Async)(TextureID_t textureId, struct RenderModel_TextureMap_t ** ppTexture);
	void (OPENVR_FNTABLE_CALLTYPE *FreeTexture)(struct RenderModel_TextureMap_t * pTexture);
	EVRRenderModelError (OPENVR_FNTABLE_CALLTYPE *LoadTextureD3D11_Async)(TextureID_t textureId, void * pD3D11Device, void ** ppD3D11Texture2D);
	EVRRenderModelError (OPENVR_FNTABLE_CALLTYPE *LoadIntoTextureD3D11_Async)(TextureID_t textureId, void * pDstTexture);
	void (OPENVR_FNTABLE_CALLTYPE *FreeTextureD3D11)(void * pD3D11Texture2D);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetRenderModelName)(uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetRenderModelCount)();
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetComponentCount)(char * pchRenderModelName);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetComponentName)(char * pchRenderModelName, uint32_t unComponentIndex, char * pchComponentName, uint32_t unComponentNameLen);
	uint64_t (OPENVR_FNTABLE_CALLTYPE *GetComponentButtonMask)(char * pchRenderModelName, char * pchComponentName);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetComponentRenderModelName)(char * pchRenderModelName, char * pchComponentName, char * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen);
	bool (OPENVR_FNTABLE_CALLTYPE *GetComponentState)(char * pchRenderModelName, char * pchComponentName, VRControllerState_t * pControllerState, struct RenderModel_ControllerMode_State_t * pState, struct RenderModel_ComponentState_t * pComponentState);
	bool (OPENVR_FNTABLE_CALLTYPE *RenderModelHasComponent)(char * pchRenderModelName, char * pchComponentName);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetRenderModelThumbnailURL)(char * pchRenderModelName, char * pchThumbnailURL, uint32_t unThumbnailURLLen, EVRRenderModelError * peError);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetRenderModelOriginalPath)(char * pchRenderModelName, char * pchOriginalPath, uint32_t unOriginalPathLen, EVRRenderModelError * peError);
	char * (OPENVR_FNTABLE_CALLTYPE *GetRenderModelErrorNameFromEnum)(EVRRenderModelError error);
};

struct VR_IVRNotifications_FnTable
{
	EVRNotificationError (OPENVR_FNTABLE_CALLTYPE *CreateNotification)(VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, EVRNotificationType type, char * pchText, EVRNotificationStyle style, struct NotificationBitmap_t * pImage, VRNotificationId * pNotificationId);
	EVRNotificationError (OPENVR_FNTABLE_CALLTYPE *RemoveNotification)(VRNotificationId notificationId);
};

struct VR_IVRSettings_FnTable
{
	char * (OPENVR_FNTABLE_CALLTYPE *GetSettingsErrorNameFromEnum)(EVRSettingsError eError);
	bool (OPENVR_FNTABLE_CALLTYPE *Sync)(bool bForce, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *SetBool)(char * pchSection, char * pchSettingsKey, bool bValue, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *SetInt32)(char * pchSection, char * pchSettingsKey, int32_t nValue, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *SetFloat)(char * pchSection, char * pchSettingsKey, float flValue, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *SetString)(char * pchSection, char * pchSettingsKey, char * pchValue, EVRSettingsError * peError);
	bool (OPENVR_FNTABLE_CALLTYPE *GetBool)(char * pchSection, char * pchSettingsKey, EVRSettingsError * peError);
	int32_t (OPENVR_FNTABLE_CALLTYPE *GetInt32)(char * pchSection, char * pchSettingsKey, EVRSettingsError * peError);
	float (OPENVR_FNTABLE_CALLTYPE *GetFloat)(char * pchSection, char * pchSettingsKey, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *GetString)(char * pchSection, char * pchSettingsKey, char * pchValue, uint32_t unValueLen, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *RemoveSection)(char * pchSection, EVRSettingsError * peError);
	void (OPENVR_FNTABLE_CALLTYPE *RemoveKeyInSection)(char * pchSection, char * pchSettingsKey, EVRSettingsError * peError);
};

struct VR_IVRScreenshots_FnTable
{
	EVRScreenshotError (OPENVR_FNTABLE_CALLTYPE *RequestScreenshot)(ScreenshotHandle_t * pOutScreenshotHandle, EVRScreenshotType type, char * pchPreviewFilename, char * pchVRFilename);
	EVRScreenshotError (OPENVR_FNTABLE_CALLTYPE *HookScreenshot)(EVRScreenshotType * pSupportedTypes, int numTypes);
	EVRScreenshotType (OPENVR_FNTABLE_CALLTYPE *GetScreenshotPropertyType)(ScreenshotHandle_t screenshotHandle, EVRScreenshotError * pError);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetScreenshotPropertyFilename)(ScreenshotHandle_t screenshotHandle, EVRScreenshotPropertyFilenames filenameType, char * pchFilename, uint32_t cchFilename, EVRScreenshotError * pError);
	EVRScreenshotError (OPENVR_FNTABLE_CALLTYPE *UpdateScreenshotProgress)(ScreenshotHandle_t screenshotHandle, float flProgress);
	EVRScreenshotError (OPENVR_FNTABLE_CALLTYPE *TakeStereoScreenshot)(ScreenshotHandle_t * pOutScreenshotHandle, char * pchPreviewFilename, char * pchVRFilename);
	EVRScreenshotError (OPENVR_FNTABLE_CALLTYPE *SubmitScreenshot)(ScreenshotHandle_t screenshotHandle, EVRScreenshotType type, char * pchSourcePreviewFilename, char * pchSourceVRFilename);
};

struct VR_IVRResources_FnTable
{
	uint32_t (OPENVR_FNTABLE_CALLTYPE *LoadSharedResource)(char * pchResourceName, char * pchBuffer, uint32_t unBufferLen);
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetResourceFullPath)(char * pchResourceName, char * pchResourceTypeDirectory, char * pchPathBuffer, uint32_t unBufferLen);
};

struct VR_IVRDriverManager_FnTable
{
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetDriverCount)();
	uint32_t (OPENVR_FNTABLE_CALLTYPE *GetDriverName)(DriverId_t nDriver, char * pchValue, uint32_t unBufferSize);
};


#if 0
// Global entry points
S_API intptr_t VR_InitInternal( EVRInitError *peError, EVRApplicationType eType );
S_API void VR_ShutdownInternal();
S_API bool VR_IsHmdPresent();
S_API intptr_t VR_GetGenericInterface( const char *pchInterfaceVersion, EVRInitError *peError );
S_API bool VR_IsRuntimeInstalled();
S_API const char * VR_GetVRInitErrorAsSymbol( EVRInitError error );
S_API const char * VR_GetVRInitErrorAsEnglishDescription( EVRInitError error );
#endif

#endif // __OPENVR_API_FLAT_H__


