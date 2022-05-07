Pod::Spec.new do |spec|
  spec.name          = 'Keychain-ObjectiveC'
  spec.version       = '2.4.10'
  spec.license       = { :type => 'BSD' }
  spec.homepage      = 'https://github.com/JSpicy/keychain-objective-c-cocoapods'
  spec.authors       = { 'Robert Ellis' => 'robert.ellis@keychain.io' }
  spec.summary       = 'Keychain Core xcframework for iOS and OS X.'
  spec.description   = <<-DESC
                        This xcframework is is for use with KeychainCore, by keychain.io.
                        Please contact keychain.io to obtain an API key so you can make use
                        of this xcframework for creating and running keychain.io enabled
                        apps with self-sovereign identities.
                       DESC
  spec.source        = { :git => 'https://github.com/JSpicy/keychain-objective-c-cocoapods.git', :tag => spec.version }
  spec.vendored_framework = 'Keychain-ObjectiveC.xcframework'
  spec.swift_version = '5.0'

  spec.ios.deployment_target  = '15.0'
  spec.osx.deployment_target  = '12.1'
end
