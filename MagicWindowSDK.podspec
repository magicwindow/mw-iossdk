Pod::Spec.new do |s|

  s.name         = "MagicWindowSDK"
  s.version      = "3.90.161102"
  s.summary      = "MagicWindowSDK for Cocoapods convenience."
  s.homepage     = "http://magicwindow.cn/"
  s.license      = "MIT"
  s.author       = { "MagicWindow" => "support@magicwindow.cn" }
  s.source       = { :git => "https://github.com/magicwindow/mw-iossdk.git", :tag => "#{s.version}" }
  s.platform     = :ios, "7.0"
  s.requires_arc = true


  s.default_subspec = 'MW'

  s.subspec 'MW' do |mw|
    mw.source_files = "MagicWindowSDK/MagicWindowSDK/*.{h,m}"
    mw.public_header_files = "MagicWindowSDK/MagicWindowSDK/*.h"
    mw.resource     = "MagicWindowSDK/MagicWindowSDK/MagicWindow.bundle"
    mw.preserve_paths = "MagicWindowSDK/MagicWindowSDK/libMagicWindowSDK.a"
    mw.vendored_libraries = "MagicWindowSDK/MagicWindowSDK/libMagicWindowSDK.a"
    mw.xcconfig = {
        'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/MagicWindowSDK/MagicWindowSDK"',
        'HEADER_SEARCH_PATHS' => '"$(PODS_ROOT)/MagicWindowSDK/MagicWindowSDK"'
    }
    mw.frameworks = "AdSupport","CoreTelephony","CoreGraphics","CoreFoundation","SystemConfiguration","CoreLocation"
    mw.libraries = "z","sqlite3.0"
  end

  # WeChat
  s.subspec 'WeChat' do |sp|
  sp.vendored_libraries = "MagicWindowSDK/WeChat/*.a"
  sp.source_files = "MagicWindowSDK/WeChat/*.{h,m}"
  sp.public_header_files = "MagicWindowSDK/WeChat/*.h"
  sp.libraries = "sqlite3","c++"
  sp.dependency 'MagicWindowSDK/MW'
  end

end
