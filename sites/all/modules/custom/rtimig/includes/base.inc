<?php

/**
 * @file
 * Declaration of custom migration and database connection.
 */

/**
 * Implements NodeMigration.
 */
abstract class RTINodeMigration extends DrupalNode7Migration {
  // A Migration constructor takes an array of arguments as its first parameter.
  /**
   * The arguments must be passed through to the parent constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('Pam Bell', 'pam@austin.utexas.edu',
                            t('Product Owner')),
      new MigrateTeamMember('Francine Bray', 'fbray@austin.utexas.edu',
                            t('Implementor')),
    );
  }

  /**
   * Connects to the destination database.
   */
  public function getConnection($connection = 'PROD') {
    return Database::getConnection('default', $connection);
  }

}
