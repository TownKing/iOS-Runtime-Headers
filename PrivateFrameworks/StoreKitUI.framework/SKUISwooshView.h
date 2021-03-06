/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISwooshView : UIView {
    UIView * _borderView;
    UICollectionView * _collectionView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _collectionViewInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInsets;
    UIButton * _seeAllButton;
    BOOL  _showsChevronForTitle;
    SKUILinkButton * _titleButton;
    UIColor * _titleColor;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIControl *chevronTitleControl;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } collectionViewInsets;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property (nonatomic, readonly) UIControl *seeAllControl;
@property (nonatomic, copy) NSString *seeAllTitle;
@property (nonatomic) BOOL showsChevronForTitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) UIColor *titleColor;

- (void).cxx_destruct;
- (id)_seeAllArrowImage;
- (id)chevronTitleControl;
- (id)collectionView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionViewInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)seeAllColorForControlState:(unsigned int)arg1;
- (id)seeAllControl;
- (id)seeAllTitle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSeeAllColor:(id)arg1 forControlState:(unsigned int)arg2;
- (void)setSeeAllTitle:(id)arg1;
- (void)setShowsChevronForTitle:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (BOOL)showsChevronForTitle;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)title;
- (id)titleColor;

@end
