#!/usr/bin/env ruby

require 'webrick'
include WEBrick
PORT = 8888
s = HTTPServer.new(:Port => PORT, :DocumentRoot => '.')
trap("INT") { s.shutdown }
s.start

