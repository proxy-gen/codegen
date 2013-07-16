#!/usr/bin/env python
# iosgenerator.py
# c++ generator, targeted for ios platform
#
# Copyright (c) 2011 - Zynga Inc.

from inspector import ocinspect
from generator import BaseGenerator

class Generator(BaseGenerator):
	def __init__(self):
		super(Generator, self).__init__()

	def setup(self):
		self._setup_inspector()

	def generate(self):
		None

	def teardown(self):
		self._teardown_inspector()

	def _setup_inspector(self):
		logging.debug("_setup_index enter")
		self.inspector = ocinspect.Index.create(self.jvm_options)
		logging.debug("_setup_index exit")

	def _teardown_inspector(self):
		
