table コンフィグスライダー情報 = {
	{ indexed string id, int page, string baseImageName, string buttonImageName, string caption, int x, int y, string setter, string getter, int captionWidth },
	{ "00", 0, "テスト／スライダーベース", "テスト／スライダーボタン", "メッセージ表示速度", 48, 120, "AFL_Config_SetMessageSpeedRate", "AFL_Config_GetMessageSpeedRate", 200 },
	{ "01", 0, "テスト／スライダーベース", "テスト／スライダーボタン", "オートモード待ち時間", 48, 176, "AFL_Config_SetAutoModeWaitTimeRate", "AFL_Config_GetAutoModeWaitTimeRate", 200 },
	{ "02", 0, "テスト／スライダーベース", "テスト／スライダーボタン", "スキップモード速度", 48, 232, "AFL_Config_SetReadMessageSkipWaitTimeRate", "AFL_Config_GetReadMessageSkipWaitTimeRate", 200 },
	{ "04", 2, "テスト／スライダーベース", "テスト／スライダーボタン", "メッセージウィンドウの明るさ", 48, 240, "AFL_Config_SetMessageWindowMulColorRate", "AFL_Config_GetMessageWindowMulColorRate", 300 },
	{ "05", 2, "テスト／スライダーベース", "テスト／スライダーボタン", "メッセージウィンドウの透過率", 48, 296, "AFL_Config_SetMessageWindowAlphaRate", "AFL_Config_GetMessageWindowAlphaRate", 300 },
	{ "06", 3, "テスト／スライダーベース", "テスト／スライダーボタン", "マスター", 48, 120, "Config_SetVolumeMaster", "Config_GetVolumeMaster", 150 },
	{ "07", 3, "テスト／スライダーベース", "テスト／スライダーボタン", "ＢＧＭ", 48, 176, "Config_SetVolumeBgm", "Config_GetVolumeBgm", 150 },
	{ "08", 3, "テスト／スライダーベース", "テスト／スライダーボタン", "効果音", 48, 232, "Config_SetVolumeSound", "Config_GetVolumeSound", 150 },
	{ "10", 6, "テスト／スライダーベース", "テスト／スライダーボタン", "ゲーム速度", 48, 240, "Config_SetGameSpeed", "Config_GetGameSpeed", 150 }
};