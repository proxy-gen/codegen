package com.zynga.sdk.cxx;

import java.lang.reflect.Array;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

import org.json.JSONException;
import org.json.JSONObject;

import android.util.Log;

import android.app.Notification;
import android.app.NotificationManager;
import android.content.Context;
import android.app.PendingIntent;
import android.net.Uri;

public class CXXUtil {

	private static final String TAG = "CXXUtil";
	
	@SuppressWarnings("unchecked")
	public static Map<String, String> convertFromJSONToMap(String str)
	{
		Map<String, String> map = new HashMap<String,String>();
		if (isNullOrEmpty(str) == false) {
			try {
				JSONObject json = new JSONObject(str);
				Iterator<String> keys = json.keys();
				while (keys.hasNext())
				{
					String key = keys.next();
					String val = json.getString(key);
					map.put(key, val);
				}
			} catch (JSONException e) {
				Log.e(TAG, "convertFromCXX to org.json.JSONArray " + str);
			}
		}
		return map;
	} 

	public static void postNotificationToStatusBar(Context context, 
											int notificationId, 
											int flags,
											int defaults,
											int smallIconId,
											int ledARGB,
											int ledOffMS,
											int ledOnMS,
											int numberOfEventsInNotification,
											int priorityOfNotification,
											String sound,
											String tickerText, 
											PendingIntent pendingIntent)
	{
		Notification notification = new Notification(smallIconId, tickerText, System.currentTimeMillis());
		notification.setLatestEventInfo(context, "", tickerText, pendingIntent);

		notification.defaults = defaults;
		notification.flags = flags;
		notification.ledARGB = ledARGB;
		notification.ledOffMS = ledOffMS;
		notification.ledOnMS = ledOnMS;
		notification.number = numberOfEventsInNotification;
		// TODO: uncomment when min SDK Level >= API Level 16
		//notification.priority = priorityOfNotification;
		notification.sound = Uri.parse(sound);

		NotificationManager notificationManager = (NotificationManager)context.getSystemService(Context.NOTIFICATION_SERVICE);
        notificationManager.notify(notificationId, notification);

        Log.v(TAG, "postNotificationToStatusBar posted notificationId " + notificationId);
	}

	
	@SuppressWarnings("rawtypes")
	protected static boolean isNullOrEmpty(Object obj) 
	{
		if (obj == null) {
			return true;
		}
		if (obj instanceof String) {
			if (((String) obj).length() == 0) {
				return true;
			}
		}
		if (obj instanceof Collection) {
			if (((Collection) obj).size() == 0) {
				return true;
			}
		}
		if (obj instanceof Map) {
			if (((Map) obj).size() == 0) {
				return true;
			}
		}
		if (isArray(obj)) {
			if (Array.getLength(obj) == 0) {
				return true;
			}
		}
		return false;
	}
	
	protected static boolean isArray(Object obj) {
		if (obj.getClass().isArray()) {
			return true;
		}
		return false;
	}
}
