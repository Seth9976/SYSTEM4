table ConfigColorSelector = {
	{ indexed string id, string caption, int x, int y, string setFunc, string getFunc, string colorFunc },
	{ "既読メッセージ色", "既読メッセージ色", 1024, 488, "AFL_Config_SetReadTextColorIndex", "AFL_Config_GetReadTextColorIndex", "AFL_Config_GetReadTextColor" },
	{ "バックシーンメッセージ色", "バックシーンメッセージ色", 1024, 584, "AFL_Config_SetBackSceneTextColorIndex", "AFL_Config_GetBackSceneTextColorIndex", "AFL_Config_GetBackSceneTextColor" }
};