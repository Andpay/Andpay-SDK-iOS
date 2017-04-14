Pod::Spec.new do |s|

  s.name         = "Andpay-SDK-iOS"
  s.version      = "1.0.0"
  s.summary      = "Andpay-SDK-iOS"

  s.homepage     = "http://172.19.30.116:2333/oc/Andpay-SDK-iOS"

  s.license      = "MIT"

  s.author       = { "Rango" => "im_zhang@163.com" }

  s.platform     = :ios, "7.0"

  s.source       = { :git => "#{s.homepage}", :tag => "#{s.version}" }

  s.source_files  = "Classes", "lib/*.{h}"
  s.exclude_files = "Classes/Exclude"
  s.vendored_libraries = "lib/libAndpaySDK.a"

  s.framework  = "CoreLocation", "SystemConfiguration"

end
