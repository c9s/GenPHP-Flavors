<?php
namespace ant_build;
use GenPHP\Flavor\BaseGenerator;

class Generator extends BaseGenerator 
{

    function brief() { return 'generate files for apache-ant and jenkins'; }

    function generate($name) 
    {
        $files = array( 
            'build.xml',
            'phpdox.xml',
            'phpunit.xml',
            'phpunit-ci.xml',
            'tests/bootstrap.php',
        );
        foreach( $files as $file ) {
            if ( file_exists($file) ) {
                $this->logger->notice("skip $file",1);
                continue;
            }
            $this->render( $file , $file , array( 'name' => $name ));
        }
    }
}
