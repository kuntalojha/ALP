import { defineConfig } from 'vitepress';

// https://vitepress.dev/reference/site-config
export default defineConfig({
  title: 'Advanced Linux Programming',
  description: 'NOTE',
  base: '/ALP/', // make sure this matches your GitHub repo if deploying to Pages

  themeConfig: {
    nav: [
      { text: 'Home', link: '/' },
      { text: 'Question', link: '/question' }, 
      { text: 'Syllabus', link: '/syllabus' }, 
    ],

    sidebar: [
      {
        text: 'Advanced Linux Programming',
        collapsed: false,
        items: [
          { text: 'Module 01', link: '/alp/modules/module-1/module-1' },
          { text: 'Module 02', link: '/alp/modules/module-2/module-2' },
          { text: 'Module 03', link: '/alp/modules/module-3/module-3' },
          { text: 'Module 04', link: '/alp/modules/module-4/module-4' },
          { text: 'Module 05', link: '/alp/modules/module-5/module-5' },
        ],
      },
      {
        text: 'Advanced Linux Programming Lab',
        collapsed: true,
        items: [
          { text: 'Experiment 01', link: '/alplab/exp-1' },
          { text: 'Experiment 02', link: '/alplab/exp-2' },
          { text: 'Experiment 03', link: '/alplab/exp-3' },
          { text: 'Experiment 04', link: '/alplab/exp-4' },
          { text: 'Experiment 05', link: '/alplab/exp-5' },
          { text: 'Experiment 06', link: '/alplab/exp-6' },
          { text: 'Experiment 07', link: '/alplab/exp-7' },
          { text: 'Experiment 08', link: '/alplab/exp-8' },
          { text: 'Experiment 09', link: '/alplab/exp-9' },
          { text: 'Experiment 10', link: '/alplab/exp-10' },
        ],
      },
    ],

    socialLinks: [
      { icon: 'github', link: 'https://github.com/kuntalojha' },
      { icon: 'linkedin', link: 'https://www.linkedin.com/in/mrkuntalojha/' },
      // { icon: 'twitter', link: 'https://x.com/kuntalojha' },
      // { icon: 'youtube', link: 'https://www.youtube.com/@kuntalojhadev' },
    ],

    footer: {
      message: 'Released under the MIT License.',
      copyright: 'Copyright © 2025 <a href="https://www.linkedin.com/in/mrkuntalojha/" target="_blank" rel="noopener noreferrer">Kuntal Ojha</a>',
    },
  },
});
