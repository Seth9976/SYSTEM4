table ConfigButton = {
	{ indexed string id, string caption, int x, int y, string imageName, string clickFunc },
	{ "メッセージ表示速度初期化", "", 700, 120, "システム／コンフィグ／初期化", "AFL_Config_ResetMessageSpeedRate" },
	{ "オートモード待ち時間初期化", "", 700, 176, "システム／コンフィグ／初期化", "AFL_Config_ResetAutoModeWaitTimeRate" },
	{ "既読スキップ待ち時間初期化", "", 700, 232, "システム／コンフィグ／初期化", "AFL_Config_ResetReadMessageSkipWaitTimeRate" },
	{ "ウィンドウ明るさ初期化", "", 2750, 240, "システム／コンフィグ／初期化", "Config_ResetMulColorRate" },
	{ "ウィンドウ透過率初期化", "", 2750, 296, "システム／コンフィグ／初期化", "Config_ResetAlphaColorRate" },
	{ "サウンドマスター初期化", "", 3576, 120, "システム／コンフィグ／初期化", "Config_ResetVolumeMaster" },
	{ "サウンド音楽初期化", "", 3576, 176, "システム／コンフィグ／初期化", "Config_ResetVolumeMusic" },
	{ "サウンド効果音初期化", "", 3576, 232, "システム／コンフィグ／初期化", "Config_ResetVolumeSoundEffect" },
	{ "ウィンドウ位置とサイズ初期化", "ウィンドウの位置とサイズを初期化", 5428, 608, "システム／ボタン／幅４００", "AFL_Config_InitMainWindowPosAndSize" }
};