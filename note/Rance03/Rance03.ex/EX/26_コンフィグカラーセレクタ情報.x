table コンフィグカラーセレクタ情報 = {
	{ indexed string id, string caption, int x, int y, string setter, string getter, string colorGetter },
	{ "既読メッセージ色", "既読メッセージ色", 48, 488, "AFL_Config_SetReadTextColorIndex", "AFL_Config_GetReadTextColorIndex", "AFL_Config_GetReadTextColor" },
	{ "バックシーンメッセージ色", "バックシーンメッセージ色", 48, 584, "AFL_Config_SetBackSceneTextColorIndex", "AFL_Config_GetBackSceneTextColorIndex", "AFL_Config_GetBackSceneTextColor" }
};