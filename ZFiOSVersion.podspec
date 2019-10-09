Pod::Spec.new do |s|

  s.name         = "ZFiOSVersion"
  s.version      = "1.0.0"
  s.summary      = "iPhone machine 即时更新"

  s.description  = <<-DESC
                   DESC

  s.homepage     = "https://github.com/zhfeng20108/ZFiOSVersion"

  s.license      = "MIT"

  s.author             = { "zhfeng" => "hhzhangfeng2008@163.com" }

  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/zhfeng20108/ZFiOSVersion.git", :tag => "1.0.0" }

  s.source_files  = "ZFiOSVersion/*.{h,m}"

  s.requires_arc = true
end
