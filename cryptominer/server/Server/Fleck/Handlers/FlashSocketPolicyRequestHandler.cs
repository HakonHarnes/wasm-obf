using System;
using System.Collections.Generic;
using System.Text;

// https://github.com/statianzo/Fleck

// The MIT License

// Copyright (c) 2010-2016 Jason Staten

// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

namespace Fleck.Handlers
{
    public class FlashSocketPolicyRequestHandler
    {
        public static string PolicyResponse = 
"<?xml version=\"1.0\"?>\n" +
"<cross-domain-policy>\n" +
"   <allow-access-from domain=\"*\" to-ports=\"*\"/>\n" +
"   <site-control permitted-cross-domain-policies=\"all\"/>\n" +
"</cross-domain-policy>\n" +
"\0";

        public static IHandler Create(WebSocketHttpRequest request)
        {
            return new ComposableHandler
            {
                Handshake = sub => FlashSocketPolicyRequestHandler.Handshake(request, sub),
            };
        }
        
        public static byte[] Handshake(WebSocketHttpRequest request, string subProtocol)
        {
            FleckLog.Debug("Building Flash Socket Policy Response");
            return Encoding.UTF8.GetBytes(PolicyResponse);
        }
    }
}

