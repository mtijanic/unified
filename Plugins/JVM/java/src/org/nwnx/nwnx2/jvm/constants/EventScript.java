package org.nwnx.nwnx2.jvm.constants;

/**
 * This class contains all unique constants beginning with "EVENT_SCRIPT".
 * Non-distinct keys are filtered; only the LAST appearing was
 * kept.
*/
public final class EventScript {
  private EventScript() {}

  public final static int AREAOFEFFECT_ON_HEARTBEAT = 11000;
  public final static int AREAOFEFFECT_ON_OBJECT_ENTER = 11002;
  public final static int AREAOFEFFECT_ON_OBJECT_EXIT = 11003;
  public final static int AREAOFEFFECT_ON_USER_DEFINED_EVENT = 11001;
  public final static int AREA_ON_ENTER = 4002;
  public final static int AREA_ON_EXIT = 4003;
  public final static int AREA_ON_HEARTBEAT = 4000;
  public final static int AREA_ON_USER_DEFINED_EVENT = 4001;
  public final static int CREATURE_ON_BLOCKED_BY_DOOR = 5012;
  public final static int CREATURE_ON_DAMAGED = 5004;
  public final static int CREATURE_ON_DEATH = 5010;
  public final static int CREATURE_ON_DIALOGUE = 5007;
  public final static int CREATURE_ON_DISTURBED = 5005;
  public final static int CREATURE_ON_END_COMBATROUND = 5006;
  public final static int CREATURE_ON_HEARTBEAT = 5000;
  public final static int CREATURE_ON_MELEE_ATTACKED = 5003;
  public final static int CREATURE_ON_NOTICE = 5001;
  public final static int CREATURE_ON_RESTED = 5009;
  public final static int CREATURE_ON_SPAWN_IN = 5008;
  public final static int CREATURE_ON_SPELLCASTAT = 5002;
  public final static int CREATURE_ON_USER_DEFINED_EVENT = 5011;
  public final static int DOOR_ON_CLICKED = 10012;
  public final static int DOOR_ON_CLOSE = 10001;
  public final static int DOOR_ON_DAMAGE = 10002;
  public final static int DOOR_ON_DEATH = 10003;
  public final static int DOOR_ON_DIALOGUE = 10013;
  public final static int DOOR_ON_DISARM = 10004;
  public final static int DOOR_ON_FAIL_TO_OPEN = 10014;
  public final static int DOOR_ON_HEARTBEAT = 10005;
  public final static int DOOR_ON_LOCK = 10006;
  public final static int DOOR_ON_MELEE_ATTACKED = 10007;
  public final static int DOOR_ON_OPEN = 10000;
  public final static int DOOR_ON_SPELLCASTAT = 10008;
  public final static int DOOR_ON_TRAPTRIGGERED = 10009;
  public final static int DOOR_ON_UNLOCK = 10010;
  public final static int DOOR_ON_USERDEFINED = 10011;
  public final static int ENCOUNTER_ON_ENCOUNTER_EXHAUSTED = 13003;
  public final static int ENCOUNTER_ON_HEARTBEAT = 13002;
  public final static int ENCOUNTER_ON_OBJECT_ENTER = 13000;
  public final static int ENCOUNTER_ON_OBJECT_EXIT = 13001;
  public final static int ENCOUNTER_ON_USER_DEFINED_EVENT = 13004;
  public final static int MODULE_ON_ACQUIRE_ITEM = 3007;
  public final static int MODULE_ON_ACTIVATE_ITEM = 3006;
  public final static int MODULE_ON_CLIENT_ENTER = 3004;
  public final static int MODULE_ON_CLIENT_EXIT = 3005;
  public final static int MODULE_ON_EQUIP_ITEM = 3015;
  public final static int MODULE_ON_HEARTBEAT = 3000;
  public final static int MODULE_ON_LOSE_ITEM = 3008;
  public final static int MODULE_ON_MODULE_LOAD = 3002;
  public final static int MODULE_ON_MODULE_START = 3003;
  public final static int MODULE_ON_PLAYER_CANCEL_CUTSCENE = 3014;
  public final static int MODULE_ON_PLAYER_CHAT = 3017;
  public final static int MODULE_ON_PLAYER_DEATH = 3009;
  public final static int MODULE_ON_PLAYER_DYING = 3010;
  public final static int MODULE_ON_PLAYER_LEVEL_UP = 3013;
  public final static int MODULE_ON_PLAYER_REST = 3012;
  public final static int MODULE_ON_RESPAWN_BUTTON_PRESSED = 3011;
  public final static int MODULE_ON_UNEQUIP_ITEM = 3016;
  public final static int MODULE_ON_USER_DEFINED_EVENT = 3001;
  public final static int PLACEABLE_ON_CLOSED = 9000;
  public final static int PLACEABLE_ON_DAMAGED = 9001;
  public final static int PLACEABLE_ON_DEATH = 9002;
  public final static int PLACEABLE_ON_DIALOGUE = 9014;
  public final static int PLACEABLE_ON_DISARM = 9003;
  public final static int PLACEABLE_ON_HEARTBEAT = 9004;
  public final static int PLACEABLE_ON_INVENTORYDISTURBED = 9005;
  public final static int PLACEABLE_ON_LEFT_CLICK = 9015;
  public final static int PLACEABLE_ON_LOCK = 9006;
  public final static int PLACEABLE_ON_MELEEATTACKED = 9007;
  public final static int PLACEABLE_ON_OPEN = 9008;
  public final static int PLACEABLE_ON_SPELLCASTAT = 9009;
  public final static int PLACEABLE_ON_TRAPTRIGGERED = 9010;
  public final static int PLACEABLE_ON_UNLOCK = 9011;
  public final static int PLACEABLE_ON_USED = 9012;
  public final static int PLACEABLE_ON_USER_DEFINED_EVENT = 9013;
  public final static int STORE_ON_CLOSE = 14001;
  public final static int STORE_ON_OPEN = 14000;
  public final static int TRIGGER_ON_CLICKED = 7006;
  public final static int TRIGGER_ON_DISARMED = 7005;
  public final static int TRIGGER_ON_HEARTBEAT = 7000;
  public final static int TRIGGER_ON_OBJECT_ENTER = 7001;
  public final static int TRIGGER_ON_OBJECT_EXIT = 7002;
  public final static int TRIGGER_ON_TRAPTRIGGERED = 7004;
  public final static int TRIGGER_ON_USER_DEFINED_EVENT = 7003;

  public static String nameOf(int value) {
    if (value == 11000) return "EventScript.AREAOFEFFECT_ON_HEARTBEAT";
    if (value == 11002) return "EventScript.AREAOFEFFECT_ON_OBJECT_ENTER";
    if (value == 11003) return "EventScript.AREAOFEFFECT_ON_OBJECT_EXIT";
    if (value == 11001) return "EventScript.AREAOFEFFECT_ON_USER_DEFINED_EVENT";
    if (value == 4002) return "EventScript.AREA_ON_ENTER";
    if (value == 4003) return "EventScript.AREA_ON_EXIT";
    if (value == 4000) return "EventScript.AREA_ON_HEARTBEAT";
    if (value == 4001) return "EventScript.AREA_ON_USER_DEFINED_EVENT";
    if (value == 5012) return "EventScript.CREATURE_ON_BLOCKED_BY_DOOR";
    if (value == 5004) return "EventScript.CREATURE_ON_DAMAGED";
    if (value == 5010) return "EventScript.CREATURE_ON_DEATH";
    if (value == 5007) return "EventScript.CREATURE_ON_DIALOGUE";
    if (value == 5005) return "EventScript.CREATURE_ON_DISTURBED";
    if (value == 5006) return "EventScript.CREATURE_ON_END_COMBATROUND";
    if (value == 5000) return "EventScript.CREATURE_ON_HEARTBEAT";
    if (value == 5003) return "EventScript.CREATURE_ON_MELEE_ATTACKED";
    if (value == 5001) return "EventScript.CREATURE_ON_NOTICE";
    if (value == 5009) return "EventScript.CREATURE_ON_RESTED";
    if (value == 5008) return "EventScript.CREATURE_ON_SPAWN_IN";
    if (value == 5002) return "EventScript.CREATURE_ON_SPELLCASTAT";
    if (value == 5011) return "EventScript.CREATURE_ON_USER_DEFINED_EVENT";
    if (value == 10012) return "EventScript.DOOR_ON_CLICKED";
    if (value == 10001) return "EventScript.DOOR_ON_CLOSE";
    if (value == 10002) return "EventScript.DOOR_ON_DAMAGE";
    if (value == 10003) return "EventScript.DOOR_ON_DEATH";
    if (value == 10013) return "EventScript.DOOR_ON_DIALOGUE";
    if (value == 10004) return "EventScript.DOOR_ON_DISARM";
    if (value == 10014) return "EventScript.DOOR_ON_FAIL_TO_OPEN";
    if (value == 10005) return "EventScript.DOOR_ON_HEARTBEAT";
    if (value == 10006) return "EventScript.DOOR_ON_LOCK";
    if (value == 10007) return "EventScript.DOOR_ON_MELEE_ATTACKED";
    if (value == 10000) return "EventScript.DOOR_ON_OPEN";
    if (value == 10008) return "EventScript.DOOR_ON_SPELLCASTAT";
    if (value == 10009) return "EventScript.DOOR_ON_TRAPTRIGGERED";
    if (value == 10010) return "EventScript.DOOR_ON_UNLOCK";
    if (value == 10011) return "EventScript.DOOR_ON_USERDEFINED";
    if (value == 13003) return "EventScript.ENCOUNTER_ON_ENCOUNTER_EXHAUSTED";
    if (value == 13002) return "EventScript.ENCOUNTER_ON_HEARTBEAT";
    if (value == 13000) return "EventScript.ENCOUNTER_ON_OBJECT_ENTER";
    if (value == 13001) return "EventScript.ENCOUNTER_ON_OBJECT_EXIT";
    if (value == 13004) return "EventScript.ENCOUNTER_ON_USER_DEFINED_EVENT";
    if (value == 3007) return "EventScript.MODULE_ON_ACQUIRE_ITEM";
    if (value == 3006) return "EventScript.MODULE_ON_ACTIVATE_ITEM";
    if (value == 3004) return "EventScript.MODULE_ON_CLIENT_ENTER";
    if (value == 3005) return "EventScript.MODULE_ON_CLIENT_EXIT";
    if (value == 3015) return "EventScript.MODULE_ON_EQUIP_ITEM";
    if (value == 3000) return "EventScript.MODULE_ON_HEARTBEAT";
    if (value == 3008) return "EventScript.MODULE_ON_LOSE_ITEM";
    if (value == 3002) return "EventScript.MODULE_ON_MODULE_LOAD";
    if (value == 3003) return "EventScript.MODULE_ON_MODULE_START";
    if (value == 3014) return "EventScript.MODULE_ON_PLAYER_CANCEL_CUTSCENE";
    if (value == 3017) return "EventScript.MODULE_ON_PLAYER_CHAT";
    if (value == 3009) return "EventScript.MODULE_ON_PLAYER_DEATH";
    if (value == 3010) return "EventScript.MODULE_ON_PLAYER_DYING";
    if (value == 3013) return "EventScript.MODULE_ON_PLAYER_LEVEL_UP";
    if (value == 3012) return "EventScript.MODULE_ON_PLAYER_REST";
    if (value == 3011) return "EventScript.MODULE_ON_RESPAWN_BUTTON_PRESSED";
    if (value == 3016) return "EventScript.MODULE_ON_UNEQUIP_ITEM";
    if (value == 3001) return "EventScript.MODULE_ON_USER_DEFINED_EVENT";
    if (value == 9000) return "EventScript.PLACEABLE_ON_CLOSED";
    if (value == 9001) return "EventScript.PLACEABLE_ON_DAMAGED";
    if (value == 9002) return "EventScript.PLACEABLE_ON_DEATH";
    if (value == 9014) return "EventScript.PLACEABLE_ON_DIALOGUE";
    if (value == 9003) return "EventScript.PLACEABLE_ON_DISARM";
    if (value == 9004) return "EventScript.PLACEABLE_ON_HEARTBEAT";
    if (value == 9005) return "EventScript.PLACEABLE_ON_INVENTORYDISTURBED";
    if (value == 9015) return "EventScript.PLACEABLE_ON_LEFT_CLICK";
    if (value == 9006) return "EventScript.PLACEABLE_ON_LOCK";
    if (value == 9007) return "EventScript.PLACEABLE_ON_MELEEATTACKED";
    if (value == 9008) return "EventScript.PLACEABLE_ON_OPEN";
    if (value == 9009) return "EventScript.PLACEABLE_ON_SPELLCASTAT";
    if (value == 9010) return "EventScript.PLACEABLE_ON_TRAPTRIGGERED";
    if (value == 9011) return "EventScript.PLACEABLE_ON_UNLOCK";
    if (value == 9012) return "EventScript.PLACEABLE_ON_USED";
    if (value == 9013) return "EventScript.PLACEABLE_ON_USER_DEFINED_EVENT";
    if (value == 14001) return "EventScript.STORE_ON_CLOSE";
    if (value == 14000) return "EventScript.STORE_ON_OPEN";
    if (value == 7006) return "EventScript.TRIGGER_ON_CLICKED";
    if (value == 7005) return "EventScript.TRIGGER_ON_DISARMED";
    if (value == 7000) return "EventScript.TRIGGER_ON_HEARTBEAT";
    if (value == 7001) return "EventScript.TRIGGER_ON_OBJECT_ENTER";
    if (value == 7002) return "EventScript.TRIGGER_ON_OBJECT_EXIT";
    if (value == 7004) return "EventScript.TRIGGER_ON_TRAPTRIGGERED";
    if (value == 7003) return "EventScript.TRIGGER_ON_USER_DEFINED_EVENT";
    return "EventScript.(not found: " + value + ")";
  }

  public static String nameOf(float value) {
    return "EventScript.(not found: " + value + ")";
  }

  public static String nameOf(String value) {
    return "EventScript.(not found: " + value + ")";
  }
}
