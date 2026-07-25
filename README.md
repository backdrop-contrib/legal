# Legal

A module which displays your Terms and conditions to users who want to
register, and makes sure they accept the T&C before their registration
is accepted.

Note: No T&C will be displayed until the T&C text has been input by the
administrator.

Each time a new version of the T&C is created all users will be required to
accept the new version.

Note: T&C text should only be entered by administrators or other highly trusted users.
            filter_xss_admin() is used to filter content for display, this is a very permissive
            XSS/HTML filter intended for admin-only use.

Integrates with Views, and ships with 2 default views that display T&C history,
and user acceptance of T&Cs.

Tokens can be used in T&C text.

## Installation

- Install this module using the [official Backdrop CMS instructions](https://backdropcms.org/guide/modules)

## Usage

- Usage instructions can be [viewed and edited in the Wiki](https://github.com/backdrop-contrib/legal/wiki).

## Issues

 - Bugs and Feature requests should be reported in the [Issue Queue](https://github.com/backdrop-contrib/legal/issues).

## Current Maintainers

 - [Laryn Kragt Bakker](https://github.com/laryn)
 - Collaboration and co-maintainers welcome!

## Credits

 - Ported to Backdrop CMS by [Laryn Kragt Bakker](https://github.com/laryn)
 - Written and maintained for Drupal by [Robert Castelo](https://www.drupal.org/u/robert-castelo)

 ## License

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.
