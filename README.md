# PhilipsGoEasyLibrary

[![CI Status](https://img.shields.io/travis/519955268@qq.com/PhilipsGoEasyLibrary.svg?style=flat)](https://travis-ci.org/519955268@qq.com/PhilipsGoEasyLibrary)
[![Version](https://img.shields.io/cocoapods/v/PhilipsGoEasyLibrary.svg?style=flat)](https://cocoapods.org/pods/PhilipsGoEasyLibrary)
[![License](https://img.shields.io/cocoapods/l/PhilipsGoEasyLibrary.svg?style=flat)](https://cocoapods.org/pods/PhilipsGoEasyLibrary)
[![Platform](https://img.shields.io/cocoapods/p/PhilipsGoEasyLibrary.svg?style=flat)](https://cocoapods.org/pods/PhilipsGoEasyLibrary)

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

SDK编译要求
  因为sdk是swift和obj-c混编，
  1. Xcode要支持swift5.0。
  2. iOS Deployment Target (即最低支持iOS 10)。
  3. 支持cocoapod导入。
  
SDK编译配置
1. 如果您项目是纯objc，请先任意创建一个swift文件，系统自动生成的桥接文件（根据您项目是否保留），SDK目前对外开放的是objc的类。（第一步一定要做，不然cocoapod导入sdk依赖库会不成功！！！）。
2. podFile文件加入：
         pod 'PhilipsGoEasyLibrary'
    执行 pod install
3. Xcode配置：
      i. 在xcode配置项 Signing & Capabilities 加入 “Access WiFi Infomartion”和“Hostpot Configuration”这两个能力级（需要在开发者证书里勾选相应能力）
      ii. 在xcode配置项 Info 配置“NSAppTransportSecurity”网络访问，以及地理位置“NSLocationAlwaysAndWhenInUseUsageDescription”
          “NSLocationAlwaysUsageDescription”,“NSLocationWhenInUseUsageDescription”
          
业务交互
1. SDK初始化与登录

• 库组件初始化
+ (void)asyncInit:(NSString *)appKey
        appSecret:(NSString *)appSecret
         callback:(CallbackHandler)callback;
         
• 用户登录
+ (void)signIn:(NSString *)allyToken
      allyName:(NSString *)allyName
      callback:(CallbackHandler)callback;
      
      
2. 小AP设备配网


• 小AP设备连接管理(自动连接)
- (void)connect:(NSString *)ssid
       callback:(CallbackHandler)callback；
       
• 手动连接小AP设备Wi-Fi后，校验是否已连接
- (void)connectManual:(NSString *)ssid
             callback:(CallbackHandler)callback；
             
• 校验管理员密码
- (void)requestCheckMastercode:(NSString *)mastercode
                      callback:(CallbackHandler)callback；
                      
• 修改管理员密码
- (void)requestChangeMastercode:(NSString *)mastercode
                       callback:(CallbackHandler)callback；
                       
• 获取无线热点扫描数据
- (void)requestWifiList:(CallbackHandler)callback；

• 配置无线热点网络参数
- (void)requestWifiConfig:(Hotspot *)hotspot
                 password:(NSString *)password
                 callback:(CallbackHandler)callback；
                 
 3. 设备接入
                 
 • 获取设备接入地址
 - (void)getSdcUrl:(CallbackHandler)callback;
 
 •  解绑设备
 - (void)unbindDevice:(NSString *)deviceId
          deviceType:(NSString *)deviceType
            callback:(CallbackHandler)callback;

## Installation

PhilipsGoEasyLibrary is available through [CocoaPods](https://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'PhilipsGoEasyLibrary'
```

## Author



## License

PhilipsGoEasyLibrary is available under the MIT license. See the LICENSE file for more info.
