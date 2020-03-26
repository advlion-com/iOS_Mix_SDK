Pod::Spec.new do |spec|

    spec.name         = "RSMixVlionAd"
    spec.version      = "0.0.3"
    spec.summary      = "瑞狮融合SDK"
    
    spec.description  = <<-DESC

    pod 'RSMixVlionAd'
                   DESC

    spec.homepage     = "http://EXAMPLE/RSMixVlionAd"

    spec.license      = { :type => "MIT", :file => "LICENSE" }

    spec.author       = { "61242553@qq.com" => "61242553@qq.com" }

    spec.platform     = :ios, "9.0"

    spec.source       = { :git => "https://github.com/advlion-com/iOS_Mix_SDK.git", :tag => "#{spec.version}" }

    spec.vendored_frameworks = "RSMixVlionAd.framework"

    spec.dependency "Bytedance-UnionAD", '~> 2.5.1.5'
    
    spec.dependency "GDTMobSDK", '~> 4.11.4'
    
    spec.dependency "SDWebImage"
    spec.dependency "MJRefresh"
    spec.dependency "JXCategoryView"

end
