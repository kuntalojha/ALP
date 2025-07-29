import { defineConfig } from 'vitepress';

// https://vitepress.dev/reference/site-config
export default defineConfig({
  title: 'Advanced Linux Programming',
  base: '/ALP/',
  description: 'NOTE',

  themeConfig: {
    // https://vitepress.dev/reference/default-theme-config
    nav: [
      { text: 'Home', link: '/' },
      { text: 'Question', link: 'question' },
    ],

    sidebar: [
      {
        text: 'Advanced Linux Programming',
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
        items: [
          { text: 'Experiment 01', link: '/alplab/exp-1.md' },
          { text: 'Experiment 02', link: '/alplab/exp-2.md' },
          { text: 'Experiment 03', link: '/alplab/exp-3.md' },
          { text: 'Experiment 04', link: '/alplab/exp-4.md' },
          { text: 'Experiment 05', link: '/alplab/exp-5.md' },
          { text: 'Experiment 06', link: '/alplab/exp-6.md' },
          { text: 'Experiment 07', link: '/alplab/exp-7.md' },
          { text: 'Experiment 08', link: '/alplab/exp-8.md' },
          { text: 'Experiment 09', link: '/alplab/exp-9.md' },
          { text: 'Experiment 10', link: '/alplab/exp-10.md' },
        ],
      },
    ],

    socialLinks: [
      { icon: 'github', link: 'https://github.com/kuntalojha' },
      { icon: 'linkedin', link: 'https://www.linkedin.com/in/mrkuntalojha/' },
      { icon: 'twitter', link: 'https://x.com/kuntalojha' },
      { icon: 'youtube', link: 'https://www.youtube.com/@kuntalojhadev' },
      //{ icon: 'youtube', link: 'https://www.youtube.com/@kuntalojha' },
    ],
  },
});
