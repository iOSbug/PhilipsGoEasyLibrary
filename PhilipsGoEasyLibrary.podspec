#
# Be sure to run `pod lib lint PhilipsGoEasyLibrary.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'PhilipsGoEasyLibrary'
  s.version          = '2.1.1'
  s.summary          = 'A short description of PhilipsGoEasyLibrary.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/iOSbug/PhilipsGoEasyLibrary'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '519955268@qq.com' => '519955268@qq.com' }
  s.source           = { :git => 'https://github.com/iOSbug/PhilipsGoEasyLibrary.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  s.swift_version = '5.0'

  #  s.source_files = "PhilipsGoEasyLibrary", "PhilipsGoEasyLibrary/**/*.{h,swift}"
  #  s.vendored_frameworks = "PhilipsGoEasyLibrary", "PhilipsGoEasyLibrary/**/*.{framework}"
  
  s.vendored_frameworks = "**/PhilipsGoEasyLibrary.framework"
  

  # s.resource_bundles = {
  #   'PhilipsGoEasyLibrary' => ['PhilipsGoEasyLibrary/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.frameworks   = 'NetworkExtension','Foundation','CoreLocation'
  
    s.dependency 'HandyJSON', '~> 5.0.3-beta'
    s.dependency 'Alamofire', "~> 4.9.1"
    s.dependency 'CocoaAsyncSocket'
    s.dependency 'FCUUID'
    s.dependency 'CocoaSecurity'
    
  #  valid_archs = ['armv7s','arm64','armv7','arm64e']
  #  s.pod_target_xcconfig = { 'VALID_ARCHS' => 'armv7 arm64' }
  s.pod_target_xcconfig = { 'VALID_ARCHS[sdk=iphonesimulator*]' => '' }
  
  #   s.user_target_xcconfig = {'OTHER_LDFLAGS' => ['-lObjC','-all_load']}
end
