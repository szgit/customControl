//
//  BQTools.h
//  Test
//
//  Created by baiqiang on 16/7/1.
//  Copyright © 2016年 白强. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BQTools : NSObject
/**  消息展示 */
+ (void)showMessageWithTitle:(NSString * _Nullable)title
                     content:(NSString * _Nullable)content;

/**  消息展示后消失 */
+ (void)showMessageWithTitle:(NSString * _Nullable)title
                     content:(NSString * _Nullable)content
                 disMissTime:(NSTimeInterval)time;
/**  消息展示带按钮事件 */
+ (void)showMessageWithTitle:(NSString * _Nullable)title
                     content:(NSString * _Nullable)content
                buttonTitles:(NSArray <NSString *> * _Nullable)titles
               clickedHandle:(void(^ _Nullable)(NSInteger index))clickedBtn;
/**  消息展示带按钮事件 */
+ (void)showMessageWithTitle:(NSString * _Nullable)title
                     content:(NSString * _Nullable)content
                buttonTitles:(NSArray <NSString *> * _Nullable)titles
               clickedHandle:(void(^ _Nullable)(NSInteger index))clickedBtn
            compeletedHandle:(void(^ _Nullable)())handle;

/**  归档处理操作 */
+ (void)encodeWithObject:(NSObject * _Nullable)encodeObject withcoder:(NSCoder * _Nullable)aCoder;

/**  解档处理操 */
+ (void)unencodeWithObject:(NSObject * _Nullable)unarchObject withcoder:(NSCoder * _Nullable)aDecoder;

/**  将对象转化为字符串 */
+ (NSString * _Nullable)jsonStringWithObject:(id _Nullable)object;

/**  将字典值转化为String类型 */
+ (NSMutableDictionary * _Nullable)valuesForamtToStringWithDict:(NSDictionary * _Nullable)dict;

/**  将数组值转化为String类型 */
+ (NSMutableArray * _Nullable)valuesForamtToStringWithArray:(NSArray * _Nullable)array;

/**  获取当前控制器 */
+ (UIViewController * _Nullable)currentViewController;

/**  获取当前APP版本号 */
+ (NSString * _Nullable)currentSystemVersion;

/**  随机色 */
+ (UIColor * _Nullable)randomColor;

@end

//----------------------- 输出调试 ---------------
#ifdef DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr,"文件名:%s 行数:%d 输出:%s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String])
#else
#define NSLog(...)
#endif
