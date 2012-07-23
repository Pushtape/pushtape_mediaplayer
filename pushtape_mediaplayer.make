api = 2
core = 7.x

;projects[media_soundcloud][version] = 1.0-alpha1

projects[media_colorbox][version] = 1.0-rc1
projects[media_colorbox][subdir] = contrib

projects[mediaplaylist][version] = 1.0-rc1
projects[mediaplaylist][subdir] = contrib

projects[soundmanager2][version] = "2.x-dev"
projects[soundmanager2][subdir] = contrib

projects[jplayer][subdir] = contrib
projects[jplayer][type] = module
projects[jplayer][version] = 2.0-beta1
;projects[jplayer][patch][] = http://drupal.org/files/hide-direct-link-1046744-16.patch

libraries[soundmanager2][download][type] = "get"
libraries[soundmanager2][download][url] = "http://www.schillmania.com/projects/soundmanager2/download/soundmanagerv297a-20120318.zip"
libraries[soundmanager2][directory_name] = "soundmanager2"
libraries[soundmanager2][type] = "library"

libraries[jplayer][download][type] = "get"
libraries[jplayer][download][url] = "http://jplayer.org/latest/jQuery.jPlayer.2.1.0.zip"
libraries[jplayer][directory_name] = "jplayer"
libraries[jplayer][type] = "library"
