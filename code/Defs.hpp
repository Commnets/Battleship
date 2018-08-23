/** \addtogroup AdArcadeGame */
/*@{*/

/**	
 *	@file	
 *	File: Defs.hpp \n
 *	Framework: Test Adavanced Arcade \n
 *	Author: Ignacio Cea Forni�s (Community Networks) \n
 *	Creation Date: 15/01/2018 \n
 *	Description: Defines and general includes of Test Advanced Arcade
 *	Versions: 1.0 Initial
 */

#ifndef __GAMETESTADARCADEDEFINES__
#define __GAMETESTADARCADEDEFINES__

#include <AdvancedArcade/adinclude.hpp>
#include <graphicsinclude.hpp>

/** The limitis of the screen of the game. */
#define __GAMETEST_SCREENWIDTH__						816
#define __GAMETEST_SCREENHEIGHT__						600
#define __MAPWIDTHINPIXELS___							__GAMETEST_SCREENWIDTH__
#define __MAPHEIGHTINPIXELS__							__GAMETEST_SCREENHEIGHT__
// The map has the same size than the visual screen...

/** Constants related with the game. */
// The particular GUI System to ask for the name of the player
#define __GAMETEST_PLAYERNAMEGUISYSTEM__				100
#define __GAMETEST_PLAYERNAMEOPTIONID__					102

// The battleship
#define __GAMETEST_BATTLESHIPID__						100
#define __GAMETEST_BATTLESHIPANIMATIONMOVERIGHT__		0
#define __GAMETEST_BATTLESHIPANIMATIOMOVELEFT__			1
#define __GAMETEST_BATTLESHIPANIMATIONSTAY__			3
#define __GAMETEST_BATTLESHIPRUNMOVEMENT__				100
#define __GAMETEST_BATTLESHIPSTAYMOVEMENT__				101
#define __GAMETEST_BATTLESHIPMOVINGRIGHTSTATE__			0
#define __GAMETEST_BATTLESHIPMOVINGRIGHTFORWARDSTATE__	1
#define __GAMETEST_BATTLESHIPMOVINGRIGHTBACKWARDSTATE__	2
#define __GAMETEST_BATTLESHIPMOVINGLEFTSTATE__			3
#define __GAMETEST_BATTLESHIPMOVINGLEFTFORWARDSTATE__	4
#define __GAMETEST_BATTLESHIPMOVINGLEFTBACKWARDSTATE__	5
#define __GAMETEST_BATTLESHIPMOVINGFORWARDSTATE__		6
#define __GAMETEST_BATTLESHIPMOVINGBACKWARDSTATE__		7
#define __GAMETEST_BATTLESHIPSTAYINGSTATE__				8
#define __GAMETEST_BATTLESHIPROTATINGSTATE__			9
#define __GAMETEST_BATTLESHIPEXPLODINGSTATE__			10
#define __GAMETEST_BATTLESHIPBLANKSTATE__				11
#define __GAMETEST_BATTLESHIPMAXPOWER__					10
#define __GAMETEST_BATTLESHIPBKCHANNEL__				1

// The shootings
#define __GAMETEST_BATTLESHIPSHOOTINGBASEID__			200
#define __GAMETEST_BATTLESHITPMAXSHOOTINGS__			100
#define __GAMETEST_BATTLESHIPSHOOTINGMOVEMENTBASEID__	150
#define __GAMETEST_BATTLESHIPSHOOTINGNOMOVBASEID__		250
#define __GAMETEST_BATTLESHIPSHOOTINGMOVINGSTATE__		0	// And other five (six in total), taking into account the type of shooting...
#define __GAMETEST_BATTLESHIPSHOOTINGNUMBERTYPES__		6
#define __GAMETEST_BATTLESHIPSHOOTINGBLANKSTATE__		6
#define __GAMETEST_SHOOTINGMOVINGBKSOUND__				107
#define __GAMETEST_SHOOTINGBKCHANNEL__					2

// The asteroids
#define __GAMETEST_ASTEROIDBASEID__						300
#define __GAMETEST_MAXASTEROIDS__						50
#define __GAMETEST_ASTEROIDMOVEMENTBASEID__				350
#define __GAMETEST_ASTEROIDNOMOVEMENTBASEID__			400
#define __GAMETEST_ASTEROIDMOVINGSTATE__				0
#define __GAMETEST_ASTEROIDNUMBERTYPES__				6
#define __GAMETEST_ASTEROIDEXPLODINGSTATE__				6
#define __GAMETEST_ASTEROIDBLANKSTATE__					7
#define __GAMETEST_ASTEROIDBKCHANNEL__					3

// The batteship shootings to catch in the space
#define __GAMETEST_BATTLESHIPSHOOTINGTOCATCHID__		400
#define __GAMETEST_SHOOTINGSTYPESTOCATCH__				3
#define __GAMETEST_SHOOTINGTOCATCHMOVEMENT__			450
#define __GAMETEST_SHOOTINGTOCATCHNOMOVEMENT__			451
#define __GAMETEST_SHOOTINGTOCATCHMOVINGSTATE__			0
#define __GAMETEST_SHOOTINGTOCATCHBLANKSTATE__			3

// The monitors to control how the battleship moves at presentation time
#define __GAMETEST_PRESENTATIONMONITORBASEID__			10
#define __GAMETEST_PRESENTATIONMONITORNUMBERMOVS__		3

// The automatical animations
#define __GAMETEST_BATTLESHIPCONTROLATPRESENTATION__	10000

// The basic world scene and map used in the game (with only one is enough)
#define __GAMETEST_WORLDID__							1
#define __GAMETEST_SCENEID__							1
#define __GAMETEST_MAPID__								1
#define __GAMETEST_MAPLAYERBACKGROUND__					"background"

// Forms related with the battleship
#define __GAMETEST_BATTLESHIPGAMELOGO__					99
#define __GAMETEST_SPACESHIPRIGHTFORM__					100
#define __GAMETEST_SPACESHIPLEFTFORM__					101
#define __GAMETEST_SPACESHIPSTAYFORM__					102
#define __GAMETEST_BATTLESHIPPRSENTATIONFORM__			103
#define __GAMETEST_BATTLESHIPLIVEFORM__					104
#define __GAMETEST_BATTLESHIPROTATINGFORM__				105
#define __GAMETEST_BATTLESHIPEXPLOSIONFORM__			106

// Forms related with the shootings
#define __GAMETEST_BATTLESHIPSHOOTING1FORM__			150
#define __GAMETEST_BATTLESHIPSHOOTING2FORM__			151
#define __GAMETEST_BATTLESHIPSHOOTING3FORM__			152

// Forms related with the asteroids
#define __GAMETEST_ASTEROID1FORM__						110
#define __GAMETEST_ASTEROID2FORM__						111
#define __GAMETEST_ASTEROID3FORM__						112
#define __GAMETEST_ASTEROID4FORM__						113
#define __GAMETEST_ASTEROID5FORM__						114
#define __GAMETEST_ASTEROID6FORM__						115

// Forms related with the shootings to catch
#define __GAMETEST_SHOOTINGSTOCATCHFORM__				120

// Background
#define __GAMETEST_BACKGROUNDFORM__						200

// The planets used as background
#define __GAMETEST_PLANETFORM1__						201
#define __GAMETEST_PLANETFORM2__						202
#define __GAMETEST_PLANETFORM3__						203

// Parts of every entry in the hall of fame
#define __GAMETEST_SCOREPLAYERPENVALUE__				0
#define __GAMETEST_NAMEPLAYEROPENVALUE__				1

// The game states
#define __GAMETEST_CONTROLGAMESTATE__					100
#define __GAMETEST_CONTROLGAMESTATENAME__				"100"
#define __GAMETEST_INTROGAMESTATE__						110
#define __GAMETEST_INTROGAMESTATENAME__					"110"
#define __GAMETEST_PRESENTATIONGAMESTATE__				120
#define __GAMETEST_PRESENTATIONGAMESTATENAME__			"120"
#define __GAMETEST_SELECTIONGAMESTATE__					130
#define __GAMETEST_SELECTIONGAMESTATENAME__				"130"
#define __GAMETEST_HALLOFFAMEGAMESTATE__				140
#define __GAMETEST_HALLOFFAMEGAMESTATENAME__			"140"
#define __GAMETEST_ABOUTTOSTARTGAMESTATE__				150
#define __GAMETEST_ABOUTTOSTARTGAMESTATENAME__			"150"
#define __GAMETEST_PLAYINGGAMESTATE__					160
#define __GAMETEST_PLAYINGGAMESTATENAME__				"160"
#define __GAMETEST_PLAYERHASDIEDGAMESTATE__				170
#define __GAMETEST_PLAYERHASDIEDGAMESTATENAME__			"170"
#define __GAMETEST_GAMEHASENDEDGAMESTATE__				180
#define __GAMETEST_GAMEHASENDEDGAMESTATENAME__			"180"
#define __GAMETEST_LEVELHASCOMPLETEDGAMESTATE__			190
#define __GAMETEST_LEVELHASCOMPLETEDGAMESTATENAME__		"190"
#define __GAMETEST_PRESENTATIONGSTATEBK1__				300
#define __GAMETEST_PRESENTATIONGSTATEBK2__				301
#define __GAMETEST_PRESENTATIONGSTATEBK3__				302
#define __GAMETEST_PRESENTATIONGSTATEBK4__				303
#define __GAMETEST_PRESENTATIONGSTATEBKSOUND__			102
#define __GAMETEST_SELECTIONGSATEBKSOUND__				101
#define __GAMETEST_PLAYINGGSTATEBKSOUND__				103
#define __GAMETEST_PLAYERHASDEADGSTATEBKSOUND__			104
#define __GAMETEST_LEVELHASCOMPLETEDGSTATBKSOUND__		105
#define __GAMETEST_GAMEHASENDEDGSTATEBKSOUND__			106
#define __GAMETEST_HALLOFFAMESTATEBKSOUND__				100
#define __GAMETEST_GAMESTATEBKCHANNEL__					0

// The score boards
#define __GAMETEST_LIVESSCOREOBJECTID__					11
#define __GAMETEST_POINTSSCOREOBJECTID__				12
#define __GAMETEST_SHOOTINGSREAMININGSCOREOBJECTID__	13

// The game itself
#define __GAMETEST_MAXNUMBERLIVES__						3
#define __GAMETEST_MAXNUMBERLEVELS__					10
#define __GAMETEST_MAXNUMBERPLAYERS__					10

// The events
#define __GAMETEST_TRYTOSHOOTEVENT__					100
#define __GAMETEST_SHOOTINGOUTOFSCREEN__				101
#define __GAMETEST_SHOOTINGALREADYUSED__				102
#define __GAMETEST_BATTLESHIPDESTROYED__				103
#define __GAMETEST_ASTEROIDOUTOFSCREEN__				104
#define __GAMETEST_ASTEROIDALREADYEXPLODED__			105
#define __GAMETEST_LEVELCOMPLETE__						106
#define __GAMETEST_SHOOTINGTOCATCHOUTOFSCREEN__			107
#define __GAMETEST_SHOOTINGTOCATCHCAUGHT__				108

#endif
  
// End of the file
/*@}*/