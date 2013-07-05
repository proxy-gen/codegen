/**
 * Stub Implementation
 * By default android loads a Stub
 * 
 */
package android.net;

import java.io.File;
import java.util.List;
import java.util.Set;

public abstract class Uri {

    private Uri() {}

    public abstract boolean isHierarchical();

    public boolean isOpaque() {
        return false;
    }

    public abstract boolean isRelative();

    public boolean isAbsolute() {
        return false;
    }

    public abstract String getScheme();

    public abstract String getSchemeSpecificPart();

    public abstract String getEncodedSchemeSpecificPart();

    public abstract String getAuthority();

    public abstract String getEncodedAuthority();

    public abstract String getUserInfo();

    public abstract String getEncodedUserInfo();

    public abstract String getHost();

    public abstract int getPort();

    public abstract String getPath();

    public abstract String getEncodedPath();

    public abstract String getQuery();

    public abstract String getEncodedQuery();

    public abstract String getFragment();

    public abstract String getEncodedFragment();

    public abstract List<String> getPathSegments();

    public abstract String getLastPathSegment();

    public boolean equals(Object o) {
        return false;
    }

    public int hashCode() {
        return toString().hashCode();
    }

    public int compareTo(Uri other) {
        return -1;
    }

    public abstract String toString();

    public String toSafeString() {
        StringBuilder builder = new StringBuilder(64);
        return builder.toString();
    }

    public static Uri parse(String uriString) {
        return null;
    }

    public static Uri fromFile(File file) {
        return null;
    }

    public static Uri fromParts(String scheme, String ssp,
            String fragment) {
        return null;
    }

    public Set<String> getQueryParameterNames() {
        return null;
    }

    public List<String> getQueryParameters(String key) {
        return null;
    }

    public String getQueryParameter(String key) {
        return null;
    }

    public boolean getBooleanQueryParameter(String key, boolean defaultValue) {
        return false;
    }

    public Uri normalizeScheme() {
        return null;
    }

    public static String encode(String s) {
        return encode(s, null);
    }

    public static String encode(String s, String allow) {
        return null;
    }

    public static String decode(String s) {
    	return null;
    }

    public static Uri withAppendedPath(Uri baseUri, String pathSegment) {
    	return null;
    }

    public Uri getCanonicalUri() {
        return null;
    }
}
