table ConfigSlider = {
	{ indexed string id, string caption, int x, int y, string setFunc, string getFunc, int captionWidth },
	{ "00", "メッセージ表示速度", 48, 120, "AFL_Config_SetMessageSpeedRate", "AFL_Config_GetMessageSpeedRate", 200 },
	{ "01", "オートモード待ち時間", 48, 176, "AFL_Config_SetAutoModeWaitTimeRate", "AFL_Config_GetAutoModeWaitTimeRate", 200 },
	{ "02", "スキップモード速度", 48, 232, "AFL_Config_SetReadMessageSkipWaitTimeRate", "AFL_Config_GetReadMessageSkipWaitTimeRate", 200 },
	{ "04", "メッセージウィンドウの明るさ", 2000, 240, "AFL_Config_SetMessageWindowMulColorRate", "AFL_Config_GetMessageWindowMulColorRate", 300 },
	{ "05", "メッセージウィンドウの透過率", 2000, 296, "AFL_Config_SetMessageWindowAlphaRate", "AFL_Config_GetMessageWindowAlphaRate", 300 },
	{ "06", "マスター", 2976, 120, "Config_SetVolumeMaster", "Config_GetVolumeMaster", 150 },
	{ "07", "ＢＧＭ", 2976, 176, "Config_SetVolumeBgm", "Config_GetVolumeBgm", 150 },
	{ "08", "効果音", 2976, 232, "Config_SetVolumeSound", "Config_GetVolumeSound", 150 },
	{ "10", "ゲーム速度", 5904, 240, "Config_SetGameSpeed", "Config_GetGameSpeed", 150 }
};