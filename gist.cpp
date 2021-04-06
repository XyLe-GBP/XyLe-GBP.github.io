void CAboutDlg::OnStnClickedStaticIcon()
{
	random_device rnd;
	UINT RND = rnd();
	if (RND < 0x7FFFFFFF) {
		if (RND <= 0x3B9AC9FF) {
			PlaySound(MAKEINTRESOURCE(110), LIB_CORE->hinst, SND_RESOURCE | SND_ASYNC);
			MessageBox(_T("ドームですよっ！ドームっ！"), _T(""), MB_ICONMASK | MB_OK);
			return;
		}
		else {
			PlaySound(MAKEINTRESOURCE(113), LIB_CORE->hinst, SND_RESOURCE | SND_ASYNC);
			MessageBox(_T("プロデューサーさんっ！悪用厳禁ですよっ、悪用厳禁っ！"), _T(""), MB_ICONMASK | MB_OK);
			return;
		}
	}
	if (RND > 0x80000000) {
		if (RND > 0xA0000000) {
			PlaySound(MAKEINTRESOURCE(109), LIB_CORE->hinst, SND_RESOURCE | SND_ASYNC);
			MessageBox(_T("えっ？だっ、誰？"), _T(""), MB_ICONMASK | MB_OK);
			return;
		}
		else {
			PlaySound(MAKEINTRESOURCE(113), LIB_CORE->hinst, SND_RESOURCE | SND_ASYNC);
			MessageBox(_T("プロデューサーさんっ！ツールですよっ、ツールっ！"), _T(""), MB_ICONMASK | MB_OK);
			return;
		}
	}
}
