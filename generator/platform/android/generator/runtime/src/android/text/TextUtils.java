/*
 * Copyright (C) 2006 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// stub impl
// rvergis@zynga.com

package android.text;

import java.util.Iterator;
import java.util.Locale;
import java.util.regex.Pattern;

import android.os.Parcel;
import android.os.Parcelable;
import android.util.Printer;

public class TextUtils {

    private TextUtils() { /* cannot be instantiated */ }

    public static void getChars(CharSequence s, int start, int end,
                                char[] dest, int destoff) {
    }

    public static int indexOf(CharSequence s, char ch) {
        return -1;
    }

    public static int indexOf(CharSequence s, char ch, int start) {
        return -1;
    }

    public static int indexOf(CharSequence s, char ch, int start, int end) {
        return -1;
    }

    public static int lastIndexOf(CharSequence s, char ch) {
        return -1;
    }

    public static int lastIndexOf(CharSequence s, char ch, int last) {
        return -1;
    }

    public static int lastIndexOf(CharSequence s, char ch,
                                  int start, int last) {
        return -1;
    }

    public static int indexOf(CharSequence s, CharSequence needle) {
        return -1;
    }

    public static int indexOf(CharSequence s, CharSequence needle, int start) {
        return -1;
    }

    public static int indexOf(CharSequence s, CharSequence needle,
                              int start, int end) {
        return -1;
    }

    public static boolean regionMatches(CharSequence one, int toffset,
                                        CharSequence two, int ooffset,
                                        int len) {
        return false;
    }

    public static String substring(CharSequence source, int start, int end) {
        return null;
    }

    public static CharSequence join(Iterable<CharSequence> list) {
        return null;
    }

    public static String join(CharSequence delimiter, Object[] tokens) {
        return null;
    }

    public static String join(CharSequence delimiter, Iterable tokens) {
        return null;
    }

    public static String[] split(String text, String expression) {
        return null;
    }

    public static String[] split(String text, Pattern pattern) {
        return null;
    }

    public interface StringSplitter extends Iterable<String> {
        public void setString(String string);
    }

    public static class SimpleStringSplitter implements StringSplitter, Iterator<String> {

        /**
         * Initializes the splitter. setString may be called later.
         * @param delimiter the delimeter on which to split
         */
        public SimpleStringSplitter(char delimiter) {
        }

        /**
         * Sets the string to split
         * @param string the string to split
         */
        public void setString(String string) {
        }

        public Iterator<String> iterator() {
            return this;
        }

        public boolean hasNext() {
            return false;
        }

        public String next() {
            return null;
        }

        public void remove() {
            throw new UnsupportedOperationException();
        }
    }

    public static CharSequence stringOrSpannedString(CharSequence source) {
        return null;
    }

    public static boolean isEmpty(CharSequence str) {
        return false;
    }

    public static int getTrimmedLength(CharSequence s) {
        return -1;
    }

    public static boolean equals(CharSequence a, CharSequence b) {
        return false;
    }

    public static CharSequence getReverse(CharSequence source,
                                          int start, int end) {
        return null;
    }

    /** @hide */
    public static final int ALIGNMENT_SPAN = 1;
    /** @hide */
    public static final int FOREGROUND_COLOR_SPAN = 2;
    /** @hide */
    public static final int RELATIVE_SIZE_SPAN = 3;
    /** @hide */
    public static final int SCALE_X_SPAN = 4;
    /** @hide */
    public static final int STRIKETHROUGH_SPAN = 5;
    /** @hide */
    public static final int UNDERLINE_SPAN = 6;
    /** @hide */
    public static final int STYLE_SPAN = 7;
    /** @hide */
    public static final int BULLET_SPAN = 8;
    /** @hide */
    public static final int QUOTE_SPAN = 9;
    /** @hide */
    public static final int LEADING_MARGIN_SPAN = 10;
    /** @hide */
    public static final int URL_SPAN = 11;
    /** @hide */
    public static final int BACKGROUND_COLOR_SPAN = 12;
    /** @hide */
    public static final int TYPEFACE_SPAN = 13;
    /** @hide */
    public static final int SUPERSCRIPT_SPAN = 14;
    /** @hide */
    public static final int SUBSCRIPT_SPAN = 15;
    /** @hide */
    public static final int ABSOLUTE_SIZE_SPAN = 16;
    /** @hide */
    public static final int TEXT_APPEARANCE_SPAN = 17;
    /** @hide */
    public static final int ANNOTATION = 18;
    /** @hide */
    public static final int SUGGESTION_SPAN = 19;
    /** @hide */
    public static final int SPELL_CHECK_SPAN = 20;
    /** @hide */
    public static final int SUGGESTION_RANGE_SPAN = 21;
    /** @hide */
    public static final int EASY_EDIT_SPAN = 22;
    /** @hide */
    public static final int LOCALE_SPAN = 23;

    public static void writeToParcel(CharSequence cs, Parcel p,
            int parcelableFlags) {
    }

    public static final Parcelable.Creator<CharSequence> CHAR_SEQUENCE_CREATOR
            = new Parcelable.Creator<CharSequence>() {
        public CharSequence createFromParcel(Parcel p) {
            return null;
        }

        public CharSequence[] newArray(int size)
        {
            return null;
        }
    };

    public static void dumpSpans(CharSequence cs, Printer printer, String prefix) {
        
    }

    public static CharSequence replace(CharSequence template,
                                       String[] sources,
                                       CharSequence[] destinations) {
        return null;
    }

    public static CharSequence expandTemplate(CharSequence template,
                                              CharSequence... values) {
        return null;
    }

    public static int getOffsetBefore(CharSequence text, int offset) {
        return -1;
    }

    public static int getOffsetAfter(CharSequence text, int offset) {
        return -1;
    }

    public static void copySpansFrom(Spanned source, int start, int end,
                                     Class kind,
                                     Spannable dest, int destoff) {
    }

    public enum TruncateAt {
        START,
        MIDDLE,
        END,
        MARQUEE,
        /**
         * @hide
         */
        END_SMALL
    }

    public interface EllipsizeCallback {
        public void ellipsized(int start, int end);
    }

    public static CharSequence ellipsize(CharSequence text,
                                         TextPaint p,
                                         float avail, TruncateAt where) {
        return null;
    }

    public static CharSequence ellipsize(CharSequence text,
                                         TextPaint paint,
                                         float avail, TruncateAt where,
                                         boolean preserveLength,
                                         EllipsizeCallback callback) {
    	return null;
    }

    private static final char FIRST_RIGHT_TO_LEFT = '\u0590';

    /* package */
    static boolean doesNotNeedBidi(CharSequence s, int start, int end) {
        for (int i = start; i < end; i++) {
            if (s.charAt(i) >= FIRST_RIGHT_TO_LEFT) {
                return false;
            }
        }
        return true;
    }

    /* package */
    static boolean doesNotNeedBidi(char[] text, int start, int len) {
        return false;
    }

    /* package */ static char[] obtain(int len) {

        return null;
    }

    /* package */ static void recycle(char[] temp) {
    }

    public static String htmlEncode(String s) {
        return null;
    }

    public static CharSequence concat(CharSequence... text) {
        return null;
    }

    public static boolean isGraphic(CharSequence str) {
        return false;
    }

    public static boolean isGraphic(char c) {
    	return false;
    }

    public static boolean isDigitsOnly(CharSequence str) {
        return false;
    }

    /**
     * @hide
     */
    public static boolean isPrintableAscii(final char c) {
    	return false;
    }

    /**
     * @hide
     */
    public static boolean isPrintableAsciiOnly(final CharSequence str) {
        return false;
    }

    public static final int CAP_MODE_CHARACTERS
            = InputType.TYPE_TEXT_FLAG_CAP_CHARACTERS;

    public static final int CAP_MODE_WORDS
            = InputType.TYPE_TEXT_FLAG_CAP_WORDS;

    public static final int CAP_MODE_SENTENCES
            = InputType.TYPE_TEXT_FLAG_CAP_SENTENCES;

    public static int getCapsMode(CharSequence cs, int off, int reqModes) {
        return 0;
    }

    public static boolean delimitedStringContains(
            String delimitedString, char delimiter, String item) {
        return false;
    }

    public static <T> T[] removeEmptySpans(T[] spans, Spanned spanned, Class<T> klass) {
        return null;
    }

    public static long packRangeInLong(int start, int end) {
        return -1L;
    }

    public static int unpackRangeStartFromLong(long range) {
        return -1;
    }

    public static int unpackRangeEndFromLong(long range) {
        return -1;
    }

    public static int getLayoutDirectionFromLocale(Locale locale) {
        return -1;
    }

}
