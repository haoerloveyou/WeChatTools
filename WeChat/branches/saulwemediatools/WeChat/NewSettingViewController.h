//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NewSettingViewController : UIViewController




- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkHaveNotSetPassword;
- (void)checkHaveSetPassword;
- (void)dealloc;
- (void)finalQuit;
- (id)getVCWithDeepLinkName:(id)arg1;
- (id)init;
- (void)initDeepLinkConfig;
- (void)makeMyAccountCell:(id)arg1 cellInfo:(id)arg2;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)quitInternal;
- (void)reloadTableData;
- (void)showAboutMMView;
- (void)showAccountView;
- (void)showAuthAppListView;
- (void)showEmotionShopView;
- (void)showFeedbackView;
- (void)showGeneralView;
- (void)showIpadClassicChooseView;
- (void)showNotificationView;
- (void)showPrivateConfigView;
- (void)showQuitActionSheet:(id)arg1;
- (void)showSystemNotice;
- (void)tryQuit;
- (void)unknownFail;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAppear;
@end
