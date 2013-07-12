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

// Stubbed out impl
// rvergis@zynga.com

package android.os;

import android.util.Printer;

public class Handler {

	public interface Callback {
		public boolean handleMessage(Message msg);
	}

	public void handleMessage(Message msg) {
	}

	public void dispatchMessage(Message msg) {

	}

	public Handler() {
		this(null, false);
	}

	public Handler(Callback callback) {
		this(callback, false);
	}

	public Handler(Looper looper) {
		this(looper, null, false);
	}

	public Handler(Looper looper, Callback callback) {
		this(looper, callback, false);
	}

	public Handler(boolean async) {
		this(null, async);
	}

	public Handler(Callback callback, boolean async) {
	}

	public Handler(Looper looper, Callback callback, boolean async) {
	}

	public String getMessageName(Message message) {
		return null;
	}

	public final Message obtainMessage() {
		return Message.obtain(this);
	}

	public final Message obtainMessage(int what) {
		return Message.obtain(this, what);
	}

	public final Message obtainMessage(int what, Object obj) {
		return Message.obtain(this, what, obj);
	}

	public final Message obtainMessage(int what, int arg1, int arg2) {
		return Message.obtain(this, what, arg1, arg2);
	}

	public final Message obtainMessage(int what, int arg1, int arg2, Object obj) {
		return Message.obtain(this, what, arg1, arg2, obj);
	}

	public final boolean post(Runnable r) {
		return false;
	}

	public final boolean postAtTime(Runnable r, long uptimeMillis) {
		return false;
	}

	public final boolean postAtTime(Runnable r, Object token, long uptimeMillis) {
		return false;
	}

	public final boolean postDelayed(Runnable r, long delayMillis) {
		return false;
	}

	public final boolean postAtFrontOfQueue(Runnable r) {
		return false;
	}

	public final boolean runWithScissors(final Runnable r, long timeout) {
		return false;
	}

	public final void removeCallbacks(Runnable r) {

	}

	public final void removeCallbacks(Runnable r, Object token) {
	}

	public final boolean sendMessage(Message msg) {
		return false;
	}

	public final boolean sendEmptyMessage(int what) {
		return false;
	}

	public final boolean sendEmptyMessageDelayed(int what, long delayMillis) {
		return false;
	}

	public final boolean sendEmptyMessageAtTime(int what, long uptimeMillis) {
		return false;
	}

	public final boolean sendMessageDelayed(Message msg, long delayMillis) {
		return false;
	}

	public boolean sendMessageAtTime(Message msg, long uptimeMillis) {
		return false;
	}

	public final boolean sendMessageAtFrontOfQueue(Message msg) {
		return false;
	}

	public final void removeMessages(int what) {
	}

	public final void removeMessages(int what, Object object) {
	}

	public final void removeCallbacksAndMessages(Object token) {
	}

	public final boolean hasMessages(int what) {
		return false;
	}

	public final boolean hasMessages(int what, Object object) {
		return false;
	}

	public final boolean hasCallbacks(Runnable r) {
		return false;
	}

	public final Looper getLooper() {
		return null;
	}

	public final void dump(Printer pw, String prefix) {

	}

	@Override
	public String toString() {
		return null;
	}

}
