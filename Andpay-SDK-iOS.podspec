Pod::Spec.new do |s|

  s.name         = "Andpay-SDK-iOS"
  s.version      = "0.0.4"
  s.summary      = "Andpay-SDK-iOS"

  s.homepage     = "https://github.com/Andpay/Andpay-SDK-iOS.git"

  s.license      = "Copyright (c) 2017年 Andpay."

  s.author       = { "Rango" => "im_zhang@163.com" }

  s.platform     = :ios, "7.0"

  s.source       = { :git => "#{s.homepage}", :tag => "#{s.version}" }

  s.source_files  = "Classes", "lib/*.{h}"
  s.exclude_files = "Classes/Exclude"
  s.vendored_libraries = "lib/libAndpaySDK.a"

  s.framework  = "CoreLocation", "SystemConfiguration"

end
