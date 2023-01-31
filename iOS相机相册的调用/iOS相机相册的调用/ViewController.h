//
//  ViewController.h
//  iOS相机相册的调用
//
//  Created by 李育腾 on 2022/11/18.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h> //相机

#import <AssetsLibrary/AssetsLibrary.h> // 相册
#import <Photos/Photos.h>
@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (strong, nonatomic) UIImageView* imageViewAvatar;
@property (nonatomic, strong) UIImagePickerController* imagePickerController;
@property (nonatomic, strong) UIImage* imageMyself;
@end

