// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import AVFoundation;
@import CoreGraphics;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIImage;
@class NSCoder;

SWIFT_CLASS("_TtC22ALCameraViewController10CameraView")
@interface CameraView : UIView
@property (nonatomic) AVCaptureDevicePosition currentPosition;
- (void)startSession;
- (void)stopSession;
- (void)layoutSubviews;
- (void)configureFocus;
- (void)capturePhotoWithCompletion:(void (^ _Nonnull)(UIImage * _Nullable))completion;
- (BOOL)focusCameraToPoint:(CGPoint)toPoint;
- (void)cycleFlash;
- (void)swapCameraInput;
- (void)rotatePreview;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class PHAsset;
@protocol UIViewControllerTransitionCoordinator;
@class NSBundle;

SWIFT_CLASS("_TtC22ALCameraViewController20CameraViewController")
@interface CameraViewController : UIViewController
- (nonnull instancetype)initWithCroppingEnabled:(BOOL)croppingEnabled allowsLibraryAccess:(BOOL)allowsLibraryAccess completion:(void (^ _Nonnull)(UIImage * _Nullable, PHAsset * _Nullable))completion OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) UIStatusBarAnimation preferredStatusBarUpdateAnimation;
/**
  Configure the background of the superview to black
  and add the views on this superview. Then, request
  the update of constraints for this superview.
*/
- (void)loadView;
/**
  Setup the constraints when the app is starting or rotating
  the screen.
  To avoid the override/conflict of stable constraint, these
  stable constraint are one time configurable.
  Any other dynamic constraint are configurable when the
  device is rotating, based on the device orientation.
*/
- (void)updateViewConstraints;
/**
  Add observer to check when the camera has started,
  enable the volume buttons to take the picture,
  configure the actions of the buttons on the screen,
  check the permissions of access of the camera and
  the photo library.
  Configure the camera focus when the application
  start, to avoid any bluried image.
*/
- (void)viewDidLoad;
/**
  Start the session of the camera.
*/
- (void)viewWillAppear:(BOOL)animated;
/**
  Enable the button to take the picture when the
  camera is ready.
*/
- (void)viewDidAppear:(BOOL)animated;
/**
  This method will disable the rotation of the
*/
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

@class UINavigationController;

@interface CameraViewController (SWIFT_EXTENSION(ALCameraViewController))
+ (UINavigationController * _Nonnull)imagePickerViewControllerWithCroppingEnabled:(BOOL)croppingEnabled completion:(void (^ _Nonnull)(UIImage * _Nullable, PHAsset * _Nullable))completion;
@end


@interface CameraViewController (SWIFT_EXTENSION(ALCameraViewController))
@end

@class UIScrollView;

SWIFT_CLASS("_TtC22ALCameraViewController21ConfirmViewController")
@interface ConfirmViewController : UIViewController <UIScrollViewDelegate>
@property (nonatomic, copy) void (^ _Nullable onComplete)(UIImage * _Nullable, PHAsset * _Nullable);
- (nonnull instancetype)initWithAsset:(PHAsset * _Nonnull)asset allowsCropping:(BOOL)allowsCropping OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) UIStatusBarAnimation preferredStatusBarUpdateAnimation;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (UIView * _Nullable)viewForZoomingInScrollView:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidZoom:(UIScrollView * _Nonnull)scrollView;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC22ALCameraViewController26PhotoLibraryViewController")
@interface PhotoLibraryViewController : UIViewController
@property (nonatomic, copy) void (^ _Nullable onSelectionComplete)(PHAsset * _Nullable);
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (void)present:(UIViewController * _Nonnull)inViewController animated:(BOOL)animated;
- (void)dismissLibrary;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionView;

@interface PhotoLibraryViewController (SWIFT_EXTENSION(ALCameraViewController)) <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIScrollViewDelegate>
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class UICollectionViewCell;

@interface PhotoLibraryViewController (SWIFT_EXTENSION(ALCameraViewController)) <UICollectionViewDataSource>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplayCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


@interface UIButton (SWIFT_EXTENSION(ALCameraViewController))
@end


@interface UIView (SWIFT_EXTENSION(ALCameraViewController))
@end

#pragma clang diagnostic pop
