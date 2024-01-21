Pod::Spec.new do |spec|
    spec.name                     = 'sharedLibrary'
    spec.version                  = '1.0.2'
    spec.homepage                 =  'https://github.com/aretto710/iOSSharedLibrary'
    spec.author                   = { 'aretto710' => 'antonhy.retto@securex.pe' }
    spec.source                   =  { :git => '  https://github.com/aretto710/iOSSharedLibrary.git', :tag => spec.version.to_s } 
    spec.license                  = { :type => 'MIT', :file => 'LICENSE' }
    spec.summary                  = 'Some description for the Shared Module'
    spec.vendored_frameworks      = 'sharedLibrary.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '14.0'

end