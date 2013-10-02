<?php

$aliases['dev'] = array(
	'uri'=> 'imperialtheatre.ccistaging.com',
	'root' => '/home/staging/subdomains/imperialtheatre/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'staging',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	),

	'ssh-options' => "-p 37241"
);

$aliases['live'] = array(
	'uri'=> 'live.imperialtheatre.net',
	'root' => '/home/imperial/subdomains/live/public_html',
	'remote-host'=> 'host.lambtonshield.com',
	'remote-user'=> 'imperial',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	)
);