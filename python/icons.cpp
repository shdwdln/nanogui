#ifdef NANOGUI_PYTHON

#include "python.h"

/* Developer note: need to make a change to this file?
 * Please raise an Issue on GitHub describing what needs to change.  This file
 * was generated, so the scripts that generated it needs to update as well.
 */

void register_entypo(py::module &m) {
    /* Entypo constants */
    {
        #define C(name) g.attr(#name) = py::int_(name);
        py::module g = m.def_submodule("icons");
        C(FA_AD);
        C(FA_ADDRESS_BOOK);
        C(FA_ADDRESS_CARD);
        C(FA_ADJUST);
        C(FA_AIR_FRESHENER);
        C(FA_ALIGN_CENTER);
        C(FA_ALIGN_JUSTIFY);
        C(FA_ALIGN_LEFT);
        C(FA_ALIGN_RIGHT);
        C(FA_ALLERGIES);
        C(FA_AMBULANCE);
        C(FA_AMERICAN_SIGN_LANGUAGE_INTERPRETING);
        C(FA_ANCHOR);
        C(FA_ANGLE_DOUBLE_DOWN);
        C(FA_ANGLE_DOUBLE_LEFT);
        C(FA_ANGLE_DOUBLE_RIGHT);
        C(FA_ANGLE_DOUBLE_UP);
        C(FA_ANGLE_DOWN);
        C(FA_ANGLE_LEFT);
        C(FA_ANGLE_RIGHT);
        C(FA_ANGLE_UP);
        C(FA_ANGRY);
        C(FA_ANKH);
        C(FA_APPLE_ALT);
        C(FA_ARCHIVE);
        C(FA_ARCHWAY);
        C(FA_ARROW_ALT_CIRCLE_DOWN);
        C(FA_ARROW_ALT_CIRCLE_LEFT);
        C(FA_ARROW_ALT_CIRCLE_RIGHT);
        C(FA_ARROW_ALT_CIRCLE_UP);
        C(FA_ARROW_CIRCLE_DOWN);
        C(FA_ARROW_CIRCLE_LEFT);
        C(FA_ARROW_CIRCLE_RIGHT);
        C(FA_ARROW_CIRCLE_UP);
        C(FA_ARROW_DOWN);
        C(FA_ARROW_LEFT);
        C(FA_ARROW_RIGHT);
        C(FA_ARROW_UP);
        C(FA_ARROWS_ALT);
        C(FA_ARROWS_ALT_H);
        C(FA_ARROWS_ALT_V);
        C(FA_ASSISTIVE_LISTENING_SYSTEMS);
        C(FA_ASTERISK);
        C(FA_AT);
        C(FA_ATLAS);
        C(FA_ATOM);
        C(FA_AUDIO_DESCRIPTION);
        C(FA_AWARD);
        C(FA_BABY);
        C(FA_BABY_CARRIAGE);
        C(FA_BACKSPACE);
        C(FA_BACKWARD);
        C(FA_BACON);
        C(FA_BALANCE_SCALE);
        C(FA_BALANCE_SCALE_LEFT);
        C(FA_BALANCE_SCALE_RIGHT);
        C(FA_BAN);
        C(FA_BAND_AID);
        C(FA_BARCODE);
        C(FA_BARS);
        C(FA_BASEBALL_BALL);
        C(FA_BASKETBALL_BALL);
        C(FA_BATH);
        C(FA_BATTERY_EMPTY);
        C(FA_BATTERY_FULL);
        C(FA_BATTERY_HALF);
        C(FA_BATTERY_QUARTER);
        C(FA_BATTERY_THREE_QUARTERS);
        C(FA_BED);
        C(FA_BEER);
        C(FA_BELL);
        C(FA_BELL_SLASH);
        C(FA_BEZIER_CURVE);
        C(FA_BIBLE);
        C(FA_BICYCLE);
        C(FA_BIKING);
        C(FA_BINOCULARS);
        C(FA_BIOHAZARD);
        C(FA_BIRTHDAY_CAKE);
        C(FA_BLENDER);
        C(FA_BLENDER_PHONE);
        C(FA_BLIND);
        C(FA_BLOG);
        C(FA_BOLD);
        C(FA_BOLT);
        C(FA_BOMB);
        C(FA_BONE);
        C(FA_BONG);
        C(FA_BOOK);
        C(FA_BOOK_DEAD);
        C(FA_BOOK_MEDICAL);
        C(FA_BOOK_OPEN);
        C(FA_BOOK_READER);
        C(FA_BOOKMARK);
        C(FA_BORDER_ALL);
        C(FA_BORDER_NONE);
        C(FA_BORDER_STYLE);
        C(FA_BOWLING_BALL);
        C(FA_BOX);
        C(FA_BOX_OPEN);
        C(FA_BOXES);
        C(FA_BRAILLE);
        C(FA_BRAIN);
        C(FA_BREAD_SLICE);
        C(FA_BRIEFCASE);
        C(FA_BRIEFCASE_MEDICAL);
        C(FA_BROADCAST_TOWER);
        C(FA_BROOM);
        C(FA_BRUSH);
        C(FA_BUG);
        C(FA_BUILDING);
        C(FA_BULLHORN);
        C(FA_BULLSEYE);
        C(FA_BURN);
        C(FA_BUS);
        C(FA_BUS_ALT);
        C(FA_BUSINESS_TIME);
        C(FA_CALCULATOR);
        C(FA_CALENDAR);
        C(FA_CALENDAR_ALT);
        C(FA_CALENDAR_CHECK);
        C(FA_CALENDAR_DAY);
        C(FA_CALENDAR_MINUS);
        C(FA_CALENDAR_PLUS);
        C(FA_CALENDAR_TIMES);
        C(FA_CALENDAR_WEEK);
        C(FA_CAMERA);
        C(FA_CAMERA_RETRO);
        C(FA_CAMPGROUND);
        C(FA_CANDY_CANE);
        C(FA_CANNABIS);
        C(FA_CAPSULES);
        C(FA_CAR);
        C(FA_CAR_ALT);
        C(FA_CAR_BATTERY);
        C(FA_CAR_CRASH);
        C(FA_CAR_SIDE);
        C(FA_CARET_DOWN);
        C(FA_CARET_LEFT);
        C(FA_CARET_RIGHT);
        C(FA_CARET_SQUARE_DOWN);
        C(FA_CARET_SQUARE_LEFT);
        C(FA_CARET_SQUARE_RIGHT);
        C(FA_CARET_SQUARE_UP);
        C(FA_CARET_UP);
        C(FA_CARROT);
        C(FA_CART_ARROW_DOWN);
        C(FA_CART_PLUS);
        C(FA_CASH_REGISTER);
        C(FA_CAT);
        C(FA_CERTIFICATE);
        C(FA_CHAIR);
        C(FA_CHALKBOARD);
        C(FA_CHALKBOARD_TEACHER);
        C(FA_CHARGING_STATION);
        C(FA_CHART_AREA);
        C(FA_CHART_BAR);
        C(FA_CHART_LINE);
        C(FA_CHART_PIE);
        C(FA_CHECK);
        C(FA_CHECK_CIRCLE);
        C(FA_CHECK_DOUBLE);
        C(FA_CHECK_SQUARE);
        C(FA_CHEESE);
        C(FA_CHESS);
        C(FA_CHESS_BISHOP);
        C(FA_CHESS_BOARD);
        C(FA_CHESS_KING);
        C(FA_CHESS_KNIGHT);
        C(FA_CHESS_PAWN);
        C(FA_CHESS_QUEEN);
        C(FA_CHESS_ROOK);
        C(FA_CHEVRON_CIRCLE_DOWN);
        C(FA_CHEVRON_CIRCLE_LEFT);
        C(FA_CHEVRON_CIRCLE_RIGHT);
        C(FA_CHEVRON_CIRCLE_UP);
        C(FA_CHEVRON_DOWN);
        C(FA_CHEVRON_LEFT);
        C(FA_CHEVRON_RIGHT);
        C(FA_CHEVRON_UP);
        C(FA_CHILD);
        C(FA_CHURCH);
        C(FA_CIRCLE);
        C(FA_CIRCLE_NOTCH);
        C(FA_CITY);
        C(FA_CLINIC_MEDICAL);
        C(FA_CLIPBOARD);
        C(FA_CLIPBOARD_CHECK);
        C(FA_CLIPBOARD_LIST);
        C(FA_CLOCK);
        C(FA_CLONE);
        C(FA_CLOSED_CAPTIONING);
        C(FA_CLOUD);
        C(FA_CLOUD_DOWNLOAD_ALT);
        C(FA_CLOUD_MEATBALL);
        C(FA_CLOUD_MOON);
        C(FA_CLOUD_MOON_RAIN);
        C(FA_CLOUD_RAIN);
        C(FA_CLOUD_SHOWERS_HEAVY);
        C(FA_CLOUD_SUN);
        C(FA_CLOUD_SUN_RAIN);
        C(FA_CLOUD_UPLOAD_ALT);
        C(FA_COCKTAIL);
        C(FA_CODE);
        C(FA_CODE_BRANCH);
        C(FA_COFFEE);
        C(FA_COG);
        C(FA_COGS);
        C(FA_COINS);
        C(FA_COLUMNS);
        C(FA_COMMENT);
        C(FA_COMMENT_ALT);
        C(FA_COMMENT_DOLLAR);
        C(FA_COMMENT_DOTS);
        C(FA_COMMENT_MEDICAL);
        C(FA_COMMENT_SLASH);
        C(FA_COMMENTS);
        C(FA_COMMENTS_DOLLAR);
        C(FA_COMPACT_DISC);
        C(FA_COMPASS);
        C(FA_COMPRESS);
        C(FA_COMPRESS_ARROWS_ALT);
        C(FA_CONCIERGE_BELL);
        C(FA_COOKIE);
        C(FA_COOKIE_BITE);
        C(FA_COPY);
        C(FA_COPYRIGHT);
        C(FA_COUCH);
        C(FA_CREDIT_CARD);
        C(FA_CROP);
        C(FA_CROP_ALT);
        C(FA_CROSS);
        C(FA_CROSSHAIRS);
        C(FA_CROW);
        C(FA_CROWN);
        C(FA_CRUTCH);
        C(FA_CUBE);
        C(FA_CUBES);
        C(FA_CUT);
        C(FA_DATABASE);
        C(FA_DEAF);
        C(FA_DEMOCRAT);
        C(FA_DESKTOP);
        C(FA_DHARMACHAKRA);
        C(FA_DIAGNOSES);
        C(FA_DICE);
        C(FA_DICE_D20);
        C(FA_DICE_D6);
        C(FA_DICE_FIVE);
        C(FA_DICE_FOUR);
        C(FA_DICE_ONE);
        C(FA_DICE_SIX);
        C(FA_DICE_THREE);
        C(FA_DICE_TWO);
        C(FA_DIGITAL_TACHOGRAPH);
        C(FA_DIRECTIONS);
        C(FA_DIVIDE);
        C(FA_DIZZY);
        C(FA_DNA);
        C(FA_DOG);
        C(FA_DOLLAR_SIGN);
        C(FA_DOLLY);
        C(FA_DOLLY_FLATBED);
        C(FA_DONATE);
        C(FA_DOOR_CLOSED);
        C(FA_DOOR_OPEN);
        C(FA_DOT_CIRCLE);
        C(FA_DOVE);
        C(FA_DOWNLOAD);
        C(FA_DRAFTING_COMPASS);
        C(FA_DRAGON);
        C(FA_DRAW_POLYGON);
        C(FA_DRUM);
        C(FA_DRUM_STEELPAN);
        C(FA_DRUMSTICK_BITE);
        C(FA_DUMBBELL);
        C(FA_DUMPSTER);
        C(FA_DUMPSTER_FIRE);
        C(FA_DUNGEON);
        C(FA_EDIT);
        C(FA_EGG);
        C(FA_EJECT);
        C(FA_ELLIPSIS_H);
        C(FA_ELLIPSIS_V);
        C(FA_ENVELOPE);
        C(FA_ENVELOPE_OPEN);
        C(FA_ENVELOPE_OPEN_TEXT);
        C(FA_ENVELOPE_SQUARE);
        C(FA_EQUALS);
        C(FA_ERASER);
        C(FA_ETHERNET);
        C(FA_EURO_SIGN);
        C(FA_EXCHANGE_ALT);
        C(FA_EXCLAMATION);
        C(FA_EXCLAMATION_CIRCLE);
        C(FA_EXCLAMATION_TRIANGLE);
        C(FA_EXPAND);
        C(FA_EXPAND_ARROWS_ALT);
        C(FA_EXTERNAL_LINK_ALT);
        C(FA_EXTERNAL_LINK_SQUARE_ALT);
        C(FA_EYE);
        C(FA_EYE_DROPPER);
        C(FA_EYE_SLASH);
        C(FA_FAN);
        C(FA_FAST_BACKWARD);
        C(FA_FAST_FORWARD);
        C(FA_FAX);
        C(FA_FEATHER);
        C(FA_FEATHER_ALT);
        C(FA_FEMALE);
        C(FA_FIGHTER_JET);
        C(FA_FILE);
        C(FA_FILE_ALT);
        C(FA_FILE_ARCHIVE);
        C(FA_FILE_AUDIO);
        C(FA_FILE_CODE);
        C(FA_FILE_CONTRACT);
        C(FA_FILE_CSV);
        C(FA_FILE_DOWNLOAD);
        C(FA_FILE_EXCEL);
        C(FA_FILE_EXPORT);
        C(FA_FILE_IMAGE);
        C(FA_FILE_IMPORT);
        C(FA_FILE_INVOICE);
        C(FA_FILE_INVOICE_DOLLAR);
        C(FA_FILE_MEDICAL);
        C(FA_FILE_MEDICAL_ALT);
        C(FA_FILE_PDF);
        C(FA_FILE_POWERPOINT);
        C(FA_FILE_PRESCRIPTION);
        C(FA_FILE_SIGNATURE);
        C(FA_FILE_UPLOAD);
        C(FA_FILE_VIDEO);
        C(FA_FILE_WORD);
        C(FA_FILL);
        C(FA_FILL_DRIP);
        C(FA_FILM);
        C(FA_FILTER);
        C(FA_FINGERPRINT);
        C(FA_FIRE);
        C(FA_FIRE_ALT);
        C(FA_FIRE_EXTINGUISHER);
        C(FA_FIRST_AID);
        C(FA_FISH);
        C(FA_FIST_RAISED);
        C(FA_FLAG);
        C(FA_FLAG_CHECKERED);
        C(FA_FLAG_USA);
        C(FA_FLASK);
        C(FA_FLUSHED);
        C(FA_FOLDER);
        C(FA_FOLDER_MINUS);
        C(FA_FOLDER_OPEN);
        C(FA_FOLDER_PLUS);
        C(FA_FONT);
        C(FA_FONT_AWESOME_LOGO_FULL);
        C(FA_FOOTBALL_BALL);
        C(FA_FORWARD);
        C(FA_FROG);
        C(FA_FROWN);
        C(FA_FROWN_OPEN);
        C(FA_FUNNEL_DOLLAR);
        C(FA_FUTBOL);
        C(FA_GAMEPAD);
        C(FA_GAS_PUMP);
        C(FA_GAVEL);
        C(FA_GEM);
        C(FA_GENDERLESS);
        C(FA_GHOST);
        C(FA_GIFT);
        C(FA_GIFTS);
        C(FA_GLASS_CHEERS);
        C(FA_GLASS_MARTINI);
        C(FA_GLASS_MARTINI_ALT);
        C(FA_GLASS_WHISKEY);
        C(FA_GLASSES);
        C(FA_GLOBE);
        C(FA_GLOBE_AFRICA);
        C(FA_GLOBE_AMERICAS);
        C(FA_GLOBE_ASIA);
        C(FA_GLOBE_EUROPE);
        C(FA_GOLF_BALL);
        C(FA_GOPURAM);
        C(FA_GRADUATION_CAP);
        C(FA_GREATER_THAN);
        C(FA_GREATER_THAN_EQUAL);
        C(FA_GRIMACE);
        C(FA_GRIN);
        C(FA_GRIN_ALT);
        C(FA_GRIN_BEAM);
        C(FA_GRIN_BEAM_SWEAT);
        C(FA_GRIN_HEARTS);
        C(FA_GRIN_SQUINT);
        C(FA_GRIN_SQUINT_TEARS);
        C(FA_GRIN_STARS);
        C(FA_GRIN_TEARS);
        C(FA_GRIN_TONGUE);
        C(FA_GRIN_TONGUE_SQUINT);
        C(FA_GRIN_TONGUE_WINK);
        C(FA_GRIN_WINK);
        C(FA_GRIP_HORIZONTAL);
        C(FA_GRIP_LINES);
        C(FA_GRIP_LINES_VERTICAL);
        C(FA_GRIP_VERTICAL);
        C(FA_GUITAR);
        C(FA_H_SQUARE);
        C(FA_HAMBURGER);
        C(FA_HAMMER);
        C(FA_HAMSA);
        C(FA_HAND_HOLDING);
        C(FA_HAND_HOLDING_HEART);
        C(FA_HAND_HOLDING_USD);
        C(FA_HAND_LIZARD);
        C(FA_HAND_MIDDLE_FINGER);
        C(FA_HAND_PAPER);
        C(FA_HAND_PEACE);
        C(FA_HAND_POINT_DOWN);
        C(FA_HAND_POINT_LEFT);
        C(FA_HAND_POINT_RIGHT);
        C(FA_HAND_POINT_UP);
        C(FA_HAND_POINTER);
        C(FA_HAND_ROCK);
        C(FA_HAND_SCISSORS);
        C(FA_HAND_SPOCK);
        C(FA_HANDS);
        C(FA_HANDS_HELPING);
        C(FA_HANDSHAKE);
        C(FA_HANUKIAH);
        C(FA_HARD_HAT);
        C(FA_HASHTAG);
        C(FA_HAT_WIZARD);
        C(FA_HAYKAL);
        C(FA_HDD);
        C(FA_HEADING);
        C(FA_HEADPHONES);
        C(FA_HEADPHONES_ALT);
        C(FA_HEADSET);
        C(FA_HEART);
        C(FA_HEART_BROKEN);
        C(FA_HEARTBEAT);
        C(FA_HELICOPTER);
        C(FA_HIGHLIGHTER);
        C(FA_HIKING);
        C(FA_HIPPO);
        C(FA_HISTORY);
        C(FA_HOCKEY_PUCK);
        C(FA_HOLLY_BERRY);
        C(FA_HOME);
        C(FA_HORSE);
        C(FA_HORSE_HEAD);
        C(FA_HOSPITAL);
        C(FA_HOSPITAL_ALT);
        C(FA_HOSPITAL_SYMBOL);
        C(FA_HOT_TUB);
        C(FA_HOTDOG);
        C(FA_HOTEL);
        C(FA_HOURGLASS);
        C(FA_HOURGLASS_END);
        C(FA_HOURGLASS_HALF);
        C(FA_HOURGLASS_START);
        C(FA_HOUSE_DAMAGE);
        C(FA_HRYVNIA);
        C(FA_I_CURSOR);
        C(FA_ICE_CREAM);
        C(FA_ICICLES);
        C(FA_ICONS);
        C(FA_ID_BADGE);
        C(FA_ID_CARD);
        C(FA_ID_CARD_ALT);
        C(FA_IGLOO);
        C(FA_IMAGE);
        C(FA_IMAGES);
        C(FA_INBOX);
        C(FA_INDENT);
        C(FA_INDUSTRY);
        C(FA_INFINITY);
        C(FA_INFO);
        C(FA_INFO_CIRCLE);
        C(FA_ITALIC);
        C(FA_JEDI);
        C(FA_JOINT);
        C(FA_JOURNAL_WHILLS);
        C(FA_KAABA);
        C(FA_KEY);
        C(FA_KEYBOARD);
        C(FA_KHANDA);
        C(FA_KISS);
        C(FA_KISS_BEAM);
        C(FA_KISS_WINK_HEART);
        C(FA_KIWI_BIRD);
        C(FA_LANDMARK);
        C(FA_LANGUAGE);
        C(FA_LAPTOP);
        C(FA_LAPTOP_CODE);
        C(FA_LAPTOP_MEDICAL);
        C(FA_LAUGH);
        C(FA_LAUGH_BEAM);
        C(FA_LAUGH_SQUINT);
        C(FA_LAUGH_WINK);
        C(FA_LAYER_GROUP);
        C(FA_LEAF);
        C(FA_LEMON);
        C(FA_LESS_THAN);
        C(FA_LESS_THAN_EQUAL);
        C(FA_LEVEL_DOWN_ALT);
        C(FA_LEVEL_UP_ALT);
        C(FA_LIFE_RING);
        C(FA_LIGHTBULB);
        C(FA_LINK);
        C(FA_LIRA_SIGN);
        C(FA_LIST);
        C(FA_LIST_ALT);
        C(FA_LIST_OL);
        C(FA_LIST_UL);
        C(FA_LOCATION_ARROW);
        C(FA_LOCK);
        C(FA_LOCK_OPEN);
        C(FA_LONG_ARROW_ALT_DOWN);
        C(FA_LONG_ARROW_ALT_LEFT);
        C(FA_LONG_ARROW_ALT_RIGHT);
        C(FA_LONG_ARROW_ALT_UP);
        C(FA_LOW_VISION);
        C(FA_LUGGAGE_CART);
        C(FA_MAGIC);
        C(FA_MAGNET);
        C(FA_MAIL_BULK);
        C(FA_MALE);
        C(FA_MAP);
        C(FA_MAP_MARKED);
        C(FA_MAP_MARKED_ALT);
        C(FA_MAP_MARKER);
        C(FA_MAP_MARKER_ALT);
        C(FA_MAP_PIN);
        C(FA_MAP_SIGNS);
        C(FA_MARKER);
        C(FA_MARS);
        C(FA_MARS_DOUBLE);
        C(FA_MARS_STROKE);
        C(FA_MARS_STROKE_H);
        C(FA_MARS_STROKE_V);
        C(FA_MASK);
        C(FA_MEDAL);
        C(FA_MEDKIT);
        C(FA_MEH);
        C(FA_MEH_BLANK);
        C(FA_MEH_ROLLING_EYES);
        C(FA_MEMORY);
        C(FA_MENORAH);
        C(FA_MERCURY);
        C(FA_METEOR);
        C(FA_MICROCHIP);
        C(FA_MICROPHONE);
        C(FA_MICROPHONE_ALT);
        C(FA_MICROPHONE_ALT_SLASH);
        C(FA_MICROPHONE_SLASH);
        C(FA_MICROSCOPE);
        C(FA_MINUS);
        C(FA_MINUS_CIRCLE);
        C(FA_MINUS_SQUARE);
        C(FA_MITTEN);
        C(FA_MOBILE);
        C(FA_MOBILE_ALT);
        C(FA_MONEY_BILL);
        C(FA_MONEY_BILL_ALT);
        C(FA_MONEY_BILL_WAVE);
        C(FA_MONEY_BILL_WAVE_ALT);
        C(FA_MONEY_CHECK);
        C(FA_MONEY_CHECK_ALT);
        C(FA_MONUMENT);
        C(FA_MOON);
        C(FA_MORTAR_PESTLE);
        C(FA_MOSQUE);
        C(FA_MOTORCYCLE);
        C(FA_MOUNTAIN);
        C(FA_MOUSE_POINTER);
        C(FA_MUG_HOT);
        C(FA_MUSIC);
        C(FA_NETWORK_WIRED);
        C(FA_NEUTER);
        C(FA_NEWSPAPER);
        C(FA_NOT_EQUAL);
        C(FA_NOTES_MEDICAL);
        C(FA_OBJECT_GROUP);
        C(FA_OBJECT_UNGROUP);
        C(FA_OIL_CAN);
        C(FA_OM);
        C(FA_OTTER);
        C(FA_OUTDENT);
        C(FA_PAGER);
        C(FA_PAINT_BRUSH);
        C(FA_PAINT_ROLLER);
        C(FA_PALETTE);
        C(FA_PALLET);
        C(FA_PAPER_PLANE);
        C(FA_PAPERCLIP);
        C(FA_PARACHUTE_BOX);
        C(FA_PARAGRAPH);
        C(FA_PARKING);
        C(FA_PASSPORT);
        C(FA_PASTAFARIANISM);
        C(FA_PASTE);
        C(FA_PAUSE);
        C(FA_PAUSE_CIRCLE);
        C(FA_PAW);
        C(FA_PEACE);
        C(FA_PEN);
        C(FA_PEN_ALT);
        C(FA_PEN_FANCY);
        C(FA_PEN_NIB);
        C(FA_PEN_SQUARE);
        C(FA_PENCIL_ALT);
        C(FA_PENCIL_RULER);
        C(FA_PEOPLE_CARRY);
        C(FA_PEPPER_HOT);
        C(FA_PERCENT);
        C(FA_PERCENTAGE);
        C(FA_PERSON_BOOTH);
        C(FA_PHONE);
        C(FA_PHONE_ALT);
        C(FA_PHONE_SLASH);
        C(FA_PHONE_SQUARE);
        C(FA_PHONE_SQUARE_ALT);
        C(FA_PHONE_VOLUME);
        C(FA_PHOTO_VIDEO);
        C(FA_PIGGY_BANK);
        C(FA_PILLS);
        C(FA_PIZZA_SLICE);
        C(FA_PLACE_OF_WORSHIP);
        C(FA_PLANE);
        C(FA_PLANE_ARRIVAL);
        C(FA_PLANE_DEPARTURE);
        C(FA_PLAY);
        C(FA_PLAY_CIRCLE);
        C(FA_PLUG);
        C(FA_PLUS);
        C(FA_PLUS_CIRCLE);
        C(FA_PLUS_SQUARE);
        C(FA_PODCAST);
        C(FA_POLL);
        C(FA_POLL_H);
        C(FA_POO);
        C(FA_POO_STORM);
        C(FA_POOP);
        C(FA_PORTRAIT);
        C(FA_POUND_SIGN);
        C(FA_POWER_OFF);
        C(FA_PRAY);
        C(FA_PRAYING_HANDS);
        C(FA_PRESCRIPTION);
        C(FA_PRESCRIPTION_BOTTLE);
        C(FA_PRESCRIPTION_BOTTLE_ALT);
        C(FA_PRINT);
        C(FA_PROCEDURES);
        C(FA_PROJECT_DIAGRAM);
        C(FA_PUZZLE_PIECE);
        C(FA_QRCODE);
        C(FA_QUESTION);
        C(FA_QUESTION_CIRCLE);
        C(FA_QUIDDITCH);
        C(FA_QUOTE_LEFT);
        C(FA_QUOTE_RIGHT);
        C(FA_QURAN);
        C(FA_RADIATION);
        C(FA_RADIATION_ALT);
        C(FA_RAINBOW);
        C(FA_RANDOM);
        C(FA_RECEIPT);
        C(FA_RECYCLE);
        C(FA_REDO);
        C(FA_REDO_ALT);
        C(FA_REGISTERED);
        C(FA_REMOVE_FORMAT);
        C(FA_REPLY);
        C(FA_REPLY_ALL);
        C(FA_REPUBLICAN);
        C(FA_RESTROOM);
        C(FA_RETWEET);
        C(FA_RIBBON);
        C(FA_RING);
        C(FA_ROAD);
        C(FA_ROBOT);
        C(FA_ROCKET);
        C(FA_ROUTE);
        C(FA_RSS);
        C(FA_RSS_SQUARE);
        C(FA_RUBLE_SIGN);
        C(FA_RULER);
        C(FA_RULER_COMBINED);
        C(FA_RULER_HORIZONTAL);
        C(FA_RULER_VERTICAL);
        C(FA_RUNNING);
        C(FA_RUPEE_SIGN);
        C(FA_SAD_CRY);
        C(FA_SAD_TEAR);
        C(FA_SATELLITE);
        C(FA_SATELLITE_DISH);
        C(FA_SAVE);
        C(FA_SCHOOL);
        C(FA_SCREWDRIVER);
        C(FA_SCROLL);
        C(FA_SD_CARD);
        C(FA_SEARCH);
        C(FA_SEARCH_DOLLAR);
        C(FA_SEARCH_LOCATION);
        C(FA_SEARCH_MINUS);
        C(FA_SEARCH_PLUS);
        C(FA_SEEDLING);
        C(FA_SERVER);
        C(FA_SHAPES);
        C(FA_SHARE);
        C(FA_SHARE_ALT);
        C(FA_SHARE_ALT_SQUARE);
        C(FA_SHARE_SQUARE);
        C(FA_SHEKEL_SIGN);
        C(FA_SHIELD_ALT);
        C(FA_SHIP);
        C(FA_SHIPPING_FAST);
        C(FA_SHOE_PRINTS);
        C(FA_SHOPPING_BAG);
        C(FA_SHOPPING_BASKET);
        C(FA_SHOPPING_CART);
        C(FA_SHOWER);
        C(FA_SHUTTLE_VAN);
        C(FA_SIGN);
        C(FA_SIGN_IN_ALT);
        C(FA_SIGN_LANGUAGE);
        C(FA_SIGN_OUT_ALT);
        C(FA_SIGNAL);
        C(FA_SIGNATURE);
        C(FA_SIM_CARD);
        C(FA_SITEMAP);
        C(FA_SKATING);
        C(FA_SKIING);
        C(FA_SKIING_NORDIC);
        C(FA_SKULL);
        C(FA_SKULL_CROSSBONES);
        C(FA_SLASH);
        C(FA_SLEIGH);
        C(FA_SLIDERS_H);
        C(FA_SMILE);
        C(FA_SMILE_BEAM);
        C(FA_SMILE_WINK);
        C(FA_SMOG);
        C(FA_SMOKING);
        C(FA_SMOKING_BAN);
        C(FA_SMS);
        C(FA_SNOWBOARDING);
        C(FA_SNOWFLAKE);
        C(FA_SNOWMAN);
        C(FA_SNOWPLOW);
        C(FA_SOCKS);
        C(FA_SOLAR_PANEL);
        C(FA_SORT);
        C(FA_SORT_ALPHA_DOWN);
        C(FA_SORT_ALPHA_DOWN_ALT);
        C(FA_SORT_ALPHA_UP);
        C(FA_SORT_ALPHA_UP_ALT);
        C(FA_SORT_AMOUNT_DOWN);
        C(FA_SORT_AMOUNT_DOWN_ALT);
        C(FA_SORT_AMOUNT_UP);
        C(FA_SORT_AMOUNT_UP_ALT);
        C(FA_SORT_DOWN);
        C(FA_SORT_NUMERIC_DOWN);
        C(FA_SORT_NUMERIC_DOWN_ALT);
        C(FA_SORT_NUMERIC_UP);
        C(FA_SORT_NUMERIC_UP_ALT);
        C(FA_SORT_UP);
        C(FA_SPA);
        C(FA_SPACE_SHUTTLE);
        C(FA_SPELL_CHECK);
        C(FA_SPIDER);
        C(FA_SPINNER);
        C(FA_SPLOTCH);
        C(FA_SPRAY_CAN);
        C(FA_SQUARE);
        C(FA_SQUARE_FULL);
        C(FA_SQUARE_ROOT_ALT);
        C(FA_STAMP);
        C(FA_STAR);
        C(FA_STAR_AND_CRESCENT);
        C(FA_STAR_HALF);
        C(FA_STAR_HALF_ALT);
        C(FA_STAR_OF_DAVID);
        C(FA_STAR_OF_LIFE);
        C(FA_STEP_BACKWARD);
        C(FA_STEP_FORWARD);
        C(FA_STETHOSCOPE);
        C(FA_STICKY_NOTE);
        C(FA_STOP);
        C(FA_STOP_CIRCLE);
        C(FA_STOPWATCH);
        C(FA_STORE);
        C(FA_STORE_ALT);
        C(FA_STREAM);
        C(FA_STREET_VIEW);
        C(FA_STRIKETHROUGH);
        C(FA_STROOPWAFEL);
        C(FA_SUBSCRIPT);
        C(FA_SUBWAY);
        C(FA_SUITCASE);
        C(FA_SUITCASE_ROLLING);
        C(FA_SUN);
        C(FA_SUPERSCRIPT);
        C(FA_SURPRISE);
        C(FA_SWATCHBOOK);
        C(FA_SWIMMER);
        C(FA_SWIMMING_POOL);
        C(FA_SYNAGOGUE);
        C(FA_SYNC);
        C(FA_SYNC_ALT);
        C(FA_SYRINGE);
        C(FA_TABLE);
        C(FA_TABLE_TENNIS);
        C(FA_TABLET);
        C(FA_TABLET_ALT);
        C(FA_TABLETS);
        C(FA_TACHOMETER_ALT);
        C(FA_TAG);
        C(FA_TAGS);
        C(FA_TAPE);
        C(FA_TASKS);
        C(FA_TAXI);
        C(FA_TEETH);
        C(FA_TEETH_OPEN);
        C(FA_TEMPERATURE_HIGH);
        C(FA_TEMPERATURE_LOW);
        C(FA_TENGE);
        C(FA_TERMINAL);
        C(FA_TEXT_HEIGHT);
        C(FA_TEXT_WIDTH);
        C(FA_TH);
        C(FA_TH_LARGE);
        C(FA_TH_LIST);
        C(FA_THEATER_MASKS);
        C(FA_THERMOMETER);
        C(FA_THERMOMETER_EMPTY);
        C(FA_THERMOMETER_FULL);
        C(FA_THERMOMETER_HALF);
        C(FA_THERMOMETER_QUARTER);
        C(FA_THERMOMETER_THREE_QUARTERS);
        C(FA_THUMBS_DOWN);
        C(FA_THUMBS_UP);
        C(FA_THUMBTACK);
        C(FA_TICKET_ALT);
        C(FA_TIMES);
        C(FA_TIMES_CIRCLE);
        C(FA_TINT);
        C(FA_TINT_SLASH);
        C(FA_TIRED);
        C(FA_TOGGLE_OFF);
        C(FA_TOGGLE_ON);
        C(FA_TOILET);
        C(FA_TOILET_PAPER);
        C(FA_TOOLBOX);
        C(FA_TOOLS);
        C(FA_TOOTH);
        C(FA_TORAH);
        C(FA_TORII_GATE);
        C(FA_TRACTOR);
        C(FA_TRADEMARK);
        C(FA_TRAFFIC_LIGHT);
        C(FA_TRAIN);
        C(FA_TRAM);
        C(FA_TRANSGENDER);
        C(FA_TRANSGENDER_ALT);
        C(FA_TRASH);
        C(FA_TRASH_ALT);
        C(FA_TRASH_RESTORE);
        C(FA_TRASH_RESTORE_ALT);
        C(FA_TREE);
        C(FA_TROPHY);
        C(FA_TRUCK);
        C(FA_TRUCK_LOADING);
        C(FA_TRUCK_MONSTER);
        C(FA_TRUCK_MOVING);
        C(FA_TRUCK_PICKUP);
        C(FA_TSHIRT);
        C(FA_TTY);
        C(FA_TV);
        C(FA_UMBRELLA);
        C(FA_UMBRELLA_BEACH);
        C(FA_UNDERLINE);
        C(FA_UNDO);
        C(FA_UNDO_ALT);
        C(FA_UNIVERSAL_ACCESS);
        C(FA_UNIVERSITY);
        C(FA_UNLINK);
        C(FA_UNLOCK);
        C(FA_UNLOCK_ALT);
        C(FA_UPLOAD);
        C(FA_USER);
        C(FA_USER_ALT);
        C(FA_USER_ALT_SLASH);
        C(FA_USER_ASTRONAUT);
        C(FA_USER_CHECK);
        C(FA_USER_CIRCLE);
        C(FA_USER_CLOCK);
        C(FA_USER_COG);
        C(FA_USER_EDIT);
        C(FA_USER_FRIENDS);
        C(FA_USER_GRADUATE);
        C(FA_USER_INJURED);
        C(FA_USER_LOCK);
        C(FA_USER_MD);
        C(FA_USER_MINUS);
        C(FA_USER_NINJA);
        C(FA_USER_NURSE);
        C(FA_USER_PLUS);
        C(FA_USER_SECRET);
        C(FA_USER_SHIELD);
        C(FA_USER_SLASH);
        C(FA_USER_TAG);
        C(FA_USER_TIE);
        C(FA_USER_TIMES);
        C(FA_USERS);
        C(FA_USERS_COG);
        C(FA_UTENSIL_SPOON);
        C(FA_UTENSILS);
        C(FA_VECTOR_SQUARE);
        C(FA_VENUS);
        C(FA_VENUS_DOUBLE);
        C(FA_VENUS_MARS);
        C(FA_VIAL);
        C(FA_VIALS);
        C(FA_VIDEO);
        C(FA_VIDEO_SLASH);
        C(FA_VIHARA);
        C(FA_VOICEMAIL);
        C(FA_VOLLEYBALL_BALL);
        C(FA_VOLUME_DOWN);
        C(FA_VOLUME_MUTE);
        C(FA_VOLUME_OFF);
        C(FA_VOLUME_UP);
        C(FA_VOTE_YEA);
        C(FA_VR_CARDBOARD);
        C(FA_WALKING);
        C(FA_WALLET);
        C(FA_WAREHOUSE);
        C(FA_WATER);
        C(FA_WAVE_SQUARE);
        C(FA_WEIGHT);
        C(FA_WEIGHT_HANGING);
        C(FA_WHEELCHAIR);
        C(FA_WIFI);
        C(FA_WIND);
        C(FA_WINDOW_CLOSE);
        C(FA_WINDOW_MAXIMIZE);
        C(FA_WINDOW_MINIMIZE);
        C(FA_WINDOW_RESTORE);
        C(FA_WINE_BOTTLE);
        C(FA_WINE_GLASS);
        C(FA_WINE_GLASS_ALT);
        C(FA_WON_SIGN);
        C(FA_WRENCH);
        C(FA_X_RAY);
        C(FA_YEN_SIGN);
        C(FA_YIN_YANG);
        #undef C
    }
}

#endif
