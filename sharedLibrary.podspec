Pod::Spec.new do |spec|
    spec.name                     = 'sharedLibrary'
    spec.version                  = '1.0.1'
    spec.homepage                 = 'Link to the Shared Module homepage'
    spec.source                   =  { :git => '  http://github.com/aretto710/iOSSharedLibrary.git', :tag => spec.version.to_s } 
    spec.license                  = ''
    spec.summary                  = 'Some description for the Shared Module'
    spec.vendored_frameworks      = 'sharedLibrary.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '14.0'
    spec.authors                  = ''
                
end