Pod::Spec.new do |s|

  s.name         = "AIiOSVersion"
  s.version      = "2.0.3"
  s.summary      = "iPhone machine 即时更新"

  s.description  = <<-DESC
                    现有的更新不及时，这个及时更新
                   DESC

  s.homepage     = "https://github.com/zhfeng20108/ZFiOSVersion"

  s.license      = "MIT"

  s.author             = { "zhfeng" => "hhzhangfeng2008@163.com" }

  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/zhfeng20108/ZFiOSVersion.git", :tag => "2.0.3" }

  s.source_files  = "AIiOSVersion/*.{h,m}"

  s.requires_arc = true
end
