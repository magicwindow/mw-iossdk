Pod::Spec.new do |s|

  s.name         = "MagicWindowSDK"
  s.version      = "4.2.171115"
  s.summary      = "MagicWindowSDK for Cocoapods convenience."
  s.homepage     = "http://magicwindow.cn/"
  s.license      = "MIT"
  s.author       = { "MagicWindow" => "support@magicwindow.cn" }
  s.source       = { :git => "https://github.com/magicwindow/mw-iossdk.git", :tag => "#{s.version}" }
  s.platform     = :ios, "7.0"
  s.requires_arc = true
s.source_files = "MagicWindowSDK/MagicWindowSDK/*.{h,m}"
s.public_header_files = "MagicWindowSDK/MagicWindowSDK/*.h"
s.resource     = "MagicWindowSDK/MagicWindowSDK/MagicWindow.bundle"
s.preserve_paths = "MagicWindowSDK/MagicWindowSDK/libMagicWindowSDK.a"
s.vendored_libraries = "MagicWindowSDK/MagicWindowSDK/libMagicWindowSDK.a"
s.xcconfig = {
'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/MagicWindowSDK/MagicWindowSDK"',
'HEADER_SEARCH_PATHS' => '"$(PODS_ROOT)/MagicWindowSDK/MagicWindowSDK"'
}
s.frameworks = "AdSupport","CoreTelephony","CoreGraphics","CoreFoundation","SystemConfiguration","CoreLocation","WebKit","ImageIO"
s.dependency "WechatOpenSDK"

end
